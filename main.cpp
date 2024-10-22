#include <iostream>
#include "dominios.hpp"

using namespace std;

int main() {

    Avaliacao avaliacao;
    Codigo codigo;

    // Teste com valor válido
    cout << "Teste com valor válido: 5" << endl;
    if (avaliacao.setValor(5)) {               
        cout << "Valor = " << avaliacao.getValor() << endl;
    } else {
        cout << "Valor inválido" << endl;
    }

    // Teste com valor inválido
    cout << "\nTeste com valor inválido: 1000" << endl;
    if (avaliacao.setValor(1000)) {             
        cout << "Valor = " << avaliacao.getValor() << endl;
    } else {
        cout << "Valor inválido" << endl;
    }

    //teste da classe codigo
    cout << "teste codigo" << endl;
    if (codigo.setValor("12345#")) {
         cout << "Valor = " << codigo.getValor() << endl;
    } else {
        cout << "Valor inválido" << endl;
    }
     cout << "teste codigo" << endl;
    if (codigo.setValor("123456")) {
         cout << "Valor = " << codigo.getValor() << endl;
    } else {
        cout << "Valor inválido" << endl;
    }

    return 0;
}