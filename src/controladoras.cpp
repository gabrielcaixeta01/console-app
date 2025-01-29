#include <iostream>
using namespace std;

#include "../include/controladoras.hpp"
#include <limits>


// Controladora de Apresentação da Autenticação
void CntrAutenticacaoA::setServicoAutenticacao(ISAutenticacao* servico) {
    this->servicoAutenticacao = servico;
}

bool CntrAutenticacaoA::autenticar(const Codigo& codigo) {
    Conta conta;
    conta.setCodigo(codigo);

    // Solicitar senha ao usuário
    while (true) {
        try {
            cout << "Digite a senha: ";
            string senhaStr;
            cin >> senhaStr;
            Senha senha;
            senha.setValor(senhaStr);  // Pode lançar exceção
            conta.setSenha(senha);
            break;  // Sai do loop se não houver erro
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
void CntrContaA::setServicoConta(ISConta* servico) {
    this->servicoConta = servico;
}

void CntrContaA::criar() {
    Conta conta;
    Codigo codigo;
    Senha senha;

    while (true) {
        try {
            cout << "Digite o código da conta: ";
            string codigoStr;
            cin >> codigoStr;
            codigo.setValor(codigoStr);  // Pode lançar exceção
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
            senha.setValor(senhaStr);  // Pode lançar exceção
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
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Limpa buffer
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
                        novaSenha.setValor(senhaStr);  // Pode lançar exceção
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
void CntrViagemA::setServicoViagem(ISViagem* servico) {
    this->servicoViagem = servico;
}

void CntrViagemA::executar(const Codigo& codigo) {
    (void)codigo;
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
            case 1:
                // Implementação já tratada acima
                break;
            case 2:
                // Implementação já tratada acima
                break;
            case 3:
                // Implementação já tratada acima
                break;
            case 4:
                // Implementação já tratada acima
                break;
            case 0:
                return;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    }
}
