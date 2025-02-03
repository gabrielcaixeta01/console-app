#ifndef STUBS_HPP
#define STUBS_HPP

#include "interfaces.hpp"
#include <unordered_map>

class StubServicoConta;  

/**
 * @class StubServicoAutenticacao
 * @brief Stub para o Serviço de Autenticação.
 */
class StubServicoAutenticacao : public ISAutenticacao {
private:
    StubServicoConta* servicoConta = nullptr;

public:
    void setServicoConta(StubServicoConta* servico);
    bool autenticar(const Conta& conta) override;
};

/**
 * @class StubServicoConta
 * @brief Stub para o Serviço de Contas.
 */
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

/**
 * @class StubServicoViagem
 * @brief Stub para o Serviço de Viagens.
 */
class StubServicoViagem : public ISViagem {
private:
    unordered_map<string, Viagem> viagens;
    unordered_map<string, Destino> destinos;
    unordered_map<string, Hospedagem> hospedagens;
    unordered_map<string, Atividade> atividades;

public:
    bool criar(const Viagem&) override;
    bool excluir(const Codigo&) override;
    bool atualizar(const Viagem&) override;
    bool ler(const Codigo&, Viagem*) override;

    bool definirDestino(const Codigo&, const Destino&) override;
    bool definirHospedagem(const Codigo&, const Hospedagem&) override;
    bool definirAtividade(const Codigo&, const Atividade&) override;
    bool definirAvaliacao(const Codigo&, const Avaliacao&) override;

    // Novos métodos adicionados:
    bool lerDestino(const Codigo&, Destino*) override;
    bool lerHospedagem(const Codigo&, Hospedagem*) override;
    bool lerAtividade(const Codigo&, Atividade*) override;
};

/**
 * @class StubServicoDestino
 * @brief Stub para o Serviço de Destinos.
 */
class StubServicoDestino : public ISDestino {
private:
    unordered_map<string, Destino> destinos;

public:
    bool criar(const Destino& destino) override;
    bool excluir(const Codigo& codigo) override;
    bool atualizar(const Destino& destino) override;
    bool ler(const Codigo& codigo, Destino* destino) override;
};

/**
 * @class StubServicoAtividade
 * @brief Stub para o Serviço de Atividades.
 */
class StubServicoAtividade : public ISAtividade {
private:
    unordered_map<string, Atividade> atividades;

public:
    bool criar(const Atividade& atividade) override;
    bool excluir(const Nome& nome) override;
    bool atualizar(const Atividade& atividade) override;
    bool ler(const Nome& nome, Atividade* atividade) override;
};

/**
 * @class StubServicoHospedagem
 * @brief Stub para o Serviço de Hospedagens.
 */
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