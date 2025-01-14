#ifndef STUBS_HPP
#define STUBS_HPP

#include "interfaces.hpp"
#include "entidades.hpp"
#include <stdexcept>
#include <iostream>

using namespace std;

/**
 * @brief Implementação de stub para autenticação.
 */
class StubIAS : public IAS {
private:
    const static int TRIGGER_FALHA = 67890;
    const static int TRIGGER_ERRO_SISTEMA = 78901;

public:
    bool autenticar(const Conta&) override; // Método de autenticação
};

/**
 * @brief Implementação de stub para controle de contas.
 */
class StubICS : public ICS {
public:
    bool criar(const Conta&) override;              // Método para criar uma conta
    bool excluir(const string&) override;           // Método para excluir uma conta
    Conta ler(const string&) override;              // Método para ler uma conta
    bool atualizar(const Conta&) override;          // Método para atualizar uma conta
};

/**
 * @brief Implementação de stub para controle de viagens.
 */
class StubIVS : public IVS {
public:
    bool cadastrarViagem(const Viagem&) override;
    bool cadastrarHospedagem(const Hospedagem&) override;
    bool cadastrarDestino(const Destino&) override;
    bool cadastrarAtividade(const Atividade&) override;
};

#endif // STUBS_HPP