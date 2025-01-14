#ifndef INTERFACES_HPP
#define INTERFACES_HPP

#include "entidades.hpp"
#include <string>

using namespace std;

// Interface para autenticação
class IAS {
public:
    /**
     * @brief Método para autenticar uma conta.
     * @param conta Objeto do tipo Conta para autenticação.
     * @return true se a autenticação for bem-sucedida, false caso contrário.
     */
    virtual bool autenticar(const Conta& conta) = 0;

    virtual ~IAS() = default;
};

// Interface para gerenciamento de contas
class ICS {
public:
    /**
     * @brief Cria uma nova conta no sistema.
     * @param conta Objeto do tipo Conta a ser criado.
     * @return true se a criação for bem-sucedida, false caso contrário.
     */
    virtual bool criar(const Conta& conta) = 0;

    /**
     * @brief Exclui uma conta do sistema.
     * @param codigo Código único da conta a ser excluída.
     * @return true se a exclusão for bem-sucedida, false caso contrário.
     */
    virtual bool excluir(const string& codigo) = 0;

    /**
     * @brief Lê os dados de uma conta do sistema.
     * @param codigo Código único da conta a ser lida.
     * @return Objeto Conta contendo os dados da conta lida.
     */
    virtual Conta ler(const string& codigo) = 0;

    /**
     * @brief Atualiza os dados de uma conta no sistema.
     * @param conta Objeto do tipo Conta contendo os novos dados.
     * @return true se a atualização for bem-sucedida, false caso contrário.
     */
    virtual bool atualizar(const Conta& conta) = 0;

    virtual ~ICS() = default;
};

// Interface para gerenciamento de viagens
class IVS {
public:
    /**
     * @brief Cadastra uma nova viagem no sistema.
     * @param viagem Objeto do tipo Viagem a ser cadastrado.
     * @return true se o cadastro for bem-sucedido, false caso contrário.
     */
    virtual bool cadastrarViagem(const Viagem& viagem) = 0;

    /**
     * @brief Cadastra uma nova hospedagem no sistema.
     * @param hospedagem Objeto do tipo Hospedagem a ser cadastrado.
     * @return true se o cadastro for bem-sucedido, false caso contrário.
     */
    virtual bool cadastrarHospedagem(const Hospedagem& hospedagem) = 0;

    /**
     * @brief Cadastra um novo destino no sistema.
     * @param destino Objeto do tipo Destino a ser cadastrado.
     * @return true se o cadastro for bem-sucedido, false caso contrário.
     */
    virtual bool cadastrarDestino(const Destino& destino) = 0;

    /**
     * @brief Cadastra uma nova atividade no sistema.
     * @param atividade Objeto do tipo Atividade a ser cadastrado.
     * @return true se o cadastro for bem-sucedido, false caso contrário.
     */
    virtual bool cadastrarAtividade(const Atividade& atividade) = 0;

    virtual ~IVS() = default;
};

class ILNConta {
public:
    virtual void criar(const Conta&) = 0;
    virtual void excluir(const Codigo&) = 0;
    virtual Conta ler(const Codigo&) = 0;
    virtual void atualizar(const Conta&) = 0;
    virtual ~ILNConta() = default;
};

#endif // INTERFACES_HPP