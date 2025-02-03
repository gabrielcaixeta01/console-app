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
    void setServicoAutenticacao(ISAutenticacao* servico);
    bool autenticar(const Codigo& codigo) override;
};

/**
 * @class CntrContaA
 * @brief Controladora de Apresentação da Conta.
 */
class CntrContaA : public IAConta {
private:
    ISConta* servicoConta;

public:
    void setServicoConta(ISConta* servico);
    void criar() override;
    void executar(const Codigo& codigo) override;
};

/**
 * @class CntrViagemA
 * @brief Controladora de Apresentação da Viagem.
 */
class CntrViagemA : public IAViagem {
private:
    ISViagem* servicoViagem;

public:
    void setServicoViagem(ISViagem* servico);
    
    void executar(const Codigo& codigo) override;
    void criarViagem(const Codigo& codigoConta);
    void atualizarViagem(const Codigo& codigoConta);
    void atualizarNomeViagem(const Codigo& codigoViagem);  // Adicionado aqui
    void excluirViagem(const Codigo& codigoConta);
    void consultarViagem(const Codigo& codigoConta);

    void definirDestino(const Codigo& codigoViagem);
    void definirHospedagem(const Codigo& codigoViagem);
    void definirAtividade(const Codigo& codigoViagem);
    void definirAvaliacao(const Codigo& codigoViagem, int avaliacao);
};

#endif // CONTROLADORAS_HPP
