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

        void setAvaliacao(const Avaliacao&);
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
    this->avaliacao =  avaliacao;
}

inline Avaliacao Viagem::getAvaliacao() const {
    return avaliacao;
}


class Destino {
    private:
        Codigo codigo;
        Nome nome;
        Data dataInicio;
        Data dataTermino;
        Avaliacao avaliacao;

    public:
        void setCodigo(const Codigo&);
        Codigo getCodigo() const;

        void setNome(const Nome &nome);
        Nome getNome() const;

        void setDataInicio(const Data&);
        Data getDataInicio() const;

        void setDataTermino(const Data&);
        Data getDatatermino() const;

        void setAvaliacao(const Avaliacao&);  
        Avaliacao getAvaliacao() const;
};

inline void Destino::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}

inline Codigo Destino::getCodigo() const {
    return codigo;
}

inline void Destino::setNome(const Nome &nome) {
    this-> nome = nome;
}

inline Nome Destino::getNome() const {
    return nome;
}

inline void Destino::setDataInicio(const Data &dataInicio){
    this->dataInicio = dataInicio;
};

inline Data Destino::getDataInicio() const {
    return dataInicio;
}

inline void Destino::setDataTermino(const Data &dataTermino){
    this->dataTermino = dataTermino;
};

inline Data Destino::getDataInicio() const {
    return dataTermino;
}

inline void Destino::setAvaliacao(const Avaliacao &avaliacao) {
    this->avaliacao = avaliacao;
}

inline Avaliacao Destino::getAvaliacao() const {
    return avaliacao;
}


class Hospedagem {
    private:
        Codigo codigo;
        Nome nome;
        Dinheiro diaria;
        Avaliacao avaliacao;
    
    public:
        void setNome(const Nome&);
        Nome getNome() const;

        void setAvaliacao(const Avaliacao&);  
        Avaliacao getAvaliacao() const;

        void setCodigo(const Codigo&);
        Codigo getCodigo() const;

        void setDiaria(const Dinheiro&);
        Dinheiro getDiaria() const;
};

inline void Hospedagem::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}

inline Codigo Hospedagem::getCodigo() const {
    return codigo;
}

inline void Hospedagem::setNome(const Nome &nome) {
    this-> nome = nome;
}

inline Nome Hospedagem::getNome() const {
    return nome;
}

inline void Hospedagem::setAvaliacao(const Avaliacao &avaliacao) {
    this->avaliacao = avaliacao;
}

inline Avaliacao Hospedagem::getAvaliacao() const {
    return avaliacao;
}

inline void Hospedagem::setDiaria(const Dinheiro &diaria) {
    this-> diaria = diaria;
}

inline Dinheiro Hospedagem::getDiaria() const {
    return diaria;
}

#endif
