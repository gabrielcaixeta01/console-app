/**
 * @file main.cpp
 * @brief Ponto de entrada do sistema de gerenciamento.
 * 
 * Este arquivo contém a função principal que inicializa o sistema,
 * instanciando as controladoras, os serviços e os containers necessários.
 * Ele também gerencia a interação com o usuário através de menus.
 */

#include <iostream>
#include "controladoras.hpp"
#include "stubs.hpp"
#include "containers.hpp"

using namespace std;

/**
 * @brief Função principal do sistema.
 * 
 * Gerencia a inicialização dos serviços e controladoras, permitindo ao usuário
 * autenticar-se, criar contas e navegar pelos menus do sistema.
 * 
 * @return Retorna 0 ao finalizar a execução.
 */
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

                    if (servicoAutenticacao->autenticar(conta)) {
                        cout << "Bem-vindo! Código autenticado: " << conta.getCodigo().getValor() << endl;
                        codigoConta = conta.getCodigo();
                    } else {
                        cout << "Erro na autenticação. Tente novamente." << endl;
                        continue;
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
                continue;
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

menu_principal:
        while (true) {
            cout << "\nMenu Principal" << endl;
            cout << "1 - Gerenciar Conta" << endl;
            cout << "2 - Gerenciar Viagens" << endl;
            cout << "0 - Voltar ao Menu Inicial" << endl;
            cout << "Escolha uma opção: ";

            int opcaoPrincipal;
            cin >> opcaoPrincipal;

            switch (opcaoPrincipal) {
                case 1:
                    cntrConta->executar(codigoConta);
                    break;
                case 2: {
                    while (true) {
                        cout << "\nGerenciar Viagens" << endl;
                        cout << "1 - Criar Viagem" << endl;
                        cout << "2 - Atualizar Viagem" << endl;
                        cout << "3 - Excluir Viagem" << endl;
                        cout << "4 - Consultar Viagem" << endl;
                        cout << "0 - Voltar ao Menu Principal" << endl;
                        cout << "Escolha uma opção: ";
                        int opcaoViagem;
                        cin >> opcaoViagem;

                        switch (opcaoViagem) {
                            case 1: {
                                cout << "Criando nova viagem..." << endl;
                                cntrViagem->criarViagem(codigoConta);

                                cout << "\nDeseja adicionar informações à viagem?" << endl;
                                cout << "1 - Definir Destino" << endl;
                                cout << "2 - Definir Hospedagem" << endl;
                                cout << "3 - Definir Atividade" << endl;
                                cout << "0 - Concluir" << endl;

                                int opcaoDetalhe;
                                while (true) {
                                    cout << "\nEscolha uma opção: ";
                                    cin >> opcaoDetalhe;

                                    switch (opcaoDetalhe) {
                                        case 1:
                                            cntrViagem->definirDestino(codigoConta);
                                            break;
                                        case 2:
                                            cntrViagem->definirHospedagem(codigoConta);
                                            break;
                                        case 3:
                                            cntrViagem->definirAtividade(codigoConta);
                                            break;
                                        case 0:
                                            goto menu_principal;
                                        default:
                                            cout << "Opção inválida. Tente novamente." << endl;
                                    }
                                }
                                break;
                            }
                            case 2:
                                cntrViagem->atualizarViagem(codigoConta);
                                break;
                            case 3:
                                cntrViagem->excluirViagem(codigoConta);
                                break;
                            case 4:
                                cntrViagem->consultarViagem(codigoConta);
                                break;
                            case 0:
                                goto menu_principal;
                            default:
                                cout << "Opção inválida. Tente novamente." << endl;
                        }
                    }
                    break;
                }
                case 0:
                    goto menu_inicial;
                default:
                    cout << "Opção inválida. Tente novamente." << endl;
            }
        }
    }
}