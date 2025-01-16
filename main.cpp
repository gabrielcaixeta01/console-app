#include <iostream>
#include "dominios.hpp"
#include "testesDominio.hpp"
#include "testesEntidade.hpp"

using namespace std;

int main() {
    try {
        // Teste de Avaliação
        TUAvaliacao testeAvaliacao;
        switch (testeAvaliacao.run()) {
            case TUAvaliacao::SUCESSO:
                cout << "Teste Avaliacao: SUCESSO" << endl;
                break;
            case TUAvaliacao::FALHA:
                cout << "Teste Avaliacao: FALHA" << endl;
                break;
        }

        // Teste de Código
        TUCodigo testeCodigo;
        switch (testeCodigo.run()) {
            case TUCodigo::SUCESSO:
                cout << "Teste Codigo: SUCESSO" << endl;
                break;
            case TUCodigo::FALHA:
                cout << "Teste Codigo: FALHA" << endl;
                break;
        }

        // Teste de Data
        TUData testeData;
        switch (testeData.run()) {
            case TUData::SUCESSO:
                cout << "Teste Data: SUCESSO" << endl;
                break;
            case TUData::FALHA:
                cout << "Teste Data: FALHA" << endl;
                break;
        }

        // Teste de Dinheiro
        TUDinheiro testeDinheiro;
        switch (testeDinheiro.run()) {
            case TUDinheiro::SUCESSO:
                cout << "Teste Dinheiro: SUCESSO" << endl;
                break;
            case TUDinheiro::FALHA:
                cout << "Teste Dinheiro: FALHA" << endl;
                break;
        }

        // Teste de Duração
        TUDuracao testeDuracao;
        switch (testeDuracao.run()) {
            case TUDuracao::SUCESSO:
                cout << "Teste Duracao: SUCESSO" << endl;
                break;
            case TUDuracao::FALHA:
                cout << "Teste Duracao: FALHA" << endl;
                break;
        }

        // Teste de Horário
        TUHorario testeHorario;
        switch (testeHorario.run()) {
            case TUHorario::SUCESSO:
                cout << "Teste Horario: SUCESSO" << endl;
                break;
            case TUHorario::FALHA:
                cout << "Teste Horario: FALHA" << endl;
                break;
        }

        // Teste de Nome
        TUNome testeNome;
        switch (testeNome.run()) {
            case TUNome::SUCESSO:
                cout << "Teste Nome: SUCESSO" << endl;
                break;
            case TUNome::FALHA:
                cout << "Teste Nome: FALHA" << endl;
                break;
        }

        // Teste de Senha
        TUSenha testeSenha;
        switch (testeSenha.run()) {
            case TUSenha::SUCESSO:
                cout << "Teste Senha: SUCESSO" << endl;
                break;
            case TUSenha::FALHA:
                cout << "Teste Senha: FALHA" << endl;
                break;
        }

        // Teste de Conta
        TUConta testeConta;
        switch (testeConta.run()) {
            case TUConta::SUCESSO:
                cout << "Teste Conta: SUCESSO" << endl;
                break;
            case TUConta::FALHA:
                cout << "Teste Conta: FALHA" << endl;
                break;
        }

        // Teste de Viagem
        TUViagem testeViagem;
        switch (testeViagem.run()) {
            case TUViagem::SUCESSO:
                cout << "Teste Viagem: SUCESSO" << endl;
                break;
            case TUViagem::FALHA:
                cout << "Teste Viagem: FALHA" << endl;
                break;
        }

        // Teste de Destino
        TUDestino testeDestino;
        switch (testeDestino.run()) {
            case TUDestino::SUCESSO:
                cout << "Teste Destino: SUCESSO" << endl;
                break;
            case TUDestino::FALHA:
                cout << "Teste Destino: FALHA" << endl;
                break;
        }

        // Teste de Atividade
        TUAtividade testeAtividade;
        switch (testeAtividade.run()) {
            case TUAtividade::SUCESSO:
                cout << "Teste Atividade: SUCESSO" << endl;
                break;
            case TUAtividade::FALHA:
                cout << "Teste Atividade: FALHA" << endl;
                break;
        }

        // Teste de Hospedagem
        TUHospedagem testeHospedagem;
        switch (testeHospedagem.run()) {
            case TUHospedagem::SUCESSO:
                cout << "Teste Hospedagem: SUCESSO" << endl;
                break;
            case TUHospedagem::FALHA:
                cout << "Teste Hospedagem: FALHA" << endl;
                break;
        }
    } catch (const invalid_argument &e) {
        cout << "Exceção capturada: " << e.what() << endl;
    } catch (...) {
        cout << "Erro desconhecido capturado!" << endl;
    }

    return 0;
}
