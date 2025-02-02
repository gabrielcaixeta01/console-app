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
    (void)codigo; // Evita warning de parâmetro não usado
    cout << "Executando operações de viagem..." << endl;
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

void CntrViagemA::criarViagem(const Codigo& codigoConta) {
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

    // Primeiro, cria a viagem no sistema
    if (servicoViagem->criar(viagem)) {
        cout << "Viagem criada com sucesso!" << endl;
    } else {
        cout << "Erro ao criar viagem. Código já existe." << endl;
        return;
    }

    // Agora que a viagem foi criada, permitir adicionar informações
    int opcao;
    while (true) {
        cout << "\nDeseja adicionar informações à viagem?" << endl;
        cout << "1 - Definir Destino" << endl;
        cout << "2 - Definir Hospedagem" << endl;
        cout << "3 - Definir Atividade" << endl;
        cout << "0 - Concluir" << endl;
        cout << "\nEscolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                definirDestino(codigoViagem);  // Agora a viagem já existe antes de definir o destino
                break;
            case 2:
                definirHospedagem(codigoViagem);
                break;
            case 3:
                definirAtividade(codigoViagem);
                break;
            case 0:
                cout << "Finalizando criação da viagem." << endl;
                return;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    }
}

void CntrViagemA::definirDestino(const Codigo& codigoViagem) {
    Destino destino;
    Codigo codigoDestino;
    Nome nomeDestino;
    Data dataInicio, dataTermino;
    Avaliacao avaliacao;

    int tentativas = 3; // Número máximo de tentativas para inserir um destino válido

    while (tentativas > 0) {
        cout << "Digite o código do destino: ";
        string codigoStr;
        cin >> codigoStr;
        codigoDestino.setValor(codigoStr);

        cout << "Digite o nome do destino: ";
        string nomeStr;
        cin.ignore();
        getline(cin, nomeStr);
        nomeDestino.setValor(nomeStr);

        cout << "Digite a data de início (dd-mm-yy): ";
        string dataInicioStr;
        cin >> dataInicioStr;
        dataInicio.setValor(dataInicioStr);

        cout << "Digite a data de término (dd-mm-yy): ";
        string dataTerminoStr;
        cin >> dataTerminoStr;
        dataTermino.setValor(dataTerminoStr);

        cout << "Digite a avaliação do destino (1-5): ";
        int avaliacaoValor;
        cin >> avaliacaoValor;
        avaliacao.setValor(to_string(avaliacaoValor));

        destino.setCodigo(codigoDestino);
        destino.setNome(nomeDestino);
        destino.setDataInicio(dataInicio);
        destino.setDataTermino(dataTermino);
        destino.setAvaliacao(avaliacao);

        // Chama o serviço para definir o destino
        if (servicoViagem->definirDestino(codigoViagem, destino)) {
            cout << "Destino definido com sucesso!" << endl;
            return;
        } else {
            cout << "Erro: Viagem não encontrada para definir destino." << endl;
            tentativas--;

            if (tentativas > 0) {
                cout << "Tente novamente. Tentativas restantes: " << tentativas << endl;
            } else {
                cout << "Número máximo de tentativas atingido. Retornando ao menu." << endl;
            }
        }
    }
}

void CntrViagemA::definirHospedagem(const Codigo& codigoViagem) {
    Hospedagem hospedagem;
    cout << "Digite o código da hospedagem: ";
    string codigoStr;
    cin >> codigoStr;
    hospedagem.setCodigo(Codigo(codigoStr));

    cout << "Digite o nome da hospedagem: ";
    string nomeStr;
    cin.ignore();
    getline(cin, nomeStr);
    hospedagem.setNome(Nome(nomeStr));

    if (servicoViagem->definirHospedagem(codigoViagem, hospedagem)) {
        cout << "Hospedagem definida com sucesso!" << endl;
    } else {
        cout << "Erro ao definir hospedagem." << endl;
    }
}

void CntrViagemA::definirAtividade(const Codigo& codigoViagem) {
    Atividade atividade;
    cout << "Digite o código da atividade: ";
    string codigoStr;
    cin >> codigoStr;
    atividade.setCodigo(Codigo(codigoStr));

    cout << "Digite o nome da atividade: ";
    string nomeStr;
    cin.ignore();
    getline(cin, nomeStr);
    atividade.setNome(Nome(nomeStr));

    if (servicoViagem->definirAtividade(codigoViagem, atividade)) {
        cout << "Atividade definida com sucesso!" << endl;
    } else {
        cout << "Erro ao definir atividade." << endl;
    }
}

