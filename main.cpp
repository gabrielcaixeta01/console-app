#include <iostream>
#include "interfaces.hpp" // Certifique-se de incluir os headers corretos para as interfaces usadas
#include "controladoras.hpp" // Certifique-se de incluir as controladoras corretas
#include "stubs.hpp" // Certifique-se de incluir os stubs necessários

using namespace std;

void menuViagens() {
    int opcao;
    while (true) {
        cout << "\nMenu Viagens" << endl;
        cout << "1 - Criar Viagem" << endl;
        cout << "2 - Listar Viagens" << endl;
        cout << "3 - Atualizar Viagem" << endl;
        cout << "4 - Excluir Viagem" << endl;
        cout << "5 - Consultar Viagem" << endl;
        cout << "0 - Voltar ao Menu Principal" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                cout << "Funcionalidade: Criar Viagem" << endl;
                Viagem novaViagem;
                Codigo codigoViagem;
                Nome nomeViagem;

                cout << "Digite o código da viagem: ";
                string codigoStr;
                cin >> codigoStr;
                codigoViagem.setValor(codigoStr);

                cout << "Digite o nome da viagem: ";
                string nomeStr;
                cin.ignore(); // Limpar o buffer do cin
                getline(cin, nomeStr);
                nomeViagem.setValor(nomeStr);

                novaViagem.setCodigo(codigoViagem);
                novaViagem.setNome(nomeViagem);

                if (StubServicoViagem().criarViagem(novaViagem)) {
                    cout << "Viagem criada com sucesso." << endl;
                } else {
                    cout << "Erro: Não foi possível criar a viagem." << endl;
                }
            } break;

            case 2:
                cout << "Funcionalidade: Listar Viagens" << endl;
                StubServicoViagem().listarViagens();
                break;

            case 3: {
                cout << "Funcionalidade: Atualizar Viagem" << endl;
                Codigo codigoViagem;
                Nome novoNomeViagem;

                cout << "Digite o código da viagem a ser atualizada: ";
                string codigoStr;
                cin >> codigoStr;
                codigoViagem.setValor(codigoStr);

                cout << "Digite o novo nome da viagem: ";
                string nomeStr;
                cin.ignore(); // Limpar o buffer do cin
                getline(cin, nomeStr);
                novoNomeViagem.setValor(nomeStr);

                Viagem viagemAtualizada;
                viagemAtualizada.setCodigo(codigoViagem);
                viagemAtualizada.setNome(novoNomeViagem);

                if (StubServicoViagem().atualizarViagem(viagemAtualizada)) {
                    cout << "Viagem atualizada com sucesso." << endl;
                } else {
                    cout << "Erro: Não foi possível atualizar a viagem." << endl;
                }
            } break;

            case 4: {
                cout << "Funcionalidade: Excluir Viagem" << endl;
                Codigo codigoViagem;

                cout << "Digite o código da viagem a ser excluída: ";
                string codigoStr;
                cin >> codigoStr;
                codigoViagem.setValor(codigoStr);

                if (StubServicoViagem().excluirViagem(codigoViagem)) {
                    cout << "Viagem excluída com sucesso." << endl;
                } else {
                    cout << "Erro: Não foi possível excluir a viagem." << endl;
                }
            } break;

            case 5: {
                cout << "Funcioalidade: Consultar Viagem" << endl;
                Codigo codigoViagem;

                cout << "Digite o código da viagem a ser consultada: ";
                string codigoStr;
                cin >> codigoStr;
                codigoViagem.setValor(codigoStr);

                StubServicoViagem().consultarViagem(codigoViagem);
            }

            case 0:
                return;

            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }
    }
}

void menuDestinos() {
    int opcao;
    while (true) {
        cout << "\nMenu Destinos" << endl;
        cout << "1 - Adicionar Destino" << endl;
        cout << "2 - Remover Destino" << endl;
        cout << "3 - Consultar Destino" << endl;
        cout << "0 - Voltar ao Menu Principal" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                cout << "Funcionalidade: Adicionar Destino" << endl;
                Destino novoDestino;
                Codigo codigoDestino;
                Nome nomeDestino;

                cout << "Digite o código do destino: ";
                string codigoStr;
                cin >> codigoStr;
                codigoDestino.setValor(codigoStr);

                cout << "Digite o nome do destino: ";
                string nomeStr;
                cin.ignore(); // Limpar o buffer do cin
                getline(cin, nomeStr);
                nomeDestino.setValor(nomeStr);

                novoDestino.setCodigo(codigoDestino);
                novoDestino.setNome(nomeDestino);

                if (StubServicoDestino().adicionarDestino(novoDestino)) {
                    cout << "Destino criado com sucesso." << endl;
                } else {
                    cout << "Erro: Não foi possível criar o destino." << endl;
                }
            } break;

            case 2:
                cout << "Funcionalidade: Remover Destino" << endl;
                // Adicione aqui a lógica para excluir destino
                break;

            case 3:
                cout << "Funcionalidade: Consultar Destino" << endl;
                // Adicione aqui a lógica para listar destinos
                break;

            case 0:
                return;

            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }
    }
}


