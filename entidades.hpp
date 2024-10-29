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

inline void Conta::setSenha(const Senha &senha) {
    this->senha = senha;
}

inline Senha Conta::getSenha() const {
    return senha;
}

inline void Conta::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}

inline Codigo Conta::getCodigo() const {
    return codigo;
}
class Viagem {
    private:
        Codigo codigo;
        Nome nome;
        Avaliacao avaliacao;
        
    public:
        void setCodigo(const Codigo&);
        Codigo getCodigo() const;

        void setNome(const Nome&);
        Nome getNome() const;

        void setAvaliacao(const Avaliacao&)
        Avaliacao getAvaliacao() const;

};

inline void Viagem::setNome(const Nome &nome) {
    this->nome = nome;
}

inline Nome Viagem::getNome() const {
    return nome;
}

inline void Viagem::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}

inline Codigo Viagem::getCodigo() const {
    return codigo;
}

inline void Viagem::setAvaliacao(const Avaliacao &avaliacao) {
    this->avaliacao =  avaliacao
}

inline Avaliacao Viagem::getAvaliacao() const {
    return avaliacao;
}
#endif
