#include <iostream>
#include <stdexcept>
#include "dominios.hpp"
#include "testes.hpp"

using namespace std;

int main()
{
    TUAvaliacao testeAvaliacao

    switch(testeAvaliacao.run()){
            case TUAvaliacao::SUCESSO: cout<<"SUCESSO"<<endl;
            break
    case TUAvaliacao::FALHA : cout<<"FALHA"<<endl;
        break;
    }
return 0;
}

{
    TUCodigo testeCodigo

    switch(testeCodigo.run()){
            case TUCodigo::SUCESSO: cout<<"SUCESSO"<<endl;
            break
    case TUCodigo::FALHA : cout<<"FALHA"<<endl;
        break;
    }
return 0;
}

{
    TUData testeData

    switch(testeData.run()){
            case TUData::SUCESSO: cout<<"SUCESSO"<<endl;
            break
    case TUData::FALHA : cout<<"FALHA"<<endl;
        break;
    }
return 0;
}

{
    TUDinheiro testeDinheiro
    switch(testeDinheiro.run()){
            case TUDinheiro::SUCESSO: cout<<"SUCESSO"<<endl;
            break
    case TUDinheiro::FALHA : cout<<"FALHA"<<endl;
        break;
    }
return 0;
}

{
    TUDuracao testeDuracao

    switch(testeDuracao.run()){
            case TUDuracao::SUCESSO: cout<<"SUCESSO"<<endl;
            break
    case TUDuracao::FALHA : cout<<"FALHA"<<endl;
        break;
    }
return 0;
}

{
    TUHorario testeHorario

    switch(testeHorario.run()){
            case TUHorario::SUCESSO: cout<<"SUCESSO"<<endl;
            break
    case TUHorario::FALHA : cout<<"FALHA"<<endl;
        break;
    }
return 0;
}

{
    TUNome testeNome

    switch(testeNome.run()){
            case TUNome::SUCESSO: cout<<"SUCESSO"<<endl;
            break
    case TUNome::FALHA : cout<<"FALHA"<<endl;
        break;
    }
return 0;
}

{
    TUSenha testeSenha

    switch(testeSenha.run()){
            case TUSenha::SUCESSO: cout<<"SUCESSO"<<endl;
            break
    case TUSenha::FALHA : cout<<"FALHA"<<endl;
        break;
    }
return 0;
}
