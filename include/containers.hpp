/**
 * @file containers.hpp
 * @brief Declaração das classes container para armazenar entidades do sistema.
 * 
 * Este arquivo contém as definições dos containers responsáveis por armazenar 
 * e gerenciar entidades como Conta, Viagem, Destino, Atividade e Hospedagem.
 */

#ifndef CONTAINERS_HPP
#define CONTAINERS_HPP

#include <list>
#include "entidades.hpp"
using namespace std;

/**
 * @class ContainerConta
 * @brief Container para armazenar e gerenciar contas do sistema.
 */
class ContainerConta {
private:
    list<Conta> container;  ///< Lista para armazenar objetos do tipo Conta.
public:
    /**
     * @brief Adiciona uma nova conta ao container.
     * @param conta Objeto da classe Conta a ser inserido.
     * @return true se a conta foi adicionada com sucesso, false se já existir.
     */
    bool incluir(Conta);

    /**
     * @brief Remove uma conta do container com base no código.
     * @param codigo Código da conta a ser removida.
     * @return true se a conta foi removida, false se não for encontrada.
     */
    bool remover(Codigo);

    /**
     * @brief Pesquisa uma conta no container.
     * @param conta Ponteiro para armazenar a conta encontrada.
     * @return true se a conta foi encontrada, false caso contrário.
     */
    bool pesquisar(Conta*);

    /**
     * @brief Atualiza os dados de uma conta existente.
     * @param conta Objeto atualizado da conta.
     * @return true se a conta foi atualizada, false se não for encontrada.
     */
    bool atualizar(Conta);
};

/**
 * @class ContainerViagem
 * @brief Container para armazenar e gerenciar viagens do sistema.
 */
class ContainerViagem {
private:
    list<Viagem> container;  ///< Lista para armazenar objetos do tipo Viagem.
public:
    /**
     * @brief Adiciona uma nova viagem ao container.
     * @param viagem Objeto da classe Viagem a ser inserido.
     * @return true se a viagem foi adicionada com sucesso, false se já existir.
     */
    bool incluir(Viagem);

    /**
     * @brief Remove uma viagem do container com base no código.
     * @param codigo Código da viagem a ser removida.
     * @return true se a viagem foi removida, false se não for encontrada.
     */
    bool remover(Codigo);

    /**
     * @brief Pesquisa uma viagem no container.
     * @param viagem Ponteiro para armazenar a viagem encontrada.
     * @return true se a viagem foi encontrada, false caso contrário.
     */
    bool pesquisar(Viagem*);

    /**
     * @brief Atualiza os dados de uma viagem existente.
     * @param viagem Objeto atualizado da viagem.
     * @return true se a viagem foi atualizada, false se não for encontrada.
     */
    bool atualizar(Viagem);
};

/**
 * @class ContainerDestino
 * @brief Container para armazenar e gerenciar destinos do sistema.
 */
class ContainerDestino {
private:
    list<Destino> container;  ///< Lista para armazenar objetos do tipo Destino.
public:
    /**
     * @brief Adiciona um novo destino ao container.
     * @param destino Objeto da classe Destino a ser inserido.
     * @return true se o destino foi adicionado com sucesso, false se já existir.
     */
    bool incluir(Destino);

    /**
     * @brief Remove um destino do container com base no código.
     * @param codigo Código do destino a ser removido.
     * @return true se o destino foi removido, false se não for encontrado.
     */
    bool remover(Codigo);

    /**
     * @brief Pesquisa um destino no container.
     * @param destino Ponteiro para armazenar o destino encontrado.
     * @return true se o destino foi encontrado, false caso contrário.
     */
    bool pesquisar(Destino*);

    /**
     * @brief Atualiza os dados de um destino existente.
     * @param destino Objeto atualizado do destino.
     * @return true se o destino foi atualizado, false se não for encontrado.
     */
    bool atualizar(Destino);
};

/**
 * @class ContainerAtividade
 * @brief Container para armazenar e gerenciar atividades do sistema.
 */
class ContainerAtividade {
private:
    list<Atividade> container;  ///< Lista para armazenar objetos do tipo Atividade.
public:
    /**
     * @brief Adiciona uma nova atividade ao container.
     * @param atividade Objeto da classe Atividade a ser inserido.
     * @return true se a atividade foi adicionada com sucesso, false se já existir.
     */
    bool incluir(Atividade);

    /**
     * @brief Remove uma atividade do container com base no nome.
     * @param nome Nome da atividade a ser removida.
     * @return true se a atividade foi removida, false se não for encontrada.
     */
    bool remover(Nome);

    /**
     * @brief Pesquisa uma atividade no container.
     * @param atividade Ponteiro para armazenar a atividade encontrada.
     * @return true se a atividade foi encontrada, false caso contrário.
     */
    bool pesquisar(Atividade*);

    /**
     * @brief Atualiza os dados de uma atividade existente.
     * @param atividade Objeto atualizado da atividade.
     * @return true se a atividade foi atualizada, false se não for encontrada.
     */
    bool atualizar(Atividade);
};

/**
 * @class ContainerHospedagem
 * @brief Container para armazenar e gerenciar hospedagens do sistema.
 */
class ContainerHospedagem {
private:
    list<Hospedagem> container;  ///< Lista para armazenar objetos do tipo Hospedagem.
public:
    /**
     * @brief Adiciona uma nova hospedagem ao container.
     * @param hospedagem Objeto da classe Hospedagem a ser inserido.
     * @return true se a hospedagem foi adicionada com sucesso, false se já existir.
     */
    bool incluir(Hospedagem);

    /**
     * @brief Remove uma hospedagem do container com base no código.
     * @param codigo Código da hospedagem a ser removida.
     * @return true se a hospedagem foi removida, false se não for encontrada.
     */
    bool remover(Codigo);

    /**
     * @brief Pesquisa uma hospedagem no container.
     * @param hospedagem Ponteiro para armazenar a hospedagem encontrada.
     * @return true se a hospedagem foi encontrada, false caso contrário.
     */
    bool pesquisar(Hospedagem*);

    /**
     * @brief Atualiza os dados de uma hospedagem existente.
     * @param hospedagem Objeto atualizado da hospedagem.
     * @return true se a hospedagem foi atualizada, false se não for encontrada.
     */
    bool atualizar(Hospedagem);
};

#endif // CONTAINERS_HPP