void CntrViagemA::atualizarViagem(const Codigo& codigoConta) {
    string codigoViagem;
    cout << "Digite o código da viagem que deseja atualizar: ";
    cin >> codigoViagem;

    Viagem viagem;
    if (!servicoViagem->ler(Codigo(codigoViagem), &viagem)) {
        cout << "Erro: Viagem não encontrada para atualizar." << endl;
        return;
    }

    cout << "Viagem encontrada! Digite os novos dados." << endl;
    cout << "Novo nome da viagem: ";
    string novoNome;
    cin >> novoNome;
    viagem.setNome(Nome(novoNome));

    if (servicoViagem->atualizar(viagem)) {
        cout << "Viagem atualizada com sucesso!" << endl;
    } else {
        cout << "Erro ao atualizar viagem." << endl;
    }
}

void CntrViagemA::excluirViagem(const Codigo& codigoConta) {
    Codigo codigoViagem;
    cout << "Digite o código da viagem que deseja excluir: ";
    string codigoStr;
    cin >> codigoStr;
    codigoViagem.setValor(codigoStr);

    if (servicoViagem->excluir(codigoViagem)) {
        cout << "Viagem excluída com sucesso!" << endl;
    } else {
        cout << "Erro: Viagem não encontrada ou não pode ser excluída." << endl;
    }
}

void CntrViagemA::consultarViagem(const Codigo& codigoConta) {
    Codigo codigoViagem;

    cout << "Digite o código da viagem que deseja consultar: ";
    string codigoStr;
    cin >> codigoStr;
    codigoViagem.setValor(codigoStr);

    Viagem viagem;
    if (!servicoViagem->ler(codigoViagem, &viagem)) {
        cout << "Erro: Viagem não encontrada." << endl;
        return;
    }

    cout << "\nDetalhes da Viagem:" << endl;
    cout << "Código: " << viagem.getCodigo().getValor() << endl;
    cout << "Nome: " << viagem.getNome().getValor() << endl;
    cout << "Avaliação: " << viagem.getAvaliacao().getValor() << endl;

    // Buscar destino
    Destino destino;
    if (servicoViagem->lerDestino(codigoViagem, &destino)) {
        cout << "\nDestino:" << endl;
        cout << "Código: " << destino.getCodigo().getValor() << endl;
        cout << "Nome: " << destino.getNome().getValor() << endl;
        cout << "Data de Início: " << destino.getDataInicio().getValor() << endl;
        cout << "Data de Término: " << destino.getDataTermino().getValor() << endl;
        cout << "Avaliação: " << destino.getAvaliacao().getValor() << endl;
    } else {
        cout << "Destino não definido." << endl;
    }

    // Buscar hospedagem
    Hospedagem hospedagem;
    if (servicoViagem->lerHospedagem(codigoViagem, &hospedagem)) {
        cout << "\nHospedagem:" << endl;
        cout << "Código: " << hospedagem.getCodigo().getValor() << endl;
        cout << "Nome: " << hospedagem.getNome().getValor() << endl;
        cout << "Diária: " << hospedagem.getDiaria().getValor() << endl;
        cout << "Avaliação: " << hospedagem.getAvaliacao().getValor() << endl;
    } else {
        cout << "Hospedagem não definida." << endl;
    }

    // Buscar atividade
    Atividade atividade;
    if (servicoViagem->lerAtividade(codigoViagem, &atividade)) {
        cout << "\nAtividade:" << endl;
        cout << "Código: " << atividade.getCodigo().getValor() << endl;
        cout << "Nome: " << atividade.getNome().getValor() << endl;
        cout << "Data: " << atividade.getData().getValor() << endl;
        cout << "Horário: " << atividade.getHorario().getValor() << endl;
        cout << "Duração: " << atividade.getDuracao().getValor() << endl;
        cout << "Preço: " << atividade.getPreco().getValor() << endl;
        cout << "Avaliação: " << atividade.getAvaliacao().getValor() << endl;
    } else {
        cout << "Atividade não definida." << endl;
    }
}