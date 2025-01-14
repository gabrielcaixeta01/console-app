#include <iostream>
#include "controladoras.hpp"

using namespace std;

// Implementação de CntrIUAutenticacao
void CntrIUAutenticacao::setCntrLNAutenticacao(IAS* cntrLNAutenticacao) {
    this->cntrLNAutenticacao = cntrLNAutenticacao;
}

bool CntrIUAutenticacao::autenticar(const Conta& conta) {
    cout << "Autenticando conta..." << endl;
    return cntrLNAutenticacao->autenticar(conta);
}

// Implementação de CntrIUConta
void CntrIUConta::setCntrLNConta(ICS* cntrLNConta) {
    this->cntrLNConta = cntrLNConta;
}

bool CntrIUConta::criarConta(const Conta& conta) {
    cout << "Criando conta..." << endl;
    return cntrLNConta->criar(conta);
}

bool CntrIUConta::excluirConta(const string& codigo) {
    cout << "Excluindo conta..." << endl;
    return cntrLNConta->excluir(codigo);
}

Conta CntrIUConta::lerConta(const string& codigo) {
    cout << "Lendo conta..." << endl;
    return cntrLNConta->ler(codigo);
}

bool CntrIUConta::atualizarConta(const Conta& conta) {
    cout << "Atualizando conta..." << endl;
    return cntrLNConta->atualizar(conta);
}

// Implementação de CntrIUViagem
void CntrIUViagem::setCntrLNViagem(IVS* cntrLNViagem) {
    this->cntrLNViagem = cntrLNViagem;
}

bool CntrIUViagem::cadastrarViagem(const Viagem& viagem) {
    cout << "Cadastrando viagem..." << endl;
    return cntrLNViagem->cadastrarViagem(viagem);
}

bool CntrIUViagem::cadastrarHospedagem(const Hospedagem& hospedagem) {
    cout << "Cadastrando hospedagem..." << endl;
    return cntrLNViagem->cadastrarHospedagem(hospedagem);
}

bool CntrIUViagem::cadastrarDestino(const Destino& destino) {
    cout << "Cadastrando destino..." << endl;
    return cntrLNViagem->cadastrarDestino(destino);
}

bool CntrIUViagem::cadastrarAtividade(const Atividade& atividade) {
    cout << "Cadastrando atividade..." << endl;
    return cntrLNViagem->cadastrarAtividade(atividade);
}