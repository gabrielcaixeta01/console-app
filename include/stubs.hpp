#ifndef STUBS_HPP
#define STUBS_HPP

#include "interfaces.hpp"
#include <unordered_map>

class StubServicoConta;  

/**
 * @class StubServicoAutenticacao
 * @brief Stub para o Serviço de Autenticação.
 *
 * Implementa a interface ISAutenticacao para simular o comportamento do serviço de autenticação.
 */
class StubServicoAutenticacao : public ISAutenticacao {
private:
    StubServicoConta* servicoConta = nullptr; ///< Ponteiro para o stub do serviço de conta.

public:
    /**
     * @brief Define o stub do serviço de conta a ser utilizado.
     * @param servico Ponteiro para o stub do serviço de conta.
     */
    void setServicoConta(StubServicoConta* servico);  

    /**
     * @brief Simula a autenticação de uma conta.
     * @param conta Conta a ser autenticada.
     * @return true se a autenticação for bem-sucedida, false caso contrário.
     */
    bool autenticar(const Conta& conta) override;
};

/**
 * @class StubServicoConta
 * @brief Stub para o Serviço de Contas.
 *
 * Implementa a interface ISConta para simular o comportamento do serviço de contas.
 */
class StubServicoConta : public ISConta {
private:
    unordered_map<string, Conta> contas; ///< Mapa para armazenar contas simuladas.

public:
    /**
     * @brief Simula a criação de uma nova conta.
     * @param conta Conta a ser criada.
     * @return true se a criação for bem-sucedida, false caso contrário.
     */
    bool criar(const Conta& conta) override;

    /**
     * @brief Simula a exclusão de uma conta existente.
     * @param codigo Código da conta a ser excluída.
     * @return true se a exclusão for bem-sucedida, false caso contrário.
     */
    bool excluir(const Codigo& codigo) override;

    /**
     * @brief Simula a atualização de uma conta existente.
     * @param conta Conta com os novos dados.
     * @return true se a atualização for bem-sucedida, false caso contrário.
     */
    bool atualizar(const Conta& conta) override;

    /**
     * @brief Simula a leitura dos dados de uma conta.
     * @param codigo Código da conta a ser lida.
     * @param conta Ponteiro para armazenar os dados da conta.
     * @return true se a leitura for bem-sucedida, false caso contrário.
     */
    bool ler(const Codigo& codigo, Conta* conta) override;

    /**
     * @brief Obtém o mapa de contas simuladas.
     * @return Mapa de contas.
     */
    const unordered_map<string, Conta>& getContas() const { return contas; }
};

/**
 * @class StubServicoViagem
 * @brief Stub para o Serviço de Viagens.
 *
 * Implementa a interface ISViagem para simular o comportamento do serviço de viagens.
 */
class StubServicoViagem : public ISViagem {
private:
    unordered_map<string, Viagem> viagens; ///< Mapa para armazenar viagens simuladas.

public:
    /**
     * @brief Simula a criação de uma nova viagem.
     * @param viagem Viagem a ser criada.
     * @return true se a criação for bem-sucedida, false caso contrário.
     */
    bool criar(const Viagem& viagem) override;

    /**
     * @brief Simula a exclusão de uma viagem existente.
     * @param codigo Código da viagem a ser excluída.
     * @return true se a exclusão for bem-sucedida, false caso contrário.
     */
    bool excluir(const Codigo& codigo) override;

    /**
     * @brief Simula a atualização de uma viagem existente.
     * @param viagem Viagem com os novos dados.
     * @return true se a atualização for bem-sucedida, false caso contrário.
     */
    bool atualizar(const Viagem& viagem) override;

    /**
     * @brief Simula a leitura dos dados de uma viagem.
     * @param codigo Código da viagem a ser lida.
     * @param viagem Ponteiro para armazenar os dados da viagem.
     * @return true se a leitura for bem-sucedida, false caso contrário.
     */
    bool ler(const Codigo& codigo, Viagem* viagem) override;

    /**
     * @brief Obtém o mapa de viagens simuladas.
     * @return Mapa de viagens.
     */
    const unordered_map<string, Viagem>& getViagens() const { return viagens; }
};

