#include "stubs.hpp"
#include <iostream>

using namespace std;

// Implementação do StubServicoAutenticacao
bool StubServicoAutenticacao::autenticar(const Conta& conta) {
    // Simulação de autenticação
    if (conta.getCodigo().getValor() == "ABC123" && conta.getSenha().getValor() == "18340") {
        cout << "Stub: Autenticação bem-sucedida para o código: " << conta.getCodigo().getValor() << endl;
        return true;
    } else {
        cout << "Stub: Falha na autenticação para o código: " << conta.getCodigo().getValor() << endl;
        return false;
    }
}

// Implementação do StubServicoConta
bool StubServicoConta::criar(const Conta& conta) {
    string codigo = conta.getCodigo().getValor();
    if (contas.find(codigo) == contas.end()) {
        contas[codigo] = conta;
        cout << "Conta criada com sucesso: " << codigo << endl;
        return true;
    }
    cout << "Erro: Conta já existente: " << codigo << endl;
    return false;
}

bool StubServicoConta::excluir(const Codigo& codigo) {
    if (contas.erase(codigo.getValor()) > 0) {
        cout << "Conta excluída com sucesso: " << codigo.getValor() << endl;
        return true;
    }
    cout << "Erro: Conta não encontrada: " << codigo.getValor() << endl;
    return false;
}

bool StubServicoConta::atualizar(const Conta& conta) {
    string codigo = conta.getCodigo().getValor();
    if (contas.find(codigo) != contas.end()) {
        contas[codigo] = conta;
        cout << "Conta atualizada com sucesso: " << codigo << endl;
        return true;
    }
    cout << "Erro: Conta não encontrada para atualização: " << codigo << endl;
    return false;
}

bool StubServicoConta::ler(const Codigo& codigo, Conta* conta) {
    auto it = contas.find(codigo.getValor());
    if (it != contas.end()) {
        *conta = it->second;
        cout << "Conta encontrada: " << codigo.getValor() << endl;
        return true;
    }
    cout << "Erro: Conta não encontrada: " << codigo.getValor() << endl;
    return false;
}

// Implementação do StubServicoViagem
bool StubServicoViagem::criar(const Viagem& viagem) {
    string codigo = viagem.getCodigo().getValor();
    if (viagens.find(codigo) == viagens.end()) {
        viagens[codigo] = viagem;
        cout << "Viagem criada com sucesso: " << codigo << endl;
        return true;
    }
    cout << "Erro: Viagem já existente: " << codigo << endl;
    return false;
}

bool StubServicoViagem::excluir(const Codigo& codigo) {
    if (viagens.erase(codigo.getValor()) > 0) {
        cout << "Viagem excluída com sucesso: " << codigo.getValor() << endl;
        return true;
    }
    cout << "Erro: Viagem não encontrada: " << codigo.getValor() << endl;
    return false;
}

bool StubServicoViagem::atualizar(const Viagem& viagem) {
    string codigo = viagem.getCodigo().getValor();
    if (viagens.find(codigo) != viagens.end()) {
        viagens[codigo] = viagem;
        cout << "Viagem atualizada com sucesso: " << codigo << endl;
        return true;
    }
    cout << "Erro: Viagem não encontrada para atualização: " << codigo << endl;
    return false;
}

bool StubServicoViagem::ler(const Codigo& codigo, Viagem* viagem) {
    auto it = viagens.find(codigo.getValor());
    if (it != viagens.end()) {
        *viagem = it->second;
        cout << "Viagem encontrada: " << codigo.getValor() << endl;
        return true;
    }
    cout << "Erro: Viagem não encontrada: " << codigo.getValor() << endl;
    return false;
}

// Implementação do StubServicoDestino
bool StubServicoDestino::criar(const Destino& destino) {
    string codigo = destino.getCodigo().getValor();
    if (destinos.find(codigo) == destinos.end()) {
        destinos[codigo] = destino;
        cout << "Destino criado com sucesso: " << codigo << endl;
        return true;
    }
    cout << "Erro: Destino já existente: " << codigo << endl;
    return false;
}

