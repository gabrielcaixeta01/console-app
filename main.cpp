#include <iostream>
#include "controladoras.hpp"
#include "stubs.hpp"

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

    Codigo codigoConta;

    while (true) {
        cout << "--- Sistema de Gerenciamento ---" << endl;
        cout << "Digite o código da conta: ";
        string codigoStr;
        cin >> codigoStr;
        Codigo codigo;
        codigo.setValor(codigoStr);

        if (cntrAutenticacao->autenticar(codigo)) {
            cout << "Bem-vindo! Código autenticado: " << codigo.getValor() << endl;
            // Continua para o menu principal
        } else {
            cout << "Erro na autenticação. Tente novamente." << endl;
            // Opcionalmente, permita tentar novamente ou encerrar
        }

        // Menu principal
        int opcaoPrincipal;
        while (true) {
            cout << "\nMenu Principal" << endl;
            cout << "1 - Gerenciar Conta" << endl;
            cout << "2 - Gerenciar Viagens" << endl;
            cout << "0 - Sair" << endl;
            cout << "Escolha uma opção: ";
            cin >> opcaoPrincipal;

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