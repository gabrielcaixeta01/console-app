#ifndef INTERFACES_HPP_INCLUDE
#define INTERFACES_HPP_INCLUDED

#include "dominios.hpp"
#include <stdexcept>

using namespace std;

//Declaracao adiantada

class ILNAutenticacao;

//Declaracao de interface para servico de autentificacao provido pela camada de apresentacao

class IUAutenticacao {
    public:
        virtual bool autenticar(Matricula*) = 0;
        virtual void setCntrLNAutenticacao(ILNAutenticacao *) = 0;
        virtual ~IUAutenticacao(){};
};

//Declaracao de interface para servico de autenticacao provido pela camada de servico

class ILNAutenticacao {
    public:
        virtual bool autenticar(const Matricula&, const Senha&) = 0;
        virtual ~ILNAutenticacao(){};
};

#endif INTERFACES_HPP_INCLUDED