bool StubServicoDestino::excluir(const Codigo& codigo) {
    if (destinos.erase(codigo.getValor()) > 0) {
        cout << "Destino excluído com sucesso: " << codigo.getValor() << endl;
        return true;
    }
    cout << "Erro: Destino não encontrado: " << codigo.getValor() << endl;
    return false;
}

bool StubServicoDestino::atualizar(const Destino& destino) {
    string codigo = destino.getCodigo().getValor();
    if (destinos.find(codigo) != destinos.end()) {
        destinos[codigo] = destino;
        cout << "Destino atualizado com sucesso: " << codigo << endl;
        return true;
    }
    cout << "Erro: Destino não encontrado para atualização: " << codigo << endl;
    return false;
}

bool StubServicoDestino::ler(const Codigo& codigo, Destino* destino) {
    auto it = destinos.find(codigo.getValor());
    if (it != destinos.end()) {
        *destino = it->second;
        cout << "Destino encontrado: " << codigo.getValor() << endl;
        return true;
    }
    cout << "Erro: Destino não encontrado: " << codigo.getValor() << endl;
    return false;
}

// Implementação do StubServicoAtividade
bool StubServicoAtividade::criar(const Atividade& atividade) {
    string nome = atividade.getNome().getValor();
    if (atividades.find(nome) == atividades.end()) {
        atividades[nome] = atividade;
        cout << "Atividade criada com sucesso: " << nome << endl;
        return true;
    }
    cout << "Erro: Atividade já existente: " << nome << endl;
    return false;
}

bool StubServicoAtividade::excluir(const Nome& nome) {
    if (atividades.erase(nome.getValor()) > 0) {
        cout << "Atividade excluída com sucesso: " << nome.getValor() << endl;
        return true;
    }
    cout << "Erro: Atividade não encontrada: " << nome.getValor() << endl;
    return false;
}

bool StubServicoAtividade::atualizar(const Atividade& atividade) {
    string nome = atividade.getNome().getValor();
    if (atividades.find(nome) != atividades.end()) {
        atividades[nome] = atividade;
        cout << "Atividade atualizada com sucesso: " << nome << endl;
        return true;
    }
    cout << "Erro: Atividade não encontrada para atualização: " << nome << endl;
    return false;
}

bool StubServicoAtividade::ler(const Nome& nome, Atividade* atividade) {
    auto it = atividades.find(nome.getValor());
    if (it != atividades.end()) {
        *atividade = it->second;
        cout << "Atividade encontrada: " << nome.getValor() << endl;
        return true;
    }
    cout << "Erro: Atividade não encontrada: " << nome.getValor() << endl;
    return false;
}

// Implementação do StubServicoHospedagem
bool StubServicoHospedagem::criar(const Hospedagem& hospedagem) {
    string codigo = hospedagem.getCodigo().getValor();
    if (hospedagens.find(codigo) == hospedagens.end()) {
        hospedagens[codigo] = hospedagem;
        cout << "Hospedagem criada com sucesso: " << codigo << endl;
        return true;
    }
    cout << "Erro: Hospedagem já existente: " << codigo << endl;
    return false;
}

bool StubServicoHospedagem::excluir(const Codigo& codigo) {
    if (hospedagens.erase(codigo.getValor()) > 0) {
        cout << "Hospedagem excluída com sucesso: " << codigo.getValor() << endl;
        return true;
    }
    cout << "Erro: Hospedagem não encontrada: " << codigo.getValor() << endl;
    return false;
}

bool StubServicoHospedagem::atualizar(const Hospedagem& hospedagem) {
    string codigo = hospedagem.getCodigo().getValor();
    if (hospedagens.find(codigo) != hospedagens.end()) {
        hospedagens[codigo] = hospedagem;
        cout << "Hospedagem atualizada com sucesso: " << codigo << endl;
        return true;
    }
    cout << "Erro: Hospedagem não encontrada para atualização: " << codigo << endl;
    return false;
}

bool StubServicoHospedagem::ler(const Codigo& codigo, Hospedagem* hospedagem) {
    auto it = hospedagens.find(codigo.getValor());
    if (it != hospedagens.end()) {
        *hospedagem = it->second;
        cout << "Hospedagem encontrada: " << codigo.getValor() << endl;
        return true;
    }
    cout << "Erro: Hospedagem não encontrada: " << codigo.getValor() << endl;
    return false;
}