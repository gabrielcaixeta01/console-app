#ifndef STUBS_HPP
#define STUBS_HPP

#include "interfaces.hpp"

class StubServicoConta : public IServicoConta {
public:
    bool criarConta(const Conta& conta) override;
    bool excluirConta(const Codigo& codigo) override;
    Conta consultarConta(const Codigo& codigo) override;
    bool atualizarConta(const Conta& conta) override;
};

class StubServicoAutenticacao : public IServicoAutenticacao {
public:
    bool autenticar(const Codigo& codigo, const Senha& senha) override;
};

class StubServicoViagem : public IServicoViagem {
public:
    bool criarViagem(const Viagem& viagem) override;
    bool excluirViagem(const Codigo& codigo) override;
    Viagem consultarViagem(const Codigo& codigo) override;
    bool atualizarViagem(const Viagem& viagem) override;
    void listarViagens();
};

class StubServicoDestino : public IServicoDestino {
public:
    bool adicionarDestino(const Destino& destino) override;
    bool removerDestino(const Codigo& codigo) override;
    Destino consultarDestino(const Codigo& codigo) override;
};

class StubServicoAtividade : public IServicoAtividade {
public:
    bool adicionarAtividade(const Atividade& atividade) override;
    bool removerAtividade(const Nome& nome) override;
};

class StubServicoHospedagem : public IServicoHospedagem {
public:
    bool adicionarHospedagem(const Hospedagem& hospedagem) override;
    bool removerHospedagem(const Codigo& codigo) override;
    Hospedagem consultarHospedagem(const Codigo& codigo) override;
};

#endif // STUBS_HPP