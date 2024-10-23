#include <iostream>
#include <iomanip>
#include "dominios.hpp"

using namespace std;

int main() {

    // Teste avaliacao
    Avaliacao avaliacao;

    int nota;
    cout << "Dê uma avaliação de 0 a 5: " << endl;
    cin >> nota;

    if (avaliacao.setValor(nota)) {               
        cout << "Valor aprovado = " << avaliacao.getValor() << endl;
    } else {
        cout << "Valor inválido" << endl;
    }


    // Teste codigo
    Codigo codigo;

    string code;
    cout << "Digite um código com 6 caracteres de dígitos ou letras: " << endl;
    cin >> code;

    if (codigo.setValor(code)) {             
        cout << "Valor aprovado = " << codigo.getValor() << endl;
    } else {
        cout << "Valor inválido" << endl;
    }


    // Teste data
    Data data;

    string datinha;
    cout << "Digite uma data (DD-MM-AA): " << endl;
    cin >> datinha;

    if (data.setValor(datinha)) {
        cout << "Valor aprovado = " << data.getValor() << endl;
    } else {
        cout << "Valor inválido" << endl;
    }



    // Teste dinheiro
    Dinheiro dinheiro;

    float money;
    cout << "Digite uma quantia de 0.00 a 200000.00: " << endl;
    cin >> money;

    cout << fixed << setprecision(2);

    if (dinheiro.setValor(money)) {
         cout << "Valor aprovado = " << dinheiro.getValor() << endl;
    } else {
        cout << "Valor inválido" << endl;
    }
    

    // Teste duracao
    Duracao duracao;

    int dura;
    cout << "Digite uma duração de 0 a 360: " << endl;
    cin >> dura;

    if (duracao.setValor(dura)) {
        cout << "Valor aprovado = " << duracao.getValor() << endl;
    } else {
        cout << "Valor inválido" << endl;
    }


    // Teste horario
    Horario horario;

    string horas;
    cout << "Digite um horário (HH:MM): " << endl;
    cin >> horas;

    if (horario.setValor(horas)) {
        cout << "Valor aprovado = " << horario.getValor() << endl;
    } else {
        cout << "Valor inválido" << endl;
    }

    // Limpa o buffer de entrada antes de usar getline
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Teste nome
    Nome nome;

    string name;
    cout << "Digite seu nome: " << endl;
    getline(cin, name);  

    if (nome.setValor(name)) {
        cout << "Valor aprovado = " << nome.getValor() << endl;
    } else {
        cout << "Valor inválido" << endl;
    }

    return 0;
}