#include "stubs.hpp"
#include <iostream>
#include <stdexcept>

const int TRIGGER_FALHA = 1;
const int TRIGGER_ERRO_SISTEMA = 2;

using namespace std;

// ---------------- Implementação de StubIAS ----------------

bool StubIAS::autenticar(const Conta& conta) {
    cout << endl << "StubIAS::autenticar" << endl;
    cout << "Código: " << conta.getCodigo().getValor() << endl;
    cout << "Senha: " << conta.getSenha().getValor() << endl;

    // Simulação de diferentes comportamentos baseados no código
    if (stoi(conta.getCodigo().getValor()) == TRIGGER_FALHA) {
        return false;
    } else if (stoi(conta.getCodigo().getValor()) == TRIGGER_ERRO_SISTEMA) {
        throw runtime_error("Erro de sistema durante a autenticação.");
    }

    return true; // Sucesso na autenticação
}

// ---------------- Implementação de StubICS ----------------

bool StubICS::criar(const Conta& conta) {
    cout << endl << "StubICS::criar" << endl;
    cout << "Criando conta com código: " << conta.getCodigo().getValor() << endl;

    if (conta.getCodigo().getValor() == to_string(TRIGGER_FALHA)) {
        return false;
    } else if (conta.getCodigo().getValor() == to_string(TRIGGER_ERRO_SISTEMA)) {
        throw runtime_error("Erro de sistema ao criar conta.");
    }

    return true; // Sucesso ao criar a conta
}

bool StubICS::excluir(const string& codigo) {
    cout << endl << "StubICS::excluir" << endl;
    cout << "Excluindo conta com código: " << codigo << endl;

    if (codigo == to_string(TRIGGER_FALHA)) {
        return false;
    } else if (codigo == to_string(TRIGGER_ERRO_SISTEMA)) {
        throw runtime_error("Erro de sistema ao excluir conta.");
    }

    return true; // Sucesso ao excluir a conta
}

Conta StubICS::ler(const string& codigo) {
    cout << endl << "StubICS::ler" << endl;
    cout << "Lendo conta com código: " << codigo << endl;

    if (codigo == to_string(TRIGGER_ERRO_SISTEMA)) {
        throw runtime_error("Erro de sistema ao ler conta.");
    }

    // Retorna uma conta fictícia para fins de teste
    Conta conta;
    conta.setCodigo(Codigo());
    conta.getCodigo().setValor(codigo);
    conta.setSenha(Senha());
    conta.getSenha().setValor("123456");
    return conta;
}

bool StubICS::atualizar(const Conta& conta) {
    cout << endl << "StubICS::atualizar" << endl;
    cout << "Atualizando conta com código: " << conta.getCodigo().getValor() << endl;

    if (conta.getCodigo().getValor() == to_string(TRIGGER_FALHA)) {
        return false;
    } else if (conta.getCodigo().getValor() == to_string(TRIGGER_ERRO_SISTEMA)) {
        throw runtime_error("Erro de sistema ao atualizar conta.");
    }

    return true; // Sucesso ao atualizar a conta
}

// ---------------- Implementação de StubIVS ----------------

bool StubIVS::cadastrarViagem(const Viagem& viagem) {
    cout << endl << "StubIVS::cadastrarViagem" << endl;
    cout << "Cadastrando viagem com código: " << viagem.getCodigo().getValor() << endl;

    if (stoi(viagem.getCodigo().getValor()) == TRIGGER_FALHA) {
        return false;
    } else if (stoi(viagem.getCodigo().getValor()) == TRIGGER_ERRO_SISTEMA) {
        throw runtime_error("Erro de sistema ao cadastrar viagem.");
    }

    return true; // Sucesso ao cadastrar a viagem
}

bool StubIVS::cadastrarHospedagem(const Hospedagem& hospedagem) {
    cout << endl << "StubIVS::cadastrarHospedagem" << endl;
    cout << "Cadastrando hospedagem com código: " << hospedagem.getCodigo().getValor() << endl;

    if (stoi(hospedagem.getCodigo().getValor()) == TRIGGER_FALHA) {
        return false;
    } else if (stoi(hospedagem.getCodigo().getValor()) == TRIGGER_ERRO_SISTEMA) {
        throw runtime_error("Erro de sistema ao cadastrar hospedagem.");
    }

    return true; // Sucesso ao cadastrar a hospedagem
}

bool StubIVS::cadastrarDestino(const Destino& destino) {
    cout << endl << "StubIVS::cadastrarDestino" << endl;
    cout << "Cadastrando destino com código: " << destino.getCodigo().getValor() << endl;

    if (stoi(destino.getCodigo().getValor()) == TRIGGER_FALHA) {
        return false;
    } else if (stoi(destino.getCodigo().getValor()) == TRIGGER_ERRO_SISTEMA) {
        throw runtime_error("Erro de sistema ao cadastrar destino.");
    }

    return true; // Sucesso ao cadastrar o destino
}

bool StubIVS::cadastrarAtividade(const Atividade& atividade) {
    cout << endl << "StubIVS::cadastrarAtividade" << endl;
    cout << "Cadastrando atividade com nome: " << atividade.getNome().getValor() << endl;

    if (atividade.getNome().getValor() == to_string(TRIGGER_FALHA)) {
        return false;
    } else if (atividade.getNome().getValor() == to_string(TRIGGER_ERRO_SISTEMA)) {
        throw runtime_error("Erro de sistema ao cadastrar atividade.");
    }

    return true; // Sucesso ao cadastrar a atividade
}