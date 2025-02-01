#ifndef STUBS_HPP
#define STUBS_HPP

#include "interfaces.hpp"
#include <unordered_map>

class StubServicoConta;  

// Stub para Serviço de Autenticação
class StubServicoAutenticacao : public ISAutenticacao {
private:
    StubServicoConta* servicoConta = nullptr;  
public:
    void setServicoConta(StubServicoConta* servico);  
    bool autenticar(const Conta& conta) override;
};

// Stub para Serviço de Contas
class StubServicoConta : public ISConta {
private:
    unordered_map<string, Conta> contas;
public:
    bool criar(const Conta& conta) override;
    bool excluir(const Codigo& codigo) override;
    bool atualizar(const Conta& conta) override;
    bool ler(const Codigo& codigo, Conta* conta) override;
    const unordered_map<string, Conta>& getContas() const { return contas; }
};

// Stub para Serviço de Viagens
class StubServicoViagem : public ISViagem {
private:
    unordered_map<string, Viagem> viagens;
public:
    bool criar(const Viagem& viagem) override;
    bool excluir(const Codigo& codigo) override;
    bool atualizar(const Viagem& viagem) override;
    bool ler(const Codigo& codigo, Viagem* viagem) override;
    const unordered_map<string, Viagem>& getViagens() const { return viagens; }
};

// Stub para Serviço de Destinos
class StubServicoDestino : public ISDestino {
private:
    unordered_map<string, Destino> destinos;
public:
    bool criar(const Destino& destino) override;
    bool excluir(const Codigo& codigo) override;
    bool atualizar(const Destino& destino) override;
    bool ler(const Codigo& codigo, Destino* destino) override;
};

// Stub para Serviço de Atividades
class StubServicoAtividade : public ISAtividade {
private:
    unordered_map<string, Atividade> atividades;
public:
    bool criar(const Atividade& atividade) override;
    bool excluir(const Nome& nome) override;
    bool atualizar(const Atividade& atividade) override;
    bool ler(const Nome& nome, Atividade* atividade) override;
};

// Stub para Serviço de Hospedagens
class StubServicoHospedagem : public ISHospedagem {
private:
    unordered_map<string, Hospedagem> hospedagens;
public:
    bool criar(const Hospedagem& hospedagem) override;
    bool excluir(const Codigo& codigo) override;
    bool atualizar(const Hospedagem& hospedagem) override;
    bool ler(const Codigo& codigo, Hospedagem* hospedagem) override;
};

#endif // STUBS_HPP
