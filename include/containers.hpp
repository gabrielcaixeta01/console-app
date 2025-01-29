#ifndef CONTAINERS_HPP
#define CONTAINERS_HPP

#include <list>
#include "entidades.hpp"
using namespace std;

class ContainerConta {
private:
    list<Conta> container;
public:
    bool incluir(Conta);
    bool remover(Codigo);
    bool pesquisar(Conta*);
    bool atualizar(Conta);
};

class ContainerViagem {
private:
    list<Viagem> container;
public:
    bool incluir(Viagem);
    bool remover(Codigo);
    bool pesquisar(Viagem*);
    bool atualizar(Viagem);
};

class ContainerDestino {
private:
    list<Destino> container;
public:
    bool incluir(Destino);
    bool remover(Codigo);
    bool pesquisar(Destino*);
    bool atualizar(Destino);
};

class ContainerAtividade {
private:
    list<Atividade> container;
public:
    bool incluir(Atividade);
    bool remover(Nome);
    bool pesquisar(Atividade*);
    bool atualizar(Atividade);
};

class ContainerHospedagem {
private:
    list<Hospedagem> container;
public:
    bool incluir(Hospedagem);
    bool remover(Codigo);
    bool pesquisar(Hospedagem*);
    bool atualizar(Hospedagem);
};

#endif // CONTAINERS_HPP

