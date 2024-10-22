#include <iostream>
#include "dominios.hpp"

using namespace std;

int main() {

    // Teste avaliacao
    Avaliacao avaliacao;

    int nota;
    cout << "De uma avaliação de 0 a 5: " << endl;
    cin >> nota;

    if (avaliacao.setValor(nota)) {               
        cout << "Valor aprovado = " << avaliacao.getValor() << endl;
    } else {
        cout << "Valor inválido" << endl;
    }


    // Teste codigo
    Codigo codigo;
    string code;
    cout << "Digite um codigo com 6 caracteres de digitos ou letras: " << endl;
    cin >> code;
    if (codigo.setValor(code)) {             
        cout << "Valor aprovado = " << codigo.getValor() << endl;
    } else {
        cout << "Valor inválido" << endl;
    }


    // Teste dinheiro
    Dinheiro dinheiro;

    float money;
    cout << "Digite uma quantia de 0.00 a 200000.00: " << endl;
    cin >> money;

    if (dinheiro.setValor(money)) {
         cout << "Valor aprovado = " << dinheiro.getValor() << endl;
    } else {
        cout << "Valor inválido" << endl;
    }
    

    // Teste duracao
    Duracao duracao;

    int dura;
    cout << "Digite uma duração de 0 a 360:" << endl;
    cin >> dura;

    if (duracao.setValor(dura)) {
        cout << "Valor aprovado = " << duracao.getValor() << endl;
    } else {
        cout << "Valor inválido" << endl;
    }


    //Teste nome
    Nome nome;

    string name;
    cout << "Digite seu nome: " << endl;
    cin >> name;

    if (nome.setValor(name)) {
        cout << "Valor aprovado = " << nome.getValor() << endl;
    } else {
        cout << "Valor inválido" << endl;
    }

    return 0;
}