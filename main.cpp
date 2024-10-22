#include <iostream>
#include "dominios.hpp"
#include "entidades.hpp"

using namespace std;

int main() {

    Entidade entidade;
    Dominio dominio;

    dominio.setValor("232036896");
    entidade.setNomeAtributo(dominio);
    cout << entidade.getNomeAtributo().getValor() << endl;

    // Teste com valor válido
    if (dominio.setValor("232036896")) {               
        cout << "Valor = " << dominio.getValor() << endl;
    } else {
        cout << "Valor invalido" << endl;
    }

    // Teste com valor inválido
    if (dominio.setValor("abcdefghi")) {             
        cout << "Valor = " << dominio.getValor() << endl;
    } else {
        cout << "Valor invalido" << endl;
    }

    // Alocação dinâmica com ptr
    Dominio *ptr = new Dominio();

    if(ptr->setValor("232036896")) {  
        cout << "Valor = " << ptr->getValor() << endl;
    } else {
        cout << "Valor invalido" << endl;
    }

    // Liberação de memória
    delete ptr;

    return 0;
}