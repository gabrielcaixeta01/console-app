#ifndef INTERFACES_HPP
#define INTERFACES_HPP

#include "entidades.hpp"
#include <iostream>
using namespace std;

// Interfaces de Apresentação

/**
 * @class IAAutenticacao
 * @brief Interface de Apresentação para Autenticação.
 */
class IAAutenticacao {
public:
    virtual ~IAAutenticacao() = default;
    virtual bool autenticar(const Codigo&) = 0;
};

/**
 * @class IAConta
 * @brief Interface de Apresentação para Conta.
 */
class IAConta {
public:
    virtual ~IAConta() = default;
    virtual void criar() = 0;
    virtual void executar(const Codigo&) = 0;
};

/**
 * @class IAViagem
 * @brief Interface de Apresentação para Viagem.
 */
class IAViagem {
public:
    virtual ~IAViagem() = default;
    virtual void executar(const Codigo&) = 0;
};

/**
 * @class IADestino
 * @brief Interface de Apresentação para Destino.
 */
class IADestino {
public:
    virtual ~IADestino() = default;
    virtual void executar(const Codigo&) = 0;
};

/**
 * @class IAAtividade
 * @brief Interface de Apresentação para Atividade.
 */
class IAAtividade {
public:
    virtual ~IAAtividade() = default;
    virtual void executar(const Codigo&) = 0;
};

/**
 * @class IAHospedagem
 * @brief Interface de Apresentação para Hospedagem.
 */
class IAHospedagem {
public:
    virtual ~IAHospedagem() = default;
    virtual void executar(const Codigo&) = 0;
};

// Interfaces de Serviço

/**
 * @class ISAutenticacao
 * @brief Interface de Serviço para Autenticação.
 */
class ISAutenticacao {
public:
    virtual ~ISAutenticacao() = default;
    virtual bool autenticar(const Conta&) = 0;
};

/**
 * @class ISConta
 * @brief Interface de Serviço para Conta.
 */
class ISConta {
public:
    virtual ~ISConta() = default;
    virtual bool criar(const Conta&) = 0;
    virtual bool excluir(const Codigo&) = 0;
    virtual bool atualizar(const Conta&) = 0;
    virtual bool ler(const Codigo&, Conta*) = 0;
};

/**
 * @class ISViagem
 * @brief Interface de Serviço para Viagem.
 */
class ISViagem {
public:
    virtual ~ISViagem() = default;
    virtual bool criar(const Viagem&) = 0;
    virtual bool excluir(const Codigo&) = 0;
    virtual bool atualizar(const Viagem&) = 0;
    virtual bool ler(const Codigo&, Viagem*) = 0;

    // Métodos para definir destino, hospedagem e atividade
    virtual bool definirDestino(const Codigo&, const Destino&) = 0;
    virtual bool definirHospedagem(const Codigo&, const Hospedagem&) = 0;
    virtual bool definirAtividade(const Codigo&, const Atividade&) = 0;
    virtual bool definirAvaliacao(const Codigo&, const Avaliacao&) = 0;

    // Métodos para buscar destino, hospedagem e atividade
    virtual bool lerDestino(const Codigo&, Destino*) = 0;
    virtual bool lerHospedagem(const Codigo&, Hospedagem*) = 0;
    virtual bool lerAtividade(const Codigo&, Atividade*) = 0;
};

/**
 * @class ISDestino
 * @brief Interface de Serviço para Destino.
 */
class ISDestino {
public:
    virtual ~ISDestino() = default;
    virtual bool criar(const Destino&) = 0;
    virtual bool excluir(const Codigo&) = 0;
    virtual bool atualizar(const Destino&) = 0;
    virtual bool ler(const Codigo&, Destino*) = 0;
};

/**
 * @class ISAtividade
 * @brief Interface de Serviço para Atividade.
 */
class ISAtividade {
public:
    virtual ~ISAtividade() = default;
    virtual bool criar(const Atividade&) = 0;
    virtual bool excluir(const Nome&) = 0;
    virtual bool atualizar(const Atividade&) = 0;
    virtual bool ler(const Nome&, Atividade*) = 0;
};

/**
 * @class ISHospedagem
 * @brief Interface de Serviço para Hospedagem.
 */
class ISHospedagem {
public:
    virtual ~ISHospedagem() = default;
    virtual bool criar(const Hospedagem&) = 0;
    virtual bool excluir(const Codigo&) = 0;
    virtual bool atualizar(const Hospedagem&) = 0;
    virtual bool ler(const Codigo&, Hospedagem*) = 0;
};

#endif // INTERFACES_HPP