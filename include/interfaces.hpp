#ifndef INTERFACES_HPP
#define INTERFACES_HPP

#include "entidades.hpp"
#include <iostream>
using namespace std;

// Interfaces de Apresentação

/**
 * @class IAAutenticacao
 * @brief Interface de Apresentação para Autenticação.
 *
 * Define a interface para operações de autenticação na camada de apresentação.
 */
class IAAutenticacao {
public:
    virtual ~IAAutenticacao() = default; ///< Destrutor virtual padrão.

    /**
     * @brief Autentica um usuário com base no código fornecido.
     * @param codigo Código do usuário a ser autenticado.
     * @return true se a autenticação for bem-sucedida, false caso contrário.
     */
    virtual bool autenticar(const Codigo&) = 0;
};

/**
 * @class IAConta
 * @brief Interface de Apresentação para Conta.
 *
 * Define a interface para operações de conta na camada de apresentação.
 */
class IAConta {
public:
    virtual ~IAConta() = default; ///< Destrutor virtual padrão.

    /**
     * @brief Cria uma nova conta.
     */
    virtual void criar() = 0;

    /**
     * @brief Executa operações relacionadas à conta com base no código fornecido.
     * @param codigo Código da conta a ser manipulada.
     */
    virtual void executar(const Codigo&) = 0;
};

/**
 * @class IAViagem
 * @brief Interface de Apresentação para Viagem.
 *
 * Define a interface para operações de viagem na camada de apresentação.
 */
class IAViagem {
public:
    virtual ~IAViagem() = default; ///< Destrutor virtual padrão.

    /**
     * @brief Executa operações relacionadas à viagem com base no código fornecido.
     * @param codigo Código da viagem a ser manipulada.
     */
    virtual void executar(const Codigo&) = 0;
};

/**
 * @class IADestino
 * @brief Interface de Apresentação para Destino.
 *
 * Define a interface para operações de destino na camada de apresentação.
 */
class IADestino {
public:
    virtual ~IADestino() = default; ///< Destrutor virtual padrão.

    /**
     * @brief Executa operações relacionadas ao destino com base no código fornecido.
     * @param codigo Código do destino a ser manipulado.
     */
    virtual void executar(const Codigo&) = 0;
};

/**
 * @class IAAtividade
 * @brief Interface de Apresentação para Atividade.
 *
 * Define a interface para operações de atividade na camada de apresentação.
 */
class IAAtividade {
public:
    virtual ~IAAtividade() = default; ///< Destrutor virtual padrão.

    /**
     * @brief Executa operações relacionadas à atividade com base no código fornecido.
     * @param codigo Código da atividade a ser manipulada.
     */
    virtual void executar(const Codigo&) = 0;
};

/**
 * @class IAHospedagem
 * @brief Interface de Apresentação para Hospedagem.
 *
 * Define a interface para operações de hospedagem na camada de apresentação.
 */
class IAHospedagem {
public:
    virtual ~IAHospedagem() = default; ///< Destrutor virtual padrão.

    /**
     * @brief Executa operações relacionadas à hospedagem com base no código fornecido.
     * @param codigo Código da hospedagem a ser manipulada.
     */
    virtual void executar(const Codigo&) = 0;
};

// Interfaces de Serviço

/**
 * @class ISAutenticacao
 * @brief Interface de Serviço para Autenticação.
 *
 * Define a interface para operações de autenticação na camada de serviço.
 */
class ISAutenticacao {
public:
    virtual ~ISAutenticacao() = default; ///< Destrutor virtual padrão.

    /**
     * @brief Autentica uma conta.
     * @param conta Conta a ser autenticada.
     * @return true se a autenticação for bem-sucedida, false caso contrário.
     */
    virtual bool autenticar(const Conta&) = 0;
};

/**
 * @class ISConta
 * @brief Interface de Serviço para Conta.
 *
 * Define a interface para operações de conta na camada de serviço.
 */
class ISConta {
public:
    virtual ~ISConta() = default; ///< Destrutor virtual padrão.

    /**
     * @brief Cria uma nova conta.
     * @param conta Conta a ser criada.
     * @return true se a criação for bem-sucedida, false caso contrário.
     */
    virtual bool criar(const Conta&) = 0;

