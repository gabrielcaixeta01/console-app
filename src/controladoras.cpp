#include <iostream>
using namespace std;

#include "../include/controladoras.hpp"
#include <limits>

// Controladora de Apresentação da Autenticação

/**
 * @brief Define o serviço de autenticação a ser utilizado pela controladora.
 * @param servico Ponteiro para o serviço de autenticação.
 */
void CntrAutenticacaoA::setServicoAutenticacao(ISAutenticacao* servico) {
    this->servicoAutenticacao = servico;
}

/**
 * @brief Autentica um usuário com base no código fornecido.
 * @param codigo Código do usuário a ser autenticado.
 * @return true se a autenticação for bem-sucedida, false caso contrário.
 */
bool CntrAutenticacaoA::autenticar(const Codigo& codigo) {
    Conta conta;
    conta.setCodigo(codigo);

    while (true) {
        try {
            cout << "Digite a senha: ";
            string senhaStr;
            cin >> senhaStr;
            Senha senha;
            senha.setValor(senhaStr);
            conta.setSenha(senha);
            break;
        } catch (const invalid_argument& e) {
            cout << "Erro: " << e.what() << ". Tente novamente." << endl;
        }
    }

    if (servicoAutenticacao->autenticar(conta)) {
        cout << "Autenticação bem-sucedida para o código: " << codigo.getValor() << endl;
        return true;
    } else {
        cout << "Falha na autenticação para o código: " << codigo.getValor() << endl;
        return false;
    }
}

// Controladora de Apresentação da Conta

/**
 * @brief Define o serviço de conta a ser utilizado pela controladora.
 * @param servico Ponteiro para o serviço de conta.
 */
void CntrContaA::setServicoConta(ISConta* servico) {
    this->servicoConta = servico;
}

/**
 * @brief Cria uma nova conta.
 */
void CntrContaA::criar() {
    Conta conta;
    Codigo codigo;
    Senha senha;

    while (true) {
        try {
            cout << "Digite o código da conta: ";
            string codigoStr;
            cin >> codigoStr;
            codigo.setValor(codigoStr);
            conta.setCodigo(codigo);
            break;
        } catch (const invalid_argument& e) {
            cout << "Erro: " << e.what() << ". Tente novamente." << endl;
        }
    }

    while (true) {
        try {
            cout << "Digite a senha da conta: ";
            string senhaStr;
            cin >> senhaStr;
            senha.setValor(senhaStr);
            conta.setSenha(senha);
            break;
        } catch (const invalid_argument& e) {
            cout << "Erro: " << e.what() << ". Tente novamente." << endl;
        }
    }

    if (servicoConta->criar(conta)) {
        cout << "Conta criada com sucesso!" << endl;
    } else {
        cout << "Erro ao criar conta. Já existe uma conta com este código." << endl;
    }
}

/**
 * @brief Executa operações relacionadas à conta com base no código fornecido.
 * @param codigo Código da conta a ser manipulada.
 */
