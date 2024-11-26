#include <iostream>
#include <stdexcept>
#include "dominios.hpp"

using namespace std;

int main() {
    // Teste para a classe Avaliacao
    Avaliacao avaliacao;
    try {
        avaliacao.setValor("4"); // Substitua com um valor válido para Avaliacao
        cout << "Avaliação aprovada: " << avaliacao.getValor() << endl;
    } catch (invalid_argument &exp) {
        cout << "Exceção Avaliacao: " << exp.what() << endl;
    }

    try {
        avaliacao.setValor("6"); // Substitua com um valor inválido para Avaliacao
    } catch (invalid_argument &exp) {
        cout << "Exceção Avaliacao: " << exp.what() << endl;
    }

    // Teste para a classe Codigo
    Codigo codigo;
    try {
        codigo.setValor("ABC123"); // Substitua com um código válido de 6 caracteres
        cout << "Código aprovado: " << codigo.getValor() << endl;
    } catch (invalid_argument &exp) {
        cout << "Exceção Codigo: " << exp.what() << endl;
    }

    try {
        codigo.setValor("AB123"); // Substitua com um código inválido (menos de 6 caracteres)
    } catch (invalid_argument &exp) {
        cout << "Exceção Codigo: " << exp.what() << endl;
    }

    // Teste para a classe Data
    Data data;
    try {
        data.setValor("25-12-23"); // Substitua com uma data válida no formato DD-MM-AA
        cout << "Data aprovada: " << data.getValor() << endl;
    } catch (invalid_argument &exp) {
        cout << "Exceção Data: " << exp.what() << endl;
    }

    try {
        data.setValor("32-13-23"); // Substitua com uma data inválida
    } catch (invalid_argument &exp) {
        cout << "Exceção Data: " << exp.what() << endl;
    }

    // Teste para a classe Dinheiro
    Dinheiro dinheiro;
    try {
        dinheiro.setValor("150.00"); // Substitua com um valor válido de dinheiro
        cout << "Valor aprovado: " << dinheiro.getValor() << endl;
    } catch (invalid_argument &exp) {
        cout << "Exceção Dinheiro: " << exp.what() << endl;
    }

    try {
        dinheiro.setValor("250000.00"); // Substitua com um valor inválido para Dinheiro
    } catch (invalid_argument &exp) {
        cout << "Exceção Dinheiro: " << exp.what() << endl;
    }

    // Teste para a classe Duracao
    Duracao duracao;
    try {
        duracao.setValor("120"); // Substitua com um valor válido de duração
        cout << "Duração aprovada: " << duracao.getValor() << endl;
    } catch (invalid_argument &exp) {
        cout << "Exceção Duracao: " << exp.what() << endl;
    }

    try {
        duracao.setValor("400"); // Substitua com um valor inválido para duração
    } catch (invalid_argument &exp) {
        cout << "Exceção Duracao: " << exp.what() << endl;
    }

    // Teste para a classe Horario
    Horario horario;
    try {
        horario.setValor("14:30"); // Substitua com um horário válido
        cout << "Horário aprovado: " << horario.getValor() << endl;
    } catch (invalid_argument &exp) {
        cout << "Exceção Horario: " << exp.what() << endl;
    }

    try {
        horario.setValor("25:00"); // Substitua com um horário inválido
    } catch (invalid_argument &exp) {
        cout << "Exceção Horario: " << exp.what() << endl;
    }

    // Teste para a classe Nome
    Nome nome;
    try {
        nome.setValor("João"); // Substitua com um nome válido
        cout << "Nome aprovado: " << nome.getValor() << endl;
    } catch (invalid_argument &exp) {
        cout << "Exceção Nome: " << exp.what() << endl;
    }

    try {
        nome.setValor(""); // Substitua com um nome inválido (vazio)
    } catch (invalid_argument &exp) {
        cout << "Exceção Nome: " << exp.what() << endl;
    }

    // Teste para a classe Senha
    Senha senha;
    try {
        senha.setValor("12345"); // Substitua com uma senha válida de 5 dígitos
        cout << "Senha aprovada: " << senha.getValor() << endl;
    } catch (invalid_argument &exp) {
        cout << "Exceção Senha: " << exp.what() << endl;
    }

    try {
        senha.setValor("1234"); // Substitua com uma senha inválida (menos de 5 dígitos)
    } catch (invalid_argument &exp) {
        cout << "Exceção Senha: " << exp.what() << endl;
    }

    return 0;
}
