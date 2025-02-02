#ifndef CONTROLADORAS_HPP
#define CONTROLADORAS_HPP

#include "interfaces.hpp"
#include <iostream>
using namespace std;

/**
 * @class CntrAutenticacaoA
 * @brief Controladora de Apresentação da Autenticação.
 *
 * Responsável por intermediar a comunicação entre a interface de usuário e o serviço de autenticação.
 */
class CntrAutenticacaoA : public IAAutenticacao {
private:
    ISAutenticacao* servicoAutenticacao; ///< Ponteiro para o serviço de autenticação.

public:
    /**
     * @brief Define o serviço de autenticação a ser utilizado pela controladora.
     * @param servico Ponteiro para o serviço de autenticação.
     */
    void setServicoAutenticacao(ISAutenticacao* servico);

    /**
     * @brief Autentica um usuário com base no código fornecido.
     * @param codigo Código do usuário a ser autenticado.
     * @return true se a autenticação for bem-sucedida, false caso contrário.
     */
    bool autenticar(const Codigo& codigo) override;
};

/**
 * @class CntrContaA
 * @brief Controladora de Apresentação da Conta.
 *
 * Responsável por intermediar a comunicação entre a interface de usuário e o serviço de conta.
 */
class CntrContaA : public IAConta {
private:
    ISConta* servicoConta; ///< Ponteiro para o serviço de conta.

public:
    /**
     * @brief Define o serviço de conta a ser utilizado pela controladora.
     * @param servico Ponteiro para o serviço de conta.
     */
    void setServicoConta(ISConta* servico);

    /**
     * @brief Cria uma nova conta.
     */
    void criar() override;

    /**
     * @brief Executa operações relacionadas à conta com base no código fornecido.
     * @param codigo Código da conta a ser manipulada.
     */
    void executar(const Codigo& codigo) override;
};

/**
 * @class CntrViagemA
 * @brief Controladora de Apresentação da Viagem.
 *
 * Responsável por intermediar a comunicação entre a interface de usuário e o serviço de viagem.
 */
class CntrViagemA : public IAViagem {
private:
    ISViagem* servicoViagem; ///< Ponteiro para o serviço de viagem.

public:
    /**
     * @brief Define o serviço de viagem a ser utilizado pela controladora.
     * @param servico Ponteiro para o serviço de viagem.
     */
    void setServicoViagem(ISViagem* servico);

    /**
     * @brief Executa operações relacionadas à viagem com base no código fornecido.
     * @param codigo Código da viagem a ser manipulada.
     */
    void executar(const Codigo& codigo) override;
};

#endif // CONTROLADORAS_HPP