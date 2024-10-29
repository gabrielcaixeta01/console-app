#ifndef ENTIDADES_HPP
#define ENTIDADES_HPP

#include "dominios.hpp"
using namespace std;

/*
class Entidade {
    private:
        Dominio nomeAtributo;               //Declarar cada atributo da classe

    public:
        void setNomeAtributo(const Dominio&);   //Declarar metodo set para cada atributo
        Dominio getNomeAtributo() const;        //Declarar metodo get para cada atributo
};

inline void Entidade::setNomeAtributo(const Dominio &nomeAtributo) {
    this->nomeAtributo = nomeAtributo;
}

inline Dominio Entidade::getNomeAtributo() const {
    return nomeAtributo;
}

*/

class Conta {
    private:
        Codigo codigo;
        Senha senha;
        
    public:
        void setCodigo(const Codigo&);
        Codigo getCodigo() const;

        void setSenha(const Senha&);
        Senha getSenha() const;


};

#endif