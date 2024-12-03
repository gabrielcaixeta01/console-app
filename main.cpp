#include <iostream>
#include <stdexcept>
#include "dominios.hpp"
#include "testes.hpp"

using namespace std;

int main() {
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

	//entidades
	TUConta testeConta;
	
	switch(testeConta.run()){
		case TUConta::SUCESSO:cout<<"SUCESSO"<<endl;
		break
		case TUConta::FALHA :cout<<"FALHA"<<endl;
		break;
	}
		
	
	TUViagem testeViagem;
	
	switch(testeViagem.run()){
		case TUViagem::SUCESSO:cout<<"SUCESSO"<<endl;
		break
		case TUViagem::FALHA :cout<<"FALHA"<<endl;
		break;
	}


	TUDestino testeDestino;
	
	switch(testeDestino.run()){
		case TUDestino::SUCESSO:cout<<"SUCESSO"<<endl;
		break
		case TUDestino::FALHA :cout<<"FALHA"<<endl;
		break;
	}

	
	TUAtividade testeAtividade;
	
	switch(testeAtividade.run()){
		case TUAtividade::SUCESSO:cout<<"SUCESSO"<<endl;
		break
		case TUAtividade::FALHA :cout<<"FALHA"<<endl;
		break;
	}


	TUHospedagem testeHospedagem;
	
	switch(testeHospedagem.run()){
		case TUHospedagem::SUCESSO:cout<<"SUCESSO"<<endl;
		break
		case TUHospedagem::FALHA :cout<<"FALHA"<<endl;
		break;
	}
	
    return 0;
};
