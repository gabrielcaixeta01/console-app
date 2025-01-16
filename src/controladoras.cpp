#include <iostream>
using namespace std;

#include "../include/controladoras.hpp"

// Controladora de Apresentação da Autenticação
void CntrAutenticacaoA::setServicoAutenticacao(ISAutenticacao* servico) {
    this->servicoAutenticacao = servico;
}

bool CntrAutenticacaoA::autenticar(const Codigo& codigo) {
    Conta conta;
    conta.setCodigo(codigo);

    // Solicitar senha ao usuário
    cout << "Digite a senha: ";
    string senhaStr;
    cin >> senhaStr;
    Senha senha;
    senha.setValor(senhaStr);
    conta.setSenha(senha);

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

    cout << "Digite o código da conta: ";
    string codigoStr;
    cin >> codigoStr;
    codigo.setValor(codigoStr);
    conta.setCodigo(codigo);

    cout << "Digite a senha da conta: ";
    string senhaStr;
    cin >> senhaStr;
    senha.setValor(senhaStr);
    conta.setSenha(senha);

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
        cin >> opcao;

        switch (opcao) {
            case 1: {
                Conta conta;
                Senha novaSenha;

                cout << "Digite a nova senha: ";
                string senhaStr;
                cin >> senhaStr;
                novaSenha.setValor(senhaStr);

                conta.setCodigo(codigo);
                conta.setSenha(novaSenha);

                if (servicoConta->atualizar(conta)) {
                    cout << "Conta atualizada com sucesso!" << endl;
                } else {
                    cout << "Erro ao atualizar a conta." << endl;
                }
            } break;

            case 2: {
                if (servicoConta->excluir(codigo)) {
                    cout << "Conta excluída com sucesso!" << endl;
                } else {
                    cout << "Erro ao excluir a conta." << endl;
                }
            } break;

            case 3: {
                Conta conta;

                if (servicoConta->ler(codigo, &conta)) { // Corrigido para passar dois argumentos
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
                break;
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
        cin >> opcao;

        switch (opcao) {
            case 1: {
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

            case 2: {
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

            case 3: {
                Codigo codigoViagem;

                cout << "Digite o código da viagem a ser excluída: ";
                string codigoStr;
                cin >> codigoStr;
                codigoViagem.setValor(codigoStr);

                if (servicoViagem->excluir(codigoViagem)) {
                    cout << "Viagem excluída com sucesso!" << endl;
                } else {
                    cout << "Erro ao excluir a viagem." << endl;
                }
            } break;

            case 4: {
                Viagem viagem;
                Codigo codigoViagem;

                cout << "Digite o código da viagem: ";
                string codigoStr;
                cin >> codigoStr;
                codigoViagem.setValor(codigoStr);

                if (servicoViagem->ler(codigoViagem, &viagem)) { // Corrigido para passar dois argumentos
                    cout << "Dados da viagem:" << endl;
                    cout << "Código: " << viagem.getCodigo().getValor() << endl;
                    cout << "Nome: " << viagem.getNome().getValor() << endl;
                } else {
                    cout << "Viagem não encontrada." << endl;
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