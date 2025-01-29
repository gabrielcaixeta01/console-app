#include <iostream>
#include "controladoras.hpp"
#include "stubs.hpp"
#include "containers.hpp"

using namespace std;

int main() {
    // Instanciar controladoras e stubs
    CntrAutenticacaoA* cntrAutenticacao = new CntrAutenticacaoA();
    StubServicoAutenticacao* servicoAutenticacao = new StubServicoAutenticacao();
    cntrAutenticacao->setServicoAutenticacao(servicoAutenticacao);

    CntrContaA* cntrConta = new CntrContaA();
    StubServicoConta* servicoConta = new StubServicoConta();
    cntrConta->setServicoConta(servicoConta);

    CntrViagemA* cntrViagem = new CntrViagemA();
    StubServicoViagem* servicoViagem = new StubServicoViagem();
    cntrViagem->setServicoViagem(servicoViagem);

    // Instanciar Containers
    ContainerConta containerConta;
    ContainerViagem containerViagem;
    ContainerDestino containerDestino;
    ContainerAtividade containerAtividade;
    ContainerHospedagem containerHospedagem;

    Codigo codigoConta;

    while (true) {
        cout << "--- Sistema de Gerenciamento ---" << endl;
        cout << "Digite o código da conta: ";
        string codigoStr;
        cin >> codigoStr;

        Codigo codigo;
        try {
            codigo.setValor(codigoStr);  // Pode lançar uma exceção
        } catch (const invalid_argument& e) {
            cout << "Erro: " << e.what() << ". Tente novamente." << endl;
            continue;  // Volta ao início do loop sem continuar o processo
        }

        if (cntrAutenticacao->autenticar(codigo)) {
            cout << "Bem-vindo! Código autenticado: " << codigo.getValor() << endl;
            codigoConta = codigo;  // Atualiza a variável codigoConta com o código autenticado
        } else {
            cout << "Erro na autenticação. Tente novamente." << endl;
            continue;  // Se falhar na autenticação, volta ao início do loop
        }

        // Teste de inclusão nos containers
        try {
            Conta conta_1;
            conta_1.setCodigo(Codigo("ABC123"));
            conta_1.setSenha(Senha("18340"));
            bool resultado = containerConta.incluir(conta_1);
            cout << (resultado ? "Sucesso na inclusão de Conta" : "Erro na inclusão de Conta") << endl;

            Viagem viagem_1;
            viagem_1.setCodigo(Codigo("VIA123"));
            viagem_1.setNome(Nome("Viagem ao Brasil"));
            resultado = containerViagem.incluir(viagem_1);
            cout << (resultado ? "Sucesso na inclusão de Viagem" : "Erro na inclusão de Viagem") << endl;

            Destino destino_1;
            destino_1.setCodigo(Codigo("DES123"));
            destino_1.setNome(Nome("Rio de Janeiro"));
            resultado = containerDestino.incluir(destino_1);
            cout << (resultado ? "Sucesso na inclusão de Destino" : "Erro na inclusão de Destino") << endl;

            Atividade atividade_1;
            atividade_1.setNome(Nome("Passeio de Barco"));
            atividade_1.setDuracao(Duracao("120"));
            atividade_1.setPreco(Dinheiro("150,00"));
            resultado = containerAtividade.incluir(atividade_1);
            cout << (resultado ? "Sucesso na inclusão de Atividade" : "Erro na inclusão de Atividade") << endl;

            Hospedagem hospedagem_1;
            hospedagem_1.setCodigo(Codigo("HOS123"));
            hospedagem_1.setNome(Nome("Hotel Rio Mar"));
            hospedagem_1.setDiaria(Dinheiro("300,00"));
            resultado = containerHospedagem.incluir(hospedagem_1);
            cout << (resultado ? "Sucesso na inclusão de Hospedagem" : "Erro na inclusão de Hospedagem") << endl;
        } catch (const invalid_argument& e) {
            cout << "Erro ao criar objetos: " << e.what() << endl;
            continue;  // Se der erro, volta para o início do loop
        }

        // Menu principal
        int opcaoPrincipal;
        while (true) {
            cout << "\nMenu Principal" << endl;
            cout << "1 - Gerenciar Conta" << endl;
            cout << "2 - Gerenciar Viagens" << endl;
            cout << "0 - Sair" << endl;
            cout << "Escolha uma opção: ";

            try {
                cin >> opcaoPrincipal;
                if (cin.fail()) {
                    throw invalid_argument("Entrada inválida. Insira um número.");
                }
            } catch (const invalid_argument& e) {
                cout << "Erro: " << e.what() << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Limpa buffer
                continue;  // Volta ao início do loop
            }

            switch (opcaoPrincipal) {
                case 1:
                    cntrConta->executar(codigoConta);
                    break;
                case 2:
                    cntrViagem->executar(codigoConta);
                    break;
                case 0:
                    cout << "Saindo do sistema..." << endl;
                    delete cntrAutenticacao;
                    delete servicoAutenticacao;
                    delete cntrConta;
                    delete servicoConta;
                    delete cntrViagem;
                    delete servicoViagem;
                    return 0;
                default:
                    cout << "Opção inválida. Tente novamente." << endl;
            }
        }
    }
}
