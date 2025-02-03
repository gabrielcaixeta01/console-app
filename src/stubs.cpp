#include "../include/stubs.hpp"
#include <iostream>

using namespace std;

// Método para associar StubServicoConta ao StubServicoAutenticacao
void StubServicoAutenticacao::setServicoConta(StubServicoConta* servico) {
    this->servicoConta = servico;
}

// Implementação do StubServicoAutenticacao
bool StubServicoAutenticacao::autenticar(const Conta& conta) {
    if (!servicoConta) {
        cout << "Erro: Nenhum serviço de conta associado à autenticação." << endl;
        return false;
    }

    string codigo = conta.getCodigo().getValor();
    string senha = conta.getSenha().getValor();

    auto it = servicoConta->getContas().find(codigo);
    if (it != servicoConta->getContas().end()) {
        if (it->second.getSenha().getValor() == senha) {
            cout << "Stub: Autenticação bem-sucedida para o código: " << codigo << endl;
            return true;
        } else {
            cout << "Stub: Falha na autenticação. Senha incorreta para o código: " << codigo << endl;
        }
    } else {
        cout << "Stub: Falha na autenticação. Conta não encontrada para o código: " << codigo << endl;
    }
    return false;
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
        cout << "Stub: Viagem atualizada com sucesso." << endl;
        return true;
    }
    cout << "Erro: Viagem não encontrada para atualização." << endl;
    return false;
}

bool StubServicoViagem::ler(const Codigo& codigo, Viagem* viagem) {
    auto it = viagens.find(codigo.getValor());
    if (it != viagens.end()) {
        *viagem = it->second;
        return true;
    }
    return false;
}

bool StubServicoViagem::definirAvaliacao(const Codigo& codigoViagem, const Avaliacao& avaliacao) {
    auto it = viagens.find(codigoViagem.getValor());

    if (it != viagens.end()) {
        it->second.setAvaliacao(avaliacao);
        cout << "Avaliação definida para a viagem " << codigoViagem.getValor() << endl;
        return true;
    }

    cout << "Erro: Viagem não encontrada para definir avaliação." << endl;
    return false;
}

// Implementação dos métodos para definir destino, hospedagem e atividade
bool StubServicoViagem::definirDestino(const Codigo& codigoViagem, const Destino& destino) {
    // Verifica se a viagem já existe antes de definir um destino
    auto it = viagens.find(codigoViagem.getValor());

    if (it != viagens.end()) {
        destinos[codigoViagem.getValor()] = destino;
        cout << "Destino definido para a viagem " << codigoViagem.getValor() << endl;
        return true;
    }

    cout << "Erro: Viagem não encontrada para definir destino." << endl;
    return false;
}

bool StubServicoViagem::definirHospedagem(const Codigo& codigoViagem, const Hospedagem& hospedagem) {
    if (viagens.find(codigoViagem.getValor()) != viagens.end()) {
        hospedagens[codigoViagem.getValor()] = hospedagem;
        cout << "Hospedagem definida para a viagem " << codigoViagem.getValor() << endl;
        return true;
    }
    cout << "Erro: Viagem não encontrada para definir hospedagem." << endl;
    return false;
}

bool StubServicoViagem::definirAtividade(const Codigo& codigoViagem, const Atividade& atividade) {
    auto it = viagens.find(codigoViagem.getValor());
    if (it != viagens.end()) {
        it->second.setAtividade(atividade);
        cout << "Atividade definida para a viagem " << codigoViagem.getValor() << endl;
        return true;
    }
    cout << "Erro: Viagem não encontrada para definir atividade." << endl;
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

// Implementação de StubServicoDestino
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

// Implementação de StubServicoHospedagem
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

bool StubServicoViagem::lerDestino(const Codigo& codigoViagem, Destino* destino) {
    auto it = destinos.find(codigoViagem.getValor());
    if (it != destinos.end()) {
        *destino = it->second;
        return true;
    }
    return false;
}

bool StubServicoViagem::lerHospedagem(const Codigo& codigoViagem, Hospedagem* hospedagem) {
    auto it = hospedagens.find(codigoViagem.getValor());
    if (it != hospedagens.end()) {
        *hospedagem = it->second;
        return true;
    }
    return false;
}

bool StubServicoViagem::lerAtividade(const Codigo& codigoViagem, Atividade* atividade) {
    auto it = atividades.find(codigoViagem.getValor());
    if (it != atividades.end()) {
        *atividade = it->second;
        return true;
    }
    return false;
}