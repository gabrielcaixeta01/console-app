#include "stubs.hpp"
#include <iostream>

using namespace std;

unordered_map<string, Viagem> viagens;
unordered_map<string, Destino> destinos;
unordered_map<string, Atividade> atividades;
unordered_map<string, Hospedagem> hospedagens;


// Implementações para StubServicoConta
bool StubServicoConta::criarConta(const Conta& conta) {
    (void)conta; // Supressão do warning de parâmetro não usado
    return true;
}

bool StubServicoConta::excluirConta(const Codigo& codigo) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    return true;
}

Conta StubServicoConta::consultarConta(const Codigo& codigo) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    return Conta();
}

bool StubServicoConta::atualizarConta(const Conta& conta) {
    (void)conta; // Supressão do warning de parâmetro não usado
    return true;
}

// Implementação simplificada para StubServicoAutenticacao
bool StubServicoAutenticacao::autenticar(const Codigo& codigo, const Senha& senha) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    (void)senha;  // Supressão do warning de parâmetro não usado
    return true;
}

// Implementações simplificadas para StubServicoViagem
bool StubServicoViagem::excluirViagem(const Codigo& codigo) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    return true;
}

bool StubServicoViagem::atualizarViagem(const Viagem& viagem) {
    (void)viagem; // Supressão do warning de parâmetro não usado
    return true;
}

bool StubServicoViagem::criarViagem(const Viagem& viagem) {
    string codigo = viagem.getCodigo().getValor();
    if (viagens.find(codigo) == viagens.end()) {
        viagens[codigo] = viagem;
        cout << "Viagem criada com sucesso: " << codigo << endl;
        return true;
    }
    cout << "Viagem já existente: " << codigo << endl;
    return false;
}

Viagem StubServicoViagem::consultarViagem(const Codigo& codigo) {
    auto it = viagens.find(codigo.getValor());
    if (it != viagens.end()) {
        return it->second; // Retorna a viagem encontrada
    }
    throw runtime_error("Viagem não encontrada!");
}

void StubServicoViagem::listarViagens() {
    if (viagens.empty()) {
        cout << "Nenhuma viagem registrada." << endl;
    } else {
        cout << "Viagens registradas:" << endl;
        for (const auto& [codigo, viagem] : viagens) {
            cout << "Código: " << codigo 
                 << ", Nome: " << viagem.getNome().getValor() << endl;
        }
    }
}

// Implementações simplificadas para StubServicoDestino
bool StubServicoDestino::adicionarDestino(const Destino& destino) {
    string codigo = destino.getCodigo().getValor();
    if (destinos.find(codigo) == destinos.end()) {
        destinos[codigo] = destino;
        cout << "Destino adicionado com sucesso: " << codigo << endl;
        return true;
    }
    cout << "Destino já existente: " << codigo << endl;
    return false;
    
}

bool StubServicoDestino::removerDestino(const Codigo& codigo) {
    (void)codigo;
    return true;
}

Destino StubServicoDestino::consultarDestino(const Codigo& codigo) {
    auto it = destinos.find(codigo.getValor());
    if (it != destinos.end()) {
        return it->second;
    }
    throw runtime_error("Destino não encontrado!");
}

// Implementações simplificadas para StubServicoAtividade
bool StubServicoAtividade::adicionarAtividade(const Atividade& atividade) {
   (void)atividade;
   return true;
}

bool StubServicoAtividade::removerAtividade(const Nome& nome) {
    (void)nome; // Supressão do warning de parâmetro não usado
    return true;
}

// Implementações simplificadas para StubServicoHospedagem
bool StubServicoHospedagem::adicionarHospedagem(const Hospedagem& hospedagem) {
    string codigo = hospedagem.getCodigo().getValor();
    if (hospedagens.find(codigo) == hospedagens.end()) {
        hospedagens[codigo] = hospedagem;
        cout << "Hospedagem adicionado com sucesso: " << codigo << endl;
        return true;
    }
    cout << "Destino já existente: " << codigo << endl;
    return false;
}

bool StubServicoHospedagem::removerHospedagem(const Codigo& codigo) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    return true;
}

Hospedagem StubServicoHospedagem::consultarHospedagem(const Codigo& codigo) {
    auto it = hospedagens.find(codigo.getValor());
    if (it != hospedagens.end()) {
        return it->second;
    }
    throw runtime_error("Hospedagem não encontrado!");
}