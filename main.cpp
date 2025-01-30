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

    // Associar StubServicoConta ao StubServicoAutenticacao
    servicoAutenticacao->setServicoConta(servicoConta);

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

menu_inicial:
    while (true) {
        cout << "\n--- Sistema de Gerenciamento ---" << endl;
        cout << "1 - Entrar na conta" << endl;
        cout << "2 - Criar uma nova conta" << endl;
        cout << "0 - Sair" << endl;
        cout << "Escolha uma opção: ";

        int opcaoInicial;
        cin >> opcaoInicial;

        switch (opcaoInicial) {
            case 1: { // Entrar na conta
                cout << "Digite o código da conta: ";
                string codigoStr;
                cin >> codigoStr;

                cout << "Digite a senha: ";
                string senhaStr;
                cin >> senhaStr;

                try {
                    Conta conta;
                    conta.setCodigo(Codigo(codigoStr));
                    conta.setSenha(Senha(senhaStr));

                    if (servicoAutenticacao->autenticar(conta)) { // Chamada corrigida
                        cout << "Bem-vindo! Código autenticado: " << conta.getCodigo().getValor() << endl;
                        codigoConta = conta.getCodigo();  // Atualiza o código da conta autenticada
                    } else {
                        cout << "Erro na autenticação. Tente novamente." << endl;
                        continue;  // Volta ao menu inicial
                    }
                } catch (const invalid_argument& e) {
                    cout << "Erro: " << e.what() << ". Tente novamente." << endl;
                    continue;
                }
                break;
            }

            case 2: { // Criar uma nova conta
                cout << "Criando uma nova conta..." << endl;
                cntrConta->criar();
                continue;  // Volta ao menu inicial
            }

            case 0: { // Sair do sistema
                cout << "Saindo do sistema..." << endl;
                delete cntrAutenticacao;
                delete servicoAutenticacao;
                delete cntrConta;
                delete servicoConta;
                delete cntrViagem;
                delete servicoViagem;
                return 0;
            }

            default:
                cout << "Opção inválida. Tente novamente." << endl;
                continue;
        }

        // Menu principal (acessível apenas após autenticação bem-sucedida)
        int opcaoPrincipal;
        while (true) {
            cout << "\nMenu Principal" << endl;
            cout << "1 - Gerenciar Conta" << endl;
            cout << "2 - Gerenciar Viagens" << endl;
            cout << "0 - Voltar ao Menu Inicial" << endl;
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
                continue;
            }

            switch (opcaoPrincipal) {
                case 1:
                    cntrConta->executar(codigoConta);
                    break;
                case 2:
                    cntrViagem->executar(codigoConta);
                    break;
                case 0:
                    goto menu_inicial;  // Voltar ao menu inicial
                default:
                    cout << "Opção inválida. Tente novamente." << endl;
            }
        }
    }
}
