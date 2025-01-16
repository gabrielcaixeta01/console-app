#ifndef STUBS_HPP
#define STUBS_HPP

#include "interfaces.hpp"
#include <unordered_map>

// Implementação em memória para simular os serviços (stubs)

// Stub para Serviço de Autenticação
class StubServicoAutenticacao : public ISAutenticacao {
public:
    bool autenticar(const Conta& conta) override;
};

// Stub para Serviço de Contas
class StubServicoConta : public ISConta {
private:
    unordered_map<string, Conta> contas; // "Banco de dados" em memória
public:
    bool criar(const Conta& conta) override;
    bool excluir(const Codigo& codigo) override;
    bool atualizar(const Conta& conta) override;
    bool ler(const Codigo& codigo, Conta* conta) override;
};

// Stub para Serviço de Viagens
class StubServicoViagem : public ISViagem {
private:
    unordered_map<string, Viagem> viagens; // "Banco de dados" em memória
public:
    bool criar(const Viagem& viagem) override;
    bool excluir(const Codigo& codigo) override;
    bool atualizar(const Viagem& viagem) override;
    bool ler(const Codigo& codigo, Viagem* viagem) override;
};

// Stub para Serviço de Destinos
class StubServicoDestino : public ISDestino {
private:
    unordered_map<string, Destino> destinos; // "Banco de dados" em memória
public:
    bool criar(const Destino& destino) override;
    bool excluir(const Codigo& codigo) override;
    bool atualizar(const Destino& destino) override;
    bool ler(const Codigo& codigo, Destino* destino) override;
};

// Stub para Serviço de Atividades
class StubServicoAtividade : public ISAtividade {
private:
    unordered_map<string, Atividade> atividades; // "Banco de dados" em memória
public:
    bool criar(const Atividade& atividade) override;
    bool excluir(const Nome& nome) override;
    bool atualizar(const Atividade& atividade) override;
    bool ler(const Nome& nome, Atividade* atividade) override;
};

// Stub para Serviço de Hospedagens
class StubServicoHospedagem : public ISHospedagem {
private:
    unordered_map<string, Hospedagem> hospedagens; // "Banco de dados" em memória
public:
    bool criar(const Hospedagem& hospedagem) override;
    bool excluir(const Codigo& codigo) override;
    bool atualizar(const Hospedagem& hospedagem) override;
    bool ler(const Codigo& codigo, Hospedagem* hospedagem) override;
};

#endif // STUBS_HPP