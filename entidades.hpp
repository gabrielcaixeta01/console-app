#include "dominios.hpp"
#include <iostream>
using namespace std;

class Entidade {
    private:
        Dominio nomeAtributo;            //atributo da classe
    public:
        void setNomeAtributo(const Dominio& nomeAtributo);  //metodo set do atributo
        Dominio getNomeAtributo() const;                    //metodo get do atributo
};

//Implementar metodos get e set

inline void Entidade::setNomeAtributo(const Dominio& nomeAtributo) {
    this->nomeAtributo = nomeAtributo;
}

inline Dominio Entidade::getNomeAtributo() const {
    return nomeAtributo;
}