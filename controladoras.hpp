#ifndef CONTROLADORAS_HPP
#define CONTROLADORAS_HPP

#include "interfaces.hpp" // Inclui as interfaces.

using namespace std;

class CntrIUAutenticacao {
private:
    IAS* cntrLNAutenticacao; // Referência para o serviço de autenticação.

public:
    void setCntrLNAutenticacao(IAS* cntrLNAutenticacao);
    bool autenticar(const Conta&);
};

class CntrIUConta {
private:
    ICS* cntrLNConta; // Referência para o serviço de contas.

public:
    void setCntrLNConta(ICS* cntrLNConta);
    bool criarConta(const Conta&);
    bool excluirConta(const string&);
    Conta lerConta(const string&);
    bool atualizarConta(const Conta&);
};

class CntrIUViagem {
private:
    IVS* cntrLNViagem; // Referência para o serviço de viagens.

public:
    void setCntrLNViagem(IVS* cntrLNViagem);
    bool cadastrarViagem(const Viagem&);
    bool cadastrarHospedagem(const Hospedagem&);
    bool cadastrarDestino(const Destino&);
    bool cadastrarAtividade(const Atividade&);
};

#endif // CONTROLADORAS_HPP