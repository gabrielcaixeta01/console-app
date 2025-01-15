#ifndef STUBS_HPP
#define STUBS_HPP

#include "interfaces.hpp"
#include <stdexcept>
#include <iostream>

using namespace std;

class StubServicoConta : public IServicoConta {
    public:
        bool criarConta(const Conta& conta) override {
            return true;
        }

        bool excluirConta(const Codigo& codigo) override {
            return true;
        }

        Conta consultarConta(const Codigo& codigo) override {
            Conta conta;
            conta.setCodigo(codigo);
            return conta;
        }

        bool atualizarConta(const Conta& conta) override {
            return true;
        }
};

class StubServicoAutenticacao : public IServicoAutenticacao {
    public:
        bool autenticar(const Codigo& codigo, const Senha& senha) override {
            return true;
        }
};

class StubServicoViagem : public IServicoViagem {
    public:
        bool criarViagem(const Viagem& viagem) override {
            return true;
        }

        bool excluirViagem(const Codigo& codigo) override {
            return true;
        }

        Viagem consultarViagem(const Codigo& codigo) override {
            Viagem viagem;
            viagem.setCodigo(codigo);
            return viagem;
        }

        bool atualizarViagem(const Viagem& viagem) override {
            return true;
        }
};

class StubServicoDestino : public IServicoDestino {
    public:
        bool adicionarDestino(const Destino& destino) override {
            return true;
        }

        bool removerDestino(const Codigo& codigo) override {
            return true;
        }

        Destino consultarDestino(const Codigo& codigo) override {
            Destino destino;
            destino.setCodigo(codigo);
            return destino;
        }
};

class StubServicoAtividade : public IServicoAtividade {
    public:
        bool adicionarAtividade(const Atividade& atividade) override {
            return true;
        }

        bool removerAtividade(const Nome& nome) override {
            return true;
        }

        Atividade consultarAtividade(const Nome& nome) override {
            Atividade atividade;
            atividade.setNome(nome);
            return atividade;
        }
};

class StubServicoHospedagem : public IServicoHospedagem {
    public:
        bool adicionarHospedagem(const Hospedagem& hospedagem) override {
            return true;
        }

        bool removerHospedagem(const Codigo& codigo) override {
            return true;
        }

        Hospedagem consultarHospedagem(const Codigo& codigo) override {
            Hospedagem hospedagem;
            hospedagem.setCodigo(codigo);
            return hospedagem;
        }
};

#endif // STUBS_HPP
