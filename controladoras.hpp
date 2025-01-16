#ifndef CONTROLADORAS_HPP
#define CONTROLADORAS_HPP

#include "interfaces.hpp"
#include "dominios.hpp"
#include "stubs.hpp"
#include <iostream>
using namespace std;

class ControladoraConta {
private:
    IServicoConta* servicoConta;
    IServicoAutenticacao* servicoAutenticacao;

public:
    ControladoraConta(IServicoConta* servicoConta, IServicoAutenticacao* servicoAutenticacao)
        : servicoConta(servicoConta), servicoAutenticacao(servicoAutenticacao) {}

    void criarConta() {
        string codigo, senha;
        cout << "Digite o código da conta: ";
        cin >> codigo;
        cout << "Digite a senha da conta: ";
        cin >> senha;

        try {
            Conta conta;
            conta.setCodigo(Codigo(codigo));
            conta.setSenha(Senha(senha));

            if (servicoConta->criarConta(conta)) {
                cout << "Conta criada com sucesso!\n";
            } else {
                cout << "Falha ao criar conta.\n";
            }
        } catch (const exception& e) {
            cout << "Erro: " << e.what() << endl;
        }
    }

    void autenticarConta() {
        string codigo, senha;
        cout << "Digite o código da conta: ";
        cin >> codigo;
        cout << "Digite a senha da conta: ";
        cin >> senha;

        try {
            if (servicoAutenticacao->autenticar(Codigo(codigo), Senha(senha))) {
                cout << "Autenticação realizada com sucesso!\n";
            } else {
                cout << "Falha na autenticação.\n";
            }
        } catch (const exception& e) {
            cout << "Erro: " << e.what() << endl;
        }
    }

    void excluirConta() {
        string codigo;
        cout << "Digite o código da conta a ser excluída: ";
        cin >> codigo;

        try {
            if (servicoConta->excluirConta(Codigo(codigo))) {
                cout << "Conta excluída com sucesso!\n";
            } else {
                cout << "Falha ao excluir conta.\n";
            }
        } catch (const exception& e) {
            cout << "Erro: " << e.what() << endl;
        }
    }
};

class ControladoraViagem {
private:
    IServicoViagem* servicoViagem;

public:
    ControladoraViagem(IServicoViagem* servicoViagem) : servicoViagem(servicoViagem) {}

    void criarViagem() {
        string codigo, nome;
        cout << "Digite o código da viagem: ";
        cin >> codigo;
        cout << "Digite o nome da viagem: ";
        cin >> nome;

        try {
            Viagem viagem;
            viagem.setCodigo(Codigo(codigo));
            viagem.setNome(Nome(nome));

            if (servicoViagem->criarViagem(viagem)) {
                cout << "Viagem criada com sucesso!\n";
            } else {
                cout << "Falha ao criar viagem.\n";
            }
        } catch (const exception& e) {
            cout << "Erro: " << e.what() << endl;
        }
    }

    void excluirViagem() {
        string codigo;
        cout << "Digite o código da viagem a ser excluída: ";
        cin >> codigo;

        try {
            if (servicoViagem->excluirViagem(Codigo(codigo))) {
                cout << "Viagem excluída com sucesso!\n";
            } else {
                cout << "Falha ao excluir viagem.\n";
            }
        } catch (const exception& e) {
            cout << "Erro: " << e.what() << endl;
        }
    }
};

#endif // CONTROLADORAS_HPP
