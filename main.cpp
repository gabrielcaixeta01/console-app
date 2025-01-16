#include <iostream>
#include "interfaces.hpp" // Certifique-se de incluir os headers corretos para as interfaces usadas
#include "controladoras.hpp" // Certifique-se de incluir as controladoras corretas
#include "stubs.hpp" // Certifique-se de incluir os stubs necessários

using namespace std;

int main() {
    // Instanciar controladora e stub
    IUAutenticacao* cntrIUAutenticacao = new CntrIUAutenticacao();
    IServicoAutenticacao* stubLNAutenticacao = new StubServicoAutenticacao();

    // Conectar a controladora com o stub
    cntrIUAutenticacao->setServicoAutenticacao(stubLNAutenticacao);

    bool resultado;
    Codigo codigo; // Para armazenar o código da conta autenticada

    while (true) {
        // Tela inicial do sistema
        cout << endl << "Tela inicial do sistema:" << endl;

        try {
            // Solicitar serviço de autenticação
            resultado = cntrIUAutenticacao->autenticar(&codigo);
        } catch (const runtime_error& e) {
            cout << "Erro de sistema: " << e.what() << endl;
            break;
        }

        // Verificar resultado da autenticação
        if (resultado) {
            cout << endl << "Sucesso na autenticação." << endl;
            cout << "Código da Conta: " << codigo.getValor() << endl;

            // Menu principal após autenticação
            int opcao;
            while (true) {
                cout << "\nMenu Principal" << endl;
                cout << "1 - Criar Viagem" << endl;
                cout << "2 - Adicionar Destino" << endl;
                cout << "3 - Adicionar Atividade" << endl;
                cout << "4 - Adicionar Hospedagem" << endl;
                cout << "0 - Sair" << endl;
                cout << "Escolha uma opção: ";
                cin >> opcao;

                if (opcao == 0) {
                    cout << "Saindo do sistema..." << endl;
                    break;
                }

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

                        // Chamar o stub para criar a viagem
                        if (StubServicoViagem().criarViagem(novaViagem)) {
                            cout << "Viagem criada com sucesso." << endl;
                        } else {
                            cout << "Erro: Não foi possível criar a viagem." << endl;
                        }
                    } break;

                    case 2: {
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

                        // Chamar o stub para adicionar destino
                        if (StubServicoDestino().adicionarDestino(novoDestino)) {
                            cout << "Destino adicionado com sucesso." << endl;
                        } else {
                            cout << "Erro: Não foi possível adicionar o destino." << endl;
                        }
                    } break;

                    case 3: {
                        cout << "Funcionalidade: Adicionar Atividade" << endl;

                        Atividade novaAtividade;
                        Nome nomeAtividade;

                        cout << "Digite o nome da atividade: ";
                        string nomeStr;
                        cin.ignore();
                        getline(cin, nomeStr);
                        nomeAtividade.setValor(nomeStr);

                        novaAtividade.setNome(nomeAtividade);

                        // Chamar o stub para adicionar atividade
                        if (StubServicoAtividade().adicionarAtividade(novaAtividade)) {
                            cout << "Atividade adicionada com sucesso." << endl;
                        } else {
                            cout << "Erro: Não foi possível adicionar a atividade." << endl;
                        }
                    } break;

                    case 4: {
                        cout << "Funcionalidade: Adicionar Hospedagem" << endl;

                        Hospedagem novaHospedagem;
                        Codigo codigoHospedagem;

                        cout << "Digite o código da hospedagem: ";
                        string codigoStr;
                        cin >> codigoStr;
                        codigoHospedagem.setValor(codigoStr);

                        novaHospedagem.setCodigo(codigoHospedagem);

                        // Chamar o stub para adicionar hospedagem
                        if (StubServicoHospedagem().adicionarHospedagem(novaHospedagem)) {
                            cout << "Hospedagem adicionada com sucesso." << endl;
                        } else {
                            cout << "Erro: Não foi possível adicionar a hospedagem." << endl;
                        }
                    } break;

                    default:
                        cout << "Opção inválida. Tente novamente." << endl;
                        break;
                }
            }

            break; // Sai do loop principal após sair do menu
        } else {
            cout << "Erro na autenticação. Tente novamente." << endl;
        }
    }

    // Limpeza de memória
    delete cntrIUAutenticacao;
    delete stubLNAutenticacao;

    return 0;
}