/**
 * @class StubServicoDestino
 * @brief Stub para o Serviço de Destinos.
 *
 * Implementa a interface ISDestino para simular o comportamento do serviço de destinos.
 */
class StubServicoDestino : public ISDestino {
private:
    unordered_map<string, Destino> destinos; ///< Mapa para armazenar destinos simulados.

public:
    /**
     * @brief Simula a criação de um novo destino.
     * @param destino Destino a ser criado.
     * @return true se a criação for bem-sucedida, false caso contrário.
     */
    bool criar(const Destino& destino) override;

    /**
     * @brief Simula a exclusão de um destino existente.
     * @param codigo Código do destino a ser excluído.
     * @return true se a exclusão for bem-sucedida, false caso contrário.
     */
    bool excluir(const Codigo& codigo) override;

    /**
     * @brief Simula a atualização de um destino existente.
     * @param destino Destino com os novos dados.
     * @return true se a atualização for bem-sucedida, false caso contrário.
     */
    bool atualizar(const Destino& destino) override;

    /**
     * @brief Simula a leitura dos dados de um destino.
     * @param codigo Código do destino a ser lido.
     * @param destino Ponteiro para armazenar os dados do destino.
     * @return true se a leitura for bem-sucedida, false caso contrário.
     */
    bool ler(const Codigo& codigo, Destino* destino) override;
};

/**
 * @class StubServicoAtividade
 * @brief Stub para o Serviço de Atividades.
 *
 * Implementa a interface ISAtividade para simular o comportamento do serviço de atividades.
 */
class StubServicoAtividade : public ISAtividade {
private:
    unordered_map<string, Atividade> atividades; ///< Mapa para armazenar atividades simuladas.

public:
    /**
     * @brief Simula a criação de uma nova atividade.
     * @param atividade Atividade a ser criada.
     * @return true se a criação for bem-sucedida, false caso contrário.
     */
    bool criar(const Atividade& atividade) override;

    /**
     * @brief Simula a exclusão de uma atividade existente.
     * @param nome Nome da atividade a ser excluída.
     * @return true se a exclusão for bem-sucedida, false caso contrário.
     */
    bool excluir(const Nome& nome) override;

    /**
     * @brief Simula a atualização de uma atividade existente.
     * @param atividade Atividade com os novos dados.
     * @return true se a atualização for bem-sucedida, false caso contrário.
     */
    bool atualizar(const Atividade& atividade) override;

    /**
     * @brief Simula a leitura dos dados de uma atividade.
     * @param nome Nome da atividade a ser lida.
     * @param atividade Ponteiro para armazenar os dados da atividade.
     * @return true se a leitura for bem-sucedida, false caso contrário.
     */
    bool ler(const Nome& nome, Atividade* atividade) override;
};

/**
 * @class StubServicoHospedagem
 * @brief Stub para o Serviço de Hospedagens.
 *
 * Implementa a interface ISHospedagem para simular o comportamento do serviço de hospedagens.
 */
class StubServicoHospedagem : public ISHospedagem {
private:
    unordered_map<string, Hospedagem> hospedagens; ///< Mapa para armazenar hospedagens simuladas.

public:
    /**
     * @brief Simula a criação de uma nova hospedagem.
     * @param hospedagem Hospedagem a ser criada.
     * @return true se a criação for bem-sucedida, false caso contrário.
     */
    bool criar(const Hospedagem& hospedagem) override;

    /**
     * @brief Simula a exclusão de uma hospedagem existente.
     * @param codigo Código da hospedagem a ser excluída.
     * @return true se a exclusão for bem-sucedida, false caso contrário.
     */
    bool excluir(const Codigo& codigo) override;

    /**
     * @brief Simula a atualização de uma hospedagem existente.
     * @param hospedagem Hospedagem com os novos dados.
     * @return true se a atualização for bem-sucedida, false caso contrário.
     */
    bool atualizar(const Hospedagem& hospedagem) override;

    /**
     * @brief Simula a leitura dos dados de uma hospedagem.
     * @param codigo Código da hospedagem a ser lida.
     * @param hospedagem Ponteiro para armazenar os dados da hospedagem.
     * @return true se a leitura for bem-sucedida, false caso contrário.
     */
    bool ler(const Codigo& codigo, Hospedagem* hospedagem) override;
};

#endif // STUBS_HPP