    /**
     * @brief Exclui uma conta existente.
     * @param codigo Código da conta a ser excluída.
     * @return true se a exclusão for bem-sucedida, false caso contrário.
     */
    virtual bool excluir(const Codigo&) = 0;

    /**
     * @brief Atualiza uma conta existente.
     * @param conta Conta com os novos dados.
     * @return true se a atualização for bem-sucedida, false caso contrário.
     */
    virtual bool atualizar(const Conta&) = 0;

    /**
     * @brief Lê os dados de uma conta.
     * @param codigo Código da conta a ser lida.
     * @param conta Ponteiro para armazenar os dados da conta.
     * @return true se a leitura for bem-sucedida, false caso contrário.
     */
    virtual bool ler(const Codigo&, Conta*) = 0;
};

/**
 * @class ISViagem
 * @brief Interface de Serviço para Viagem.
 *
 * Define a interface para operações de viagem na camada de serviço.
 */
class ISViagem {
public:
    virtual ~ISViagem() = default; ///< Destrutor virtual padrão.

    /**
     * @brief Cria uma nova viagem.
     * @param viagem Viagem a ser criada.
     * @return true se a criação for bem-sucedida, false caso contrário.
     */
    virtual bool criar(const Viagem&) = 0;

    /**
     * @brief Exclui uma viagem existente.
     * @param codigo Código da viagem a ser excluída.
     * @return true se a exclusão for bem-sucedida, false caso contrário.
     */
    virtual bool excluir(const Codigo&) = 0;

    /**
     * @brief Atualiza uma viagem existente.
     * @param viagem Viagem com os novos dados.
     * @return true se a atualização for bem-sucedida, false caso contrário.
     */
    virtual bool atualizar(const Viagem&) = 0;

    /**
     * @brief Lê os dados de uma viagem.
     * @param codigo Código da viagem a ser lida.
     * @param viagem Ponteiro para armazenar os dados da viagem.
     * @return true se a leitura for bem-sucedida, false caso contrário.
     */
    virtual bool ler(const Codigo&, Viagem*) = 0;
};

/**
 * @class ISDestino
 * @brief Interface de Serviço para Destino.
 *
 * Define a interface para operações de destino na camada de serviço.
 */
class ISDestino {
public:
    virtual ~ISDestino() = default; ///< Destrutor virtual padrão.

    /**
     * @brief Cria um novo destino.
     * @param destino Destino a ser criado.
     * @return true se a criação for bem-sucedida, false caso contrário.
     */
    virtual bool criar(const Destino&) = 0;

    /**
     * @brief Exclui um destino existente.
     * @param codigo Código do destino a ser excluído.
     * @return true se a exclusão for bem-sucedida, false caso contrário.
     */
    virtual bool excluir(const Codigo&) = 0;

    /**
     * @brief Atualiza um destino existente.
     * @param destino Destino com os novos dados.
     * @return true se a atualização for bem-sucedida, false caso contrário.
     */
    virtual bool atualizar(const Destino&) = 0;

    /**
     * @brief Lê os dados de um destino.
     * @param codigo Código do destino a ser lido.
     * @param destino Ponteiro para armazenar os dados do destino.
     * @return true se a leitura for bem-sucedida, false caso contrário.
     */
    virtual bool ler(const Codigo&, Destino*) = 0;
};

/**
 * @class ISAtividade
 * @brief Interface de Serviço para Atividade.
 *
 * Define a interface para operações de atividade na camada de serviço.
 */
class ISAtividade {
public:
    virtual ~ISAtividade() = default; ///< Destrutor virtual padrão.

    /**
     * @brief Cria uma nova atividade.
     * @param atividade Atividade a ser criada.
     * @return true se a criação for bem-sucedida, false caso contrário.
     */
    virtual bool criar(const Atividade&) = 0;

    /**
     * @brief Exclui uma atividade existente.
     * @param nome Nome da atividade a ser excluída.
     * @return true se a exclusão for bem-sucedida, false caso contrário.
     */
    virtual bool excluir(const Nome&) = 0;

