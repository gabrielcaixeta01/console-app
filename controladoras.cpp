#include "controladoras.hpp"

// Implementação ControladoraConta
ControladoraConta::ControladoraConta(IServicoConta* servicoConta, IServicoAutenticacao* servicoAutenticacao)
    : servicoConta(servicoConta), servicoAutenticacao(servicoAutenticacao) {}

void ControladoraConta::criarConta() {
    string codigo, senha;
    cout << "Digite o código da conta: ";
    cin >> codigo;
    cout << "Digite a senha da conta: ";
    cin >> senha;

    Conta conta;
    conta.setCodigo(Codigo(codigo));
    conta.setSenha(Senha(senha.c_str()));

    if (servicoConta->criarConta(conta)) {
        cout << "Conta criada com sucesso!\n";
    } else {
        cout << "Falha ao criar conta.\n";
    }
}

void ControladoraConta::autenticarConta() {
    string codigo, senha;
    cout << "Digite o código da conta: ";
    cin >> codigo;
    cout << "Digite a senha da conta: ";
    cin >> senha;

    if (servicoAutenticacao->autenticar(Codigo(codigo), Senha(senha))) {
        cout << "Autenticação realizada com sucesso!\n";
    } else {
        cout << "Falha na autenticação.\n";
    }
}

void ControladoraConta::excluirConta() {
    string codigo;
    cout << "Digite o código da conta a ser excluída: ";
    cin >> codigo;

    if (servicoConta->excluirConta(Codigo(codigo))) {
        cout << "Conta excluída com sucesso!\n";
    } else {
        cout << "Falha ao excluir conta.\n";
    }
}

// Implementação ControladoraViagem
ControladoraViagem::ControladoraViagem(IServicoViagem* servicoViagem) : servicoViagem(servicoViagem) {}

void ControladoraViagem::criarViagem() {
    string codigo, nome;
    cout << "Digite o código da viagem: ";
    cin >> codigo;
    cout << "Digite o nome da viagem: ";
    cin >> nome;

    Viagem viagem;
    viagem.setCodigo(Codigo(codigo));
    viagem.setNome(Nome(nome));

    if (servicoViagem->criarViagem(viagem)) {
        cout << "Viagem criada com sucesso!\n";
    } else {
        cout << "Falha ao criar viagem.\n";
    }
}

void ControladoraViagem::excluirViagem() {
    string codigo;
    cout << "Digite o código da viagem a ser excluída: ";
    cin >> codigo;

    if (servicoViagem->excluirViagem(Codigo(codigo))) {
        cout << "Viagem excluída com sucesso!\n";
    } else {
        cout << "Falha ao excluir viagem.\n";
    }
}