void menuAtividades() {
    int opcao;
    while (true) {
        cout << "\nMenu Atividades" << endl;
        cout << "1 - Adicionar Atividade" << endl;
        cout << "2 - Excluir Atividade" << endl;
        cout << "0 - Voltar ao Menu Principal" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                cout << "Funcionalidade: Adicionar Atividade" << endl;
                Atividade novaAtividade;
                Nome nomeAtividade;

                cout << "Digite o nome da atividade: ";
                string nomeStr;
                cin.ignore();
                getline(cin, nomeStr);
                nomeAtividade.setValor(nomeStr);

                novaAtividade.setNome(nomeAtividade);

                if (StubServicoAtividade().adicionarAtividade(novaAtividade)) {
                    cout << "Atividade criada com sucesso." << endl;
                } else {
                    cout << "Erro: Não foi possível criar a atividade." << endl;
                }
            } break;

            case 2: {
                cout << "Funcionalidade: Remover Atividade" << endl;
                Nome nomeAtividade;

                cout << "Digite o nome da atividade a ser excluída: ";
                string nomeStr;
                cin.ignore();
                getline(cin, nomeStr);
                nomeAtividade.setValor(nomeStr);

                if (StubServicoAtividade().removerAtividade(nomeAtividade)) {
                    cout << "Atividade excluída com sucesso." << endl;
                } else {
                    cout << "Erro: Não foi possível excluir a atividade." << endl;
                }
            } break;

            case 0:
                return;

            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }
    }
}

void menuHospedagens() {
    int opcao;
    while (true) {
        cout << "\nMenu Hospedagens" << endl;
        cout << "1 - Adicionar Hospedagem" << endl;
        cout << "2 - Remover Hospedagem" << endl;
        cout << "3 - Consultar Hospedagem" << endl;
        cout << "0 - Voltar ao Menu Principal" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                cout << "Funcionalidade: Adicionar Hospedagem" << endl;
                Hospedagem novaHospedagem;
                Codigo codigoHospedagem;

                cout << "Digite o código da hospedagem: ";
                string codigoStr;
                cin >> codigoStr;
                codigoHospedagem.setValor(codigoStr);

                novaHospedagem.setCodigo(codigoHospedagem);

                if (StubServicoHospedagem().adicionarHospedagem(novaHospedagem)) {
                    cout << "Hospedagem criada com sucesso." << endl;
                } else {
                    cout << "Erro: Não foi possível criar a hospedagem." << endl;
                }
            } break;

            case 2: {
                cout << "Funcionalidade: Remover Hospedagem" << endl;
                Codigo codigoHospedagem;

                cout << "Digite o código da hospedagem a ser excluída: ";
                string codigoStr;
                cin >> codigoStr;
                codigoHospedagem.setValor(codigoStr);

                if (StubServicoHospedagem().removerHospedagem(codigoHospedagem)) {
                    cout << "Hospedagem excluída com sucesso." << endl;
                } else {
                    cout << "Erro: Não foi possível excluir a hospedagem." << endl;
                }
            } break;

            case 3:
                cout << "Funcionalidade: Consultar Hospedagem" << endl;
                // Adicione aqui a lógica para atualizar hospedagem
                break;

            case 0:
                return;

            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }
    }
}

int main() {
    // Instanciar controladora e stub
    IUAutenticacao* cntrIUAutenticacao = new CntrIUAutenticacao();
    IServicoAutenticacao* stubLNAutenticacao = new StubServicoAutenticacao();

    // Conectar a controladora com o stub
    cntrIUAutenticacao->setServicoAutenticacao(stubLNAutenticacao);

    bool resultado;
    Codigo codigo;

    while (true) {
        cout << endl << "Tela inicial do sistema:" << endl;

        try {
            resultado = cntrIUAutenticacao->autenticar(&codigo);
        } catch (const runtime_error& e) {
            cout << "Erro de sistema: " << e.what() << endl;
            break;
        }

        if (resultado) {
            cout << endl << "Sucesso na autenticação." << endl;
            cout << "Código da Conta: " << codigo.getValor() << endl;

            int opcao;
            while (true) {
                cout << "\nMenu Principal" << endl;
                cout << "1 - Gerenciar Viagens" << endl;
                cout << "2 - Gerenciar Destinos" << endl;
                cout << "3 - Gerenciar Atividades" << endl;
                cout << "4 - Gerenciar Hospedagens" << endl;
                cout << "0 - Sair" << endl;
                cout << "Escolha uma opção: ";
                cin >> opcao;

                switch (opcao) {
                    case 1:
                        menuViagens();
                        break;
                    case 2:
                        menuDestinos();
                        break;
                    case 3:
                        menuAtividades();
                        break;
                    case 4:
                        menuHospedagens();
                        break;
                    case 0:
                        cout << "Saindo do sistema..." << endl;
                        delete cntrIUAutenticacao;
                        delete stubLNAutenticacao;
                        return 0;
                    default:
                        cout << "Opção inválida. Tente novamente." << endl;
                        break;
                }
            }
        } else {
            cout << "Erro na autenticação. Tente novamente." << endl;
        }
    }
}