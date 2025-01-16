#include "stubs.hpp"
#include <iostream>

using namespace std;

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
bool StubServicoViagem::criarViagem(const Viagem& viagem) {
    (void)viagem; // Supressão do warning de parâmetro não usado
    return true;
}

bool StubServicoViagem::excluirViagem(const Codigo& codigo) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    return true;
}

Viagem StubServicoViagem::consultarViagem(const Codigo& codigo) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    return Viagem();
}

bool StubServicoViagem::atualizarViagem(const Viagem& viagem) {
    (void)viagem; // Supressão do warning de parâmetro não usado
    return true;
}

// Implementações simplificadas para StubServicoDestino
bool StubServicoDestino::adicionarDestino(const Destino& destino) {
    (void)destino; // Supressão do warning de parâmetro não usado
    return true;
}

bool StubServicoDestino::removerDestino(const Codigo& codigo) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    return true;
}

Destino StubServicoDestino::consultarDestino(const Codigo& codigo) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    return Destino();
}

// Implementações simplificadas para StubServicoAtividade
bool StubServicoAtividade::adicionarAtividade(const Atividade& atividade) {
    (void)atividade; // Supressão do warning de parâmetro não usado
    return true;
}

bool StubServicoAtividade::removerAtividade(const Nome& nome) {
    (void)nome; // Supressão do warning de parâmetro não usado
    return true;
}

Atividade StubServicoAtividade::consultarAtividade(const Nome& nome) {
    (void)nome; // Supressão do warning de parâmetro não usado
    return Atividade();
}

// Implementações simplificadas para StubServicoHospedagem
bool StubServicoHospedagem::adicionarHospedagem(const Hospedagem& hospedagem) {
    (void)hospedagem; // Supressão do warning de parâmetro não usado
    return true;
}

bool StubServicoHospedagem::removerHospedagem(const Codigo& codigo) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    return true;
}

Hospedagem StubServicoHospedagem::consultarHospedagem(const Codigo& codigo) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    return Hospedagem();
}