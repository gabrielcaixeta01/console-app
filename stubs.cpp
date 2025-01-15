#include "stubs.hpp"

// Implementação StubServicoConta
bool StubServicoConta::criarConta(const Conta& conta) {
    return true;
}

bool StubServicoConta::excluirConta(const Codigo& codigo) {
    return true;
}

Conta StubServicoConta::consultarConta(const Codigo& codigo) {
    Conta conta;
    conta.setCodigo(codigo);
    return conta;
}

bool StubServicoConta::atualizarConta(const Conta& conta) {
    return true;
}

// Implementação StubServicoAutenticacao
bool StubServicoAutenticacao::autenticar(const Codigo& codigo, const Senha& senha) {
    return true;
}

// Implementação StubServicoViagem
bool StubServicoViagem::criarViagem(const Viagem& viagem) {
    return true;
}

bool StubServicoViagem::excluirViagem(const Codigo& codigo) {
    return true;
}

Viagem StubServicoViagem::consultarViagem(const Codigo& codigo) {
    Viagem viagem;
    viagem.setCodigo(codigo);
    return viagem;
}

bool StubServicoViagem::atualizarViagem(const Viagem& viagem) {
    return true;
}

// Implementação StubServicoDestino
bool StubServicoDestino::adicionarDestino(const Destino& destino) {
    return true;
}

bool StubServicoDestino::removerDestino(const Codigo& codigo) {
    return true;
}

Destino StubServicoDestino::consultarDestino(const Codigo& codigo) {
    Destino destino;
    destino.setCodigo(codigo);
    return destino;
}

// Implementação StubServicoAtividade
bool StubServicoAtividade::adicionarAtividade(const Atividade& atividade) {
    return true;
}

bool StubServicoAtividade::removerAtividade(const Nome& nome) {
    return true;
}

Atividade StubServicoAtividade::consultarAtividade(const Nome& nome) {
    Atividade atividade;
    atividade.setNome(nome);
    return atividade;
}

// Implementação StubServicoHospedagem
bool StubServicoHospedagem::adicionarHospedagem(const Hospedagem& hospedagem) {
    return true;
}

bool StubServicoHospedagem::removerHospedagem(const Codigo& codigo) {
    return true;
}

Hospedagem StubServicoHospedagem::consultarHospedagem(const Codigo& codigo) {
    Hospedagem hospedagem;
    hospedagem.setCodigo(codigo);
    return hospedagem;
}