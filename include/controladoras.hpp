#ifndef CONTROLADORAS_HPP
#define CONTROLADORAS_HPP

#include "interfaces.hpp"
#include <iostream>
using namespace std;

// Controladora de Apresentação da Autenticação
class CntrAutenticacaoA : public IAAutenticacao {
private:
    ISAutenticacao* servicoAutenticacao;

public:
    void setServicoAutenticacao(ISAutenticacao* servico);
    bool autenticar(const Codigo& codigo) override;
};

// Controladora de Apresentação da Conta
class CntrContaA : public IAConta {
private:
    ISConta* servicoConta;

public:
    void setServicoConta(ISConta* servico);
    void criar() override;
    void executar(const Codigo& codigo) override;
};

// Controladora de Apresentação da Viagem
class CntrViagemA : public IAViagem {
private:
    ISViagem* servicoViagem;

public:
    void setServicoViagem(ISViagem* servico);
    void executar(const Codigo& codigo) override;
};

#endif // CONTROLADORAS_HPP