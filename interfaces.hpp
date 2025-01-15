#ifndef INTERFACES_HPP
#define INTERFACES_HPP

#include "entidades.hpp"
using namespace std;

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

class IInterfaceUsuario {
public:
    virtual ~IInterfaceUsuario() = default;

    virtual void exibirMensagem(const string& mensagem) = 0;
    virtual string capturarEntrada(const string& mensagem) = 0;
    virtual void exibirMenuPrincipal() = 0;
};

class IValidador {
public:
    virtual ~IValidador() = default;

    virtual bool validarCodigo(const Codigo&) = 0;
    virtual bool validarSenha(const Senha&) = 0;
    virtual bool validarNome(const Nome&) = 0;
    virtual bool validarData(const Data&) = 0;
};

class IRepositorioConta {
public:
    virtual ~IRepositorioConta() = default;

    virtual bool salvarConta(const Conta&) = 0;
    virtual bool removerConta(const Codigo&) = 0;
    virtual Conta buscarConta(const Codigo&) = 0;
};

class IRepositorioViagem {
public:
    virtual ~IRepositorioViagem() = default;

    virtual bool salvarViagem(const Viagem&) = 0;
    virtual bool removerViagem(const Codigo&) = 0;
    virtual Viagem buscarViagem(const Codigo&) = 0;
};

class IRepositorioDestino {
public:
    virtual ~IRepositorioDestino() = default;

    virtual bool salvarDestino(const Destino&) = 0;   // Salva ou atualiza um destino
    virtual bool removerDestino(const Codigo&) = 0;   // Remove um destino pelo código
    virtual Destino buscarDestino(const Codigo&) = 0; // Busca um destino pelo código
};

class IRepositorioAtividade {
public:
    virtual ~IRepositorioAtividade() = default;

    virtual bool salvarAtividade(const Atividade&) = 0;   // Salva ou atualiza uma atividade
    virtual bool removerAtividade(const Nome&) = 0;       // Remove uma atividade pelo nome
    virtual Atividade buscarAtividade(const Nome&) = 0;   // Busca uma atividade pelo nome
};

class IRepositorioHospedagem {
public:
    virtual ~IRepositorioHospedagem() = default;

    virtual bool salvarHospedagem(const Hospedagem&) = 0;   // Salva ou atualiza uma hospedagem
    virtual bool removerHospedagem(const Codigo&) = 0;     // Remove uma hospedagem pelo código
    virtual Hospedagem buscarHospedagem(const Codigo&) = 0; // Busca uma hospedagem pelo código
};

#endif // INTERFACES_HPP