void CntrContaA::executar(const Codigo& codigo) {
    int opcao;
    while (true) {
        cout << "\nMenu Conta" << endl;
        cout << "1 - Atualizar Conta" << endl;
        cout << "2 - Excluir Conta" << endl;
        cout << "3 - Ler Conta" << endl;
        cout << "0 - Voltar" << endl;
        cout << "Escolha uma opção: ";

        try {
            cin >> opcao;
            if (cin.fail()) {
                throw invalid_argument("Entrada inválida. Insira um número.");
            }
        } catch (const invalid_argument& e) {
            cout << "Erro: " << e.what() << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (opcao) {
            case 1: {
                Conta conta;
                Senha novaSenha;

                while (true) {
                    try {
                        cout << "Digite a nova senha: ";
                        string senhaStr;
                        cin >> senhaStr;
                        novaSenha.setValor(senhaStr);
                        break;
                    } catch (const invalid_argument& e) {
                        cout << "Erro: " << e.what() << ". Tente novamente." << endl;
                    }
                }

                conta.setCodigo(codigo);
                conta.setSenha(novaSenha);

                if (servicoConta->atualizar(conta)) {
                    cout << "Conta atualizada com sucesso!" << endl;
                } else {
                    cout << "Erro ao atualizar a conta." << endl;
                }
            } break;

            case 2:
                if (servicoConta->excluir(codigo)) {
                    cout << "Conta excluída com sucesso!" << endl;
                } else {
                    cout << "Erro ao excluir a conta." << endl;
                }
                break;

            case 3: {
                Conta conta;
                if (servicoConta->ler(codigo, &conta)) {
                    cout << "Dados da conta:" << endl;
                    cout << "Código: " << conta.getCodigo().getValor() << endl;
                    cout << "Senha: " << conta.getSenha().getValor() << endl;
                } else {
                    cout << "Conta não encontrada." << endl;
                }
            } break;

            case 0:
                return;

            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    }
}

// Controladora de Apresentação da Viagem

/**
 * @brief Define o serviço de viagem a ser utilizado pela controladora.
 * @param servico Ponteiro para o serviço de viagem.
 */
void CntrViagemA::setServicoViagem(ISViagem* servico) {
    this->servicoViagem = servico;
}

/**
 * @brief Executa operações relacionadas à viagem com base no código fornecido.
 * @param codigo Código da viagem a ser manipulada.
 */
void CntrViagemA::executar(const Codigo& codigo) {
    int opcao;
    while (true) {
        cout << "\nMenu Viagens" << endl;
        cout << "1 - Criar Viagem" << endl;
        cout << "2 - Atualizar Viagem" << endl;
        cout << "3 - Excluir Viagem" << endl;
        cout << "4 - Ler Viagem" << endl;
        cout << "0 - Voltar" << endl;
        cout << "Escolha uma opção: ";

        try {
            cin >> opcao;
            if (cin.fail()) {
                throw invalid_argument("Entrada inválida. Insira um número.");
            }
        } catch (const invalid_argument& e) {
            cout << "Erro: " << e.what() << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (opcao) {
            case 1: { // Criar viagem
                Viagem viagem;
                Codigo codigoViagem;
                Nome nomeViagem;

                cout << "Digite o código da viagem: ";
                string codigoStr;
                cin >> codigoStr;
                codigoViagem.setValor(codigoStr);

                cout << "Digite o nome da viagem: ";
                string nomeStr;
                cin.ignore();
                getline(cin, nomeStr);
                nomeViagem.setValor(nomeStr);

                viagem.setCodigo(codigoViagem);
                viagem.setNome(nomeViagem);

                if (servicoViagem->criar(viagem)) {
                    cout << "Viagem criada com sucesso!" << endl;
                } else {
                    cout << "Erro ao criar a viagem." << endl;
                }
            } break;

            case 2: { // Atualizar viagem
                Viagem viagemAtualizada;
                Codigo codigoViagem;
                Nome novoNome;

                cout << "Digite o código da viagem: ";
                string codigoStr;
                cin >> codigoStr;
                codigoViagem.setValor(codigoStr);

                cout << "Digite o novo nome da viagem: ";
                string nomeStr;
                cin.ignore();
                getline(cin, nomeStr);
                novoNome.setValor(nomeStr);

                viagemAtualizada.setCodigo(codigoViagem);
                viagemAtualizada.setNome(novoNome);

                if (servicoViagem->atualizar(viagemAtualizada)) {
                    cout << "Viagem atualizada com sucesso!" << endl;
                } else {
                    cout << "Erro ao atualizar a viagem." << endl;
                }
            } break;

            case 3: { // Excluir viagem
                Codigo codigoViagem;

                cout << "Digite o código da viagem: ";
                string codigoStr;
                cin >> codigoStr;
                codigoViagem.setValor(codigoStr);

                if (servicoViagem->excluir(codigoViagem)) {
                    cout << "Viagem excluída com sucesso!" << endl;
                } else {
                    cout << "Erro ao excluir a viagem." << endl;
                }
            } break;

            case 4: { // Ler viagem
                Viagem viagem;
                Codigo codigoViagem;

                cout << "Digite o código da viagem: ";
                string codigoStr;
                cin >> codigoStr;
                codigoViagem.setValor(codigoStr);

                if (servicoViagem->ler(codigoViagem, &viagem)) {
                    cout << "Código: " << viagem.getCodigo().getValor() << endl;
                    cout << "Nome: " << viagem.getNome().getValor() << endl;
                } else {
                    cout << "Erro: Viagem não encontrada." << endl;
                }
            } break;

            case 0:
                return;

            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    }
}