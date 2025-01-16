#ifndef INTERFACES_HPP
#define INTERFACES_HPP

#include "entidades.hpp"
#include <iostream>
using namespace std;

// Interfaces de serviços

class IServicoConta {
public:
    virtual ~IServicoConta() = default;

    virtual bool criarConta(const Conta&) = 0;
    virtual bool excluirConta(const Codigo&) = 0;
    virtual Conta consultarConta(const Codigo&) = 0;
    virtual bool atualizarConta(const Conta&) = 0;
};

class IServicoAutenticacao {
public:
    virtual ~IServicoAutenticacao() = default;

    virtual bool autenticar(const Codigo&, const Senha&) = 0;
};

class IServicoViagem {
public:
    virtual ~IServicoViagem() = default;

    virtual bool criarViagem(const Viagem&) = 0;
    virtual bool excluirViagem(const Codigo&) = 0;
    virtual Viagem consultarViagem(const Codigo&) = 0;
    virtual bool atualizarViagem(const Viagem&) = 0;
};

class IServicoDestino {
public:
    virtual ~IServicoDestino() = default;

    virtual bool adicionarDestino(const Destino&) = 0;
    virtual bool removerDestino(const Codigo&) = 0;
    virtual Destino consultarDestino(const Codigo&) = 0;
};

class IServicoAtividade {
public:
    virtual ~IServicoAtividade() = default;

    virtual bool adicionarAtividade(const Atividade&) = 0;
    virtual bool removerAtividade(const Nome&) = 0;
    virtual Atividade consultarAtividade(const Nome&) = 0;
};

class IServicoHospedagem {
public:
    virtual ~IServicoHospedagem() = default;

    virtual bool adicionarHospedagem(const Hospedagem&) = 0;
    virtual bool removerHospedagem(const Codigo&) = 0;
    virtual Hospedagem consultarHospedagem(const Codigo&) = 0;
};

// Interfaces de repositórios

class IRepositorioConta {
public:
    virtual ~IRepositorioConta() = default;

    virtual bool salvarConta(const Conta&) = 0;
    virtual bool removerConta(const Codigo&) = 0;
    virtual Conta buscarConta(const Codigo&) = 0;
};

// Outros repositórios (pode ser expandido conforme necessário)

// Interface lógica de negócios (LN)

class ILNAutenticacao {
public:
    virtual ~ILNAutenticacao() = default;

    virtual bool autenticar(const Codigo&, const Senha&) = 0;
};

// Interface de usuário (IU)

class IUAutenticacao {
public:
    virtual void setServicoAutenticacao(IServicoAutenticacao* servico) = 0;
    virtual bool autenticar(Codigo* codigo) = 0;
    virtual ~IUAutenticacao() = default;
};

// Controladora IU de Autenticação

class CntrIUAutenticacao : public IUAutenticacao {
private:
    IServicoAutenticacao* servicoAutenticacao; // Armazena o serviço de autenticação

public:
    void setServicoAutenticacao(IServicoAutenticacao* servico) override {
        this->servicoAutenticacao = servico;
    }

    bool autenticar(Codigo* codigo) override {
        string valorCodigo, valorSenha;

        cout << "Digite o código da conta: ";
        cin >> valorCodigo;
        cout << "Digite a senha da conta: ";
        cin >> valorSenha;

        try {
            *codigo = Codigo(valorCodigo);
            Senha senha(valorSenha);

            // Chamando o método autenticar no serviço
            return servicoAutenticacao->autenticar(*codigo, senha);
        } catch (const invalid_argument& e) {
            cout << "Erro: " << e.what() << endl;
            return false;
        }
    }
};

// Outras interfaces de IU

class IUConta {
public:
    virtual ~IUConta() = default;
    virtual void gerenciarConta() = 0;
};

class IUViagem {
public:
    virtual ~IUViagem() = default;
    virtual void gerenciarViagem() = 0;
};

class IUDestino {
public:
    virtual ~IUDestino() = default;
    virtual void gerenciarDestino() = 0;
};

class IUAtividade {
public:
    virtual ~IUAtividade() = default;
    virtual void gerenciarAtividade() = 0;
};

class IUHospedagem {
public:
    virtual ~IUHospedagem() = default;
    virtual void gerenciarHospedagem() = 0;
};

#endif // INTERFACES_HPP