    /**
     * @brief Atualiza uma atividade existente.
     * @param atividade Atividade com os novos dados.
     * @return true se a atualização for bem-sucedida, false caso contrário.
     */
    virtual bool atualizar(const Atividade&) = 0;

    /**
     * @brief Lê os dados de uma atividade.
     * @param nome Nome da atividade a ser lida.
     * @param atividade Ponteiro para armazenar os dados da atividade.
     * @return true se a leitura for bem-sucedida, false caso contrário.
     */
    virtual bool ler(const Nome&, Atividade*) = 0;
};

/**
 * @class ISHospedagem
 * @brief Interface de Serviço para Hospedagem.
 *
 * Define a interface para operações de hospedagem na camada de serviço.
 */
class ISHospedagem {
public:
    virtual ~ISHospedagem() = default; ///< Destrutor virtual padrão.

    /**
     * @brief Cria uma nova hospedagem.
     * @param hospedagem Hospedagem a ser criada.
     * @return true se a criação for bem-sucedida, false caso contrário.
     */
    virtual bool criar(const Hospedagem&) = 0;

    /**
     * @brief Exclui uma hospedagem existente.
     * @param codigo Código da hospedagem a ser excluída.
     * @return true se a exclusão for bem-sucedida, false caso contrário.
     */
    virtual bool excluir(const Codigo&) = 0;

    /**
     * @brief Atualiza uma hospedagem existente.
     * @param hospedagem Hospedagem com os novos dados.
     * @return true se a atualização for bem-sucedida, false caso contrário.
     */
    virtual bool atualizar(const Hospedagem&) = 0;

    /**
     * @brief Lê os dados de uma hospedagem.
     * @param codigo Código da hospedagem a ser lida.
     * @param hospedagem Ponteiro para armazenar os dados da hospedagem.
     * @return true se a leitura for bem-sucedida, false caso contrário.
     */
    virtual bool ler(const Codigo&, Hospedagem*) = 0;
};

class ISViagem {
public:
    virtual ~ISViagem() = default; ///< Destrutor virtual padrão.

    /**
     * @brief Cria uma nova viagem.
     * @param viagem Viagem a ser criada.
     * @return true se a criação for bem-sucedida, false caso contrário.
     */
    virtual bool criar(const Viagem&) = 0;

    /**
     * @brief Exclui uma viagem existente.
     * @param codigo Código da viagem a ser excluída.
     * @return true se a exclusão for bem-sucedida, false caso contrário.
     */
    virtual bool excluir(const Codigo&) = 0;

    /**
     * @brief Atualiza uma viagem existente.
     * @param viagem Viagem com os novos dados.
     * @return true se a atualização for bem-sucedida, false caso contrário.
     */
    virtual bool atualizar(const Viagem&) = 0;

    /**
     * @brief Lê os dados de uma viagem.
     * @param codigo Código da viagem a ser lida.
     * @param viagem Ponteiro para armazenar os dados da viagem.
     * @return true se a leitura for bem-sucedida, false caso contrário.
     */
    virtual bool ler(const Codigo&, Viagem*) = 0;

    /**
     * @brief Define o destino de uma viagem.
     * @param codigoViagem Código da viagem.
     * @param destino Objeto contendo os dados do destino.
     * @return true se a operação for bem-sucedida, false caso contrário.
     */
    virtual bool definirDestino(const Codigo&, const Destino&) = 0;

    /**
     * @brief Define a hospedagem de uma viagem.
     * @param codigoViagem Código da viagem.
     * @param hospedagem Objeto contendo os dados da hospedagem.
     * @return true se a operação for bem-sucedida, false caso contrário.
     */
    virtual bool definirHospedagem(const Codigo&, const Hospedagem&) = 0;

    /**
     * @brief Adiciona uma atividade a uma viagem.
     * @param codigoViagem Código da viagem.
     * @param atividade Objeto contendo os dados da atividade.
     * @return true se a operação for bem-sucedida, false caso contrário.
     */
    virtual bool definirAtividade(const Codigo&, const Atividade&) = 0;
};

#endif // INTERFACES_HPP