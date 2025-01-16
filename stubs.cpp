#include "stubs.hpp"
#include <iostream>

using namespace std;

// Implementações para StubServicoConta
bool StubServicoConta::criarConta(const Conta& conta) {
    (void)conta; // Supressão do warning de parâmetro não usado
    cout << "Stub: Criar conta" << endl;
    return true;
}

bool StubServicoConta::excluirConta(const Codigo& codigo) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    cout << "Stub: Excluir conta" << endl;
    return true;
}

Conta StubServicoConta::consultarConta(const Codigo& codigo) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    cout << "Stub: Consultar conta" << endl;
    return Conta();
}

bool StubServicoConta::atualizarConta(const Conta& conta) {
    (void)conta; // Supressão do warning de parâmetro não usado
    cout << "Stub: Atualizar conta" << endl;
    return true;
}

// Implementação simplificada para StubServicoAutenticacao
bool StubServicoAutenticacao::autenticar(const Codigo& codigo, const Senha& senha) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    (void)senha;  // Supressão do warning de parâmetro não usado
    cout << "Stub: Autenticação sempre retorna sucesso" << endl;
    return true;
}

// Implementações simplificadas para StubServicoViagem
bool StubServicoViagem::criarViagem(const Viagem& viagem) {
    (void)viagem; // Supressão do warning de parâmetro não usado
    cout << "Stub: Criar viagem" << endl;
    return true;
}

bool StubServicoViagem::excluirViagem(const Codigo& codigo) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    cout << "Stub: Excluir viagem" << endl;
    return true;
}

Viagem StubServicoViagem::consultarViagem(const Codigo& codigo) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    cout << "Stub: Consultar viagem" << endl;
    return Viagem();
}

bool StubServicoViagem::atualizarViagem(const Viagem& viagem) {
    (void)viagem; // Supressão do warning de parâmetro não usado
    cout << "Stub: Atualizar viagem" << endl;
    return true;
}

// Implementações simplificadas para StubServicoDestino
bool StubServicoDestino::adicionarDestino(const Destino& destino) {
    (void)destino; // Supressão do warning de parâmetro não usado
    cout << "Stub: Adicionar destino" << endl;
    return true;
}

bool StubServicoDestino::removerDestino(const Codigo& codigo) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    cout << "Stub: Remover destino" << endl;
    return true;
}

Destino StubServicoDestino::consultarDestino(const Codigo& codigo) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    cout << "Stub: Consultar destino" << endl;
    return Destino();
}

// Implementações simplificadas para StubServicoAtividade
bool StubServicoAtividade::adicionarAtividade(const Atividade& atividade) {
    (void)atividade; // Supressão do warning de parâmetro não usado
    cout << "Stub: Adicionar atividade" << endl;
    return true;
}

bool StubServicoAtividade::removerAtividade(const Nome& nome) {
    (void)nome; // Supressão do warning de parâmetro não usado
    cout << "Stub: Remover atividade" << endl;
    return true;
}

Atividade StubServicoAtividade::consultarAtividade(const Nome& nome) {
    (void)nome; // Supressão do warning de parâmetro não usado
    cout << "Stub: Consultar atividade" << endl;
    return Atividade();
}

// Implementações simplificadas para StubServicoHospedagem
bool StubServicoHospedagem::adicionarHospedagem(const Hospedagem& hospedagem) {
    (void)hospedagem; // Supressão do warning de parâmetro não usado
    cout << "Stub: Adicionar hospedagem" << endl;
    return true;
}

bool StubServicoHospedagem::removerHospedagem(const Codigo& codigo) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    cout << "Stub: Remover hospedagem" << endl;
    return true;
}

Hospedagem StubServicoHospedagem::consultarHospedagem(const Codigo& codigo) {
    (void)codigo; // Supressão do warning de parâmetro não usado
    cout << "Stub: Consultar hospedagem" << endl;
    return Hospedagem();
}