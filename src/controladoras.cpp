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

void CntrViagemA::definirDestino(const Codigo& codigoViagem) {
    Destino destino;
    Codigo codigoDestino;
    Nome nomeDestino;
    Data dataInicio, dataTermino;
    Avaliacao avaliacao;

    cout << "Digite o código do destino: ";
    string codigoStr;
    cin >> codigoStr;
    codigoDestino.setValor(codigoStr);

    cout << "Digite o nome do destino: ";
    string nomeStr;
    cin.ignore();
    getline(cin, nomeStr);
    nomeDestino.setValor(nomeStr);

    // Validação da Data de Início
    string dataInicioStr;
    while (true) {
        cout << "Digite a data de início (DD-MM-YY): ";
        cin >> dataInicioStr;
        if (dataInicioStr.size() == 8 && dataInicioStr[2] == '-' && dataInicioStr[5] == '-') {
            dataInicio.setValor(dataInicioStr);
            break;
        }
        cout << "Erro: Formato inválido! Use DD-MM-YY.\n";
    }

    // Validação da Data de Término
    string dataTerminoStr;
    while (true) {
        cout << "Digite a data de término (DD-MM-YY): ";
        cin >> dataTerminoStr;
        if (dataTerminoStr.size() == 8 && dataTerminoStr[2] == '-' && dataTerminoStr[5] == '-') {
            dataTermino.setValor(dataTerminoStr);
            break;
        }
        cout << "Erro: Formato inválido! Use DD-MM-YY.\n";
    }

    cout << "Digite a avaliação do destino (1-5): ";
    int avaliacaoValor;
    cin >> avaliacaoValor;
    avaliacao.setValor(to_string(avaliacaoValor)); // Convertendo int para string

    destino.setCodigo(codigoDestino);
    destino.setNome(nomeDestino);
    destino.setDataInicio(dataInicio);
    destino.setDataTermino(dataTermino);
    destino.setAvaliacao(avaliacao);

    if (servicoViagem->definirDestino(codigoViagem, destino)) {
        cout << "Destino definido com sucesso!" << endl;
    } else {
        cout << "Erro ao definir destino para a viagem." << endl;
    }
}

void CntrViagemA::definirHospedagem(const Codigo& codigoViagem) {
    Hospedagem hospedagem;
    Codigo codigoHospedagem;
    Nome nomeHospedagem;
    Dinheiro diaria;
    Avaliacao avaliacao;

    cout << "Digite o código da hospedagem: ";
    string codigoStr;
    cin >> codigoStr;
    codigoHospedagem.setValor(codigoStr);

    cout << "Digite o nome da hospedagem: ";
    string nomeStr;
    cin.ignore();
    getline(cin, nomeStr);
    nomeHospedagem.setValor(nomeStr);

    cout << "Digite o valor da diária: ";
    float valorDiaria;
    cin >> valorDiaria;
    diaria.setValor(to_string(valorDiaria)); // Convertendo float para string

    cout << "Digite a avaliação da hospedagem (1-5): ";
    int avaliacaoValor;
    cin >> avaliacaoValor;
    avaliacao.setValor(to_string(avaliacaoValor)); // Convertendo int para string

    hospedagem.setCodigo(codigoHospedagem);
    hospedagem.setNome(nomeHospedagem);
    hospedagem.setDiaria(diaria);
    hospedagem.setAvaliacao(avaliacao);

    if (servicoViagem->definirHospedagem(codigoViagem, hospedagem)) {
        cout << "Hospedagem definida com sucesso!" << endl;
    } else {
        cout << "Erro ao definir hospedagem para a viagem." << endl;
    }
}

void CntrViagemA::definirAtividades(const Codigo& codigoViagem) {
    while (true) {
        Atividade atividade;
        Codigo codigoAtividade;
        Nome nomeAtividade;
        Data dataAtividade;
        Horario horario;
        Duracao duracao;
        Dinheiro preco;
        Avaliacao avaliacao;

        cout << "Digite o código da atividade: ";
        string codigoStr;
        cin >> codigoStr;
        codigoAtividade.setValor(codigoStr);

        cout << "Digite o nome da atividade: ";
        string nomeStr;
        cin.ignore();
        getline(cin, nomeStr);
        nomeAtividade.setValor(nomeStr);

        // Validação da Data da Atividade
        string dataStr;
        while (true) {
            cout << "Digite a data da atividade (DD-MM-YY): ";
            cin >> dataStr;
            if (dataStr.size() == 8 && dataStr[2] == '-' && dataStr[5] == '-') {
                dataAtividade.setValor(dataStr);
                break;
            }
            cout << "Erro: Formato inválido! Use DD-MM-YY.\n";
        }

        cout << "Digite o horário da atividade (HH:MM): ";
        string horarioStr;
        cin >> horarioStr;
        horario.setValor(horarioStr);

        cout << "Digite a duração da atividade (em horas): ";
        float duracaoFloat;
        cin >> duracaoFloat;
        duracao.setValor(to_string(duracaoFloat)); // Convertendo float para string

        cout << "Digite o preço da atividade: ";
        float precoFloat;
        cin >> precoFloat;
        preco.setValor(to_string(precoFloat)); // Convertendo float para string

        cout << "Digite a avaliação da atividade (1-5): ";
        int avaliacaoValor;
        cin >> avaliacaoValor;
        avaliacao.setValor(to_string(avaliacaoValor)); // Convertendo int para string

        atividade.setCodigo(codigoAtividade);
        atividade.setNome(nomeAtividade);
        atividade.setData(dataAtividade);
        atividade.setHorario(horario);
        atividade.setDuracao(duracao);
        atividade.setPreco(preco);
        atividade.setAvaliacao(avaliacao);

        if (servicoViagem->definirAtividade(codigoViagem, atividade)) {
            cout << "Atividade adicionada com sucesso!" << endl;
        } else {
            cout << "Erro ao adicionar atividade para a viagem." << endl;
        }

        // Pergunta se deseja adicionar outra atividade
        char continuar;
        cout << "Deseja adicionar outra atividade? (S/N): ";
        cin >> continuar;
        if (toupper(continuar) != 'S') {
            break;
        }
    }
}

void CntrViagemA::atualizarViagem(const Codigo& codigoConta) {
    Codigo codigoViagem;
    cout << "Digite o código da viagem que deseja atualizar: ";
    string codigoStr;
    cin >> codigoStr;
    codigoViagem.setValor(codigoStr);

    Viagem viagem;
    if (!servicoViagem->ler(codigoViagem, &viagem)) {
        cout << "Erro: Viagem não encontrada." << endl;
        return;
    }

    Nome novoNome;
    cout << "Digite o novo nome da viagem: ";
    string nomeStr;
    cin.ignore();
    getline(cin, nomeStr);
    novoNome.setValor(nomeStr);

    viagem.setNome(novoNome);

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
    if (servicoViagem->ler(codigoViagem, &viagem)) {
        cout << "\nDetalhes da Viagem:" << endl;
        cout << "Código: " << viagem.getCodigo().getValor() << endl;
        cout << "Nome: " << viagem.getNome().getValor() << endl;
        cout << "Avaliação: " << viagem.getAvaliacao().getValor() << endl;
    } else {
        cout << "Erro: Viagem não encontrada." << endl;
    }
}