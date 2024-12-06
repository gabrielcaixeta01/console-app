#ifndef ENTIDADES_HPP
#define ENTIDADES_HPP

#include "dominios.hpp"
using namespace std;

/**
 * @file entidades.hpp
 * @brief Declaração das classes que representam os componentes do sistema de viagens.
 * 
 * Este arquivo contém as declarações das classes `Conta`, `Viagem`, `Destino`, 
 * `Atividade` e `Hospedagem`, cada uma representando uma parte específica do sistema.
 */

/**
 * @brief Representa uma conta de usuário no sistema.
 * 
 * A classe Conta armazena informações como o código e a senha, que são utilizadas
 * para autenticação e identificação de um usuário no sistema.
 */
class Conta {
    private:
        Codigo codigo; /**< Código único da conta. */
        Senha senha;   /**< Senha associada à conta. */

    public:
        /**
         * @brief Define o código da conta.
         * @param codigo Código único da conta.
         */
        void setCodigo(const Codigo&);

        /**
         * @brief Retorna o código da conta.
         * @return O código da conta.
         */
        Codigo getCodigo() const;

        /**
         * @brief Define a senha da conta.
         * @param senha Senha a ser atribuída à conta.
         */
        void setSenha(const Senha&);

        /**
         * @brief Retorna a senha da conta.
         * @return A senha da conta.
         */
        Senha getSenha() const;
};

inline void Conta::setSenha(const Senha &senha) {
    this->senha = senha;
}

inline Senha Conta::getSenha() const {
    return senha;
}

inline void Conta::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}

inline Codigo Conta::getCodigo() const {
    return codigo;
}

/**
 * @brief Representa uma viagem no sistema.
 * 
 * A classe Viagem contém informações como código, nome e avaliação,
 * permitindo o gerenciamento de detalhes sobre uma viagem específica.
 */
class Viagem {
    private:
        Codigo codigo;       /**< Código único da viagem. */
        Nome nome;           /**< Nome da viagem. */
        Avaliacao avaliacao; /**< Avaliação da viagem. */

    public:
        /**
         * @brief Define o código da viagem.
         * @param codigo Código único da viagem.
         */
        void setCodigo(const Codigo&);

        /**
         * @brief Retorna o código da viagem.
         * @return O código da viagem.
         */
        Codigo getCodigo() const;

        /**
         * @brief Define o nome da viagem.
         * @param nome Nome da viagem.
         */
        void setNome(const Nome&);

        /**
         * @brief Retorna o nome da viagem.
         * @return O nome da viagem.
         */
        Nome getNome() const;

        /**
         * @brief Define a avaliação da viagem.
         * @param avaliacao Avaliação atribuída à viagem.
         */
        void setAvaliacao(const Avaliacao&);

        /**
         * @brief Retorna a avaliação da viagem.
         * @return A avaliação da viagem.
         */
        Avaliacao getAvaliacao() const;
};

inline void Viagem::setNome(const Nome &nome) {
    this->nome = nome;
}

inline Nome Viagem::getNome() const {
    return nome;
}

inline void Viagem::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}

inline Codigo Viagem::getCodigo() const {
    return codigo;
}

inline void Viagem::setAvaliacao(const Avaliacao &avaliacao) {
    this->avaliacao = avaliacao;
}

inline Avaliacao Viagem::getAvaliacao() const {
    return avaliacao;
}

/**
 * @brief Representa um destino de viagem.
 * 
 * A classe Destino contém informações como código, nome, datas de início e término,
 * além de uma avaliação, permitindo gerenciar os detalhes do destino.
 */
class Destino {
    private:
        Codigo codigo;       /**< Código único do destino. */
        Nome nome;           /**< Nome do destino. */
        Data dataInicio;     /**< Data de início da viagem. */
        Data dataTermino;    /**< Data de término da viagem. */
        Avaliacao avaliacao; /**< Avaliação do destino. */

    public:
        /**
         * @brief Define o código do destino.
         * @param codigo Código único do destino.
         */
        void setCodigo(const Codigo&);

        /**
         * @brief Retorna o código do destino.
         * @return O código do destino.
         */
        Codigo getCodigo() const;

        /**
         * @brief Define o nome do destino.
         * @param nome Nome do destino.
         */
        void setNome(const Nome&);

        /**
         * @brief Retorna o nome do destino.
         * @return O nome do destino.
         */
        Nome getNome() const;

        /**
         * @brief Define a data de início da viagem.
         * @param dataInicio Data de início da viagem.
         */
        void setDataInicio(const Data&);

        /**
         * @brief Retorna a data de início da viagem.
         * @return A data de início da viagem.
         */
        Data getDataInicio() const;

        /**
         * @brief Define a data de término da viagem.
         * @param dataTermino Data de término da viagem.
         */
        void setDataTermino(const Data&);

        /**
         * @brief Retorna a data de término da viagem.
         * @return A data de término da viagem.
         */
        Data getDataTermino() const;

        /**
         * @brief Define a avaliação do destino.
         * @param avaliacao Avaliação do destino.
         */
        void setAvaliacao(const Avaliacao&);

        /**
         * @brief Retorna a avaliação do destino.
         * @return A avaliação do destino.
         */
        Avaliacao getAvaliacao() const;
};

inline void Destino::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}

inline Codigo Destino::getCodigo() const {
    return codigo;
}

inline void Destino::setNome(const Nome &nome) {
    this->nome = nome;
}

inline Nome Destino::getNome() const {
    return nome;
}

inline void Destino::setDataInicio(const Data &dataInicio) {
    this->dataInicio = dataInicio;
}

inline Data Destino::getDataInicio() const {
    return dataInicio;
}

inline void Destino::setDataTermino(const Data &dataTermino) {
    this->dataTermino = dataTermino;
}

inline Data Destino::getDataTermino() const {
    return dataTermino;
}

inline void Destino::setAvaliacao(const Avaliacao &avaliacao) {
    this->avaliacao = avaliacao;
}

inline Avaliacao Destino::getAvaliacao() const {
    return avaliacao;
}

/**
 * @brief Representa uma atividade relacionada à viagem.
 * 
 * A classe Atividade contém informações importantes para gerenciar atividades
 * relacionadas a uma viagem, como nome, data, horário, duração, preço e avaliação.
 */
class Atividade {
    private:
        Nome nome;           /**< Nome da atividade. */
        Data data;           /**< Data da atividade. */
        Horario horario;     /**< Horário da atividade. */
        Duracao duracao;     /**< Duração da atividade. */
        Dinheiro preco;      /**< Preço da atividade. */
        Avaliacao avaliacao; /**< Avaliação da atividade. */

    public:
        /**
         * @brief Define o nome da atividade.
         * 
         * Atualiza o nome da atividade com o valor fornecido.
         * 
         * @param nome Nome a ser atribuído à atividade.
         */
        void setNome(const Nome&);

        /**
         * @brief Retorna o nome da atividade.
         * 
         * Obtém o nome atual da atividade.
         * 
         * @return Nome da atividade.
         */
        Nome getNome() const;

        /**
         * @brief Define a data da atividade.
         * 
         * Atualiza a data em que a atividade ocorrerá.
         * 
         * @param data Data a ser atribuída à atividade.
         */
        void setData(const Data&);

        /**
         * @brief Retorna a data da atividade.
         * 
         * Obtém a data atual atribuída à atividade.
         * 
         * @return Data da atividade.
         */
        Data getData() const;

        /**
         * @brief Define o horário da atividade.
         * 
         * Atualiza o horário em que a atividade ocorrerá.
         * 
         * @param horario Horário a ser atribuído à atividade.
         */
        void setHorario(const Horario&);

        /**
         * @brief Retorna o horário da atividade.
         * 
         * Obtém o horário atual atribuído à atividade.
         * 
         * @return Horário da atividade.
         */
        Horario getHorario() const;

        /**
         * @brief Define a duração da atividade.
         * 
         * Especifica o tempo que a atividade deverá durar.
         * 
         * @param duracao Duração da atividade.
         */
        void setDuracao(const Duracao&);

        /**
         * @brief Retorna a duração da atividade.
         * 
         * Obtém a duração atual atribuída à atividade.
         * 
         * @return Duração da atividade.
         */
        Duracao getDuracao() const;

        /**
         * @brief Define o preço da atividade.
         * 
         * Atualiza o preço da atividade com o valor fornecido.
         * 
         * @param preco Preço a ser atribuído à atividade.
         */
        void setPreco(const Dinheiro&);

        /**
         * @brief Retorna o preço da atividade.
         * 
         * Obtém o valor atual atribuído à atividade.
         * 
         * @return Preço da atividade.
         */
        Dinheiro getPreco() const;

        /**
         * @brief Define a avaliação da atividade.
         * 
         * Atualiza a avaliação da atividade com a nota fornecida.
         * 
         * @param avaliacao Avaliação a ser atribuída à atividade.
         */
        void setAvaliacao(const Avaliacao&);

        /**
         * @brief Retorna a avaliação da atividade.
         * 
         * Obtém a avaliação atual atribuída à atividade.
         * 
         * @return Avaliação da atividade.
         */
        Avaliacao getAvaliacao() const;
};

inline void Atividade::setNome(const Nome &nome) {
    this->nome = nome;
}

inline Nome Atividade::getNome() const {
    return nome;
}

inline void Atividade::setData(const Data &data) {
    this->data = data;
}

inline Data Atividade::getData() const {
    return data;
}

inline void Atividade::setHorario(const Horario &horario) {
    this->horario = horario;
}

inline Horario Atividade::getHorario() const {
    return horario;
}

inline void Atividade::setDuracao(const Duracao &duracao) {
    this->duracao = duracao;
}

inline Duracao Atividade::getDuracao() const {
    return duracao;
}

inline void Atividade::setPreco(const Dinheiro &preco) {
    this->preco = preco;
}

inline Dinheiro Atividade::getPreco() const {
    return preco;
}

inline void Atividade::setAvaliacao(const Avaliacao &avaliacao) {
    this->avaliacao = avaliacao;
}

inline Avaliacao Atividade::getAvaliacao() const {
    return avaliacao;
}

/**
 * @brief Representa uma hospedagem associada à viagem.
 * 
 * A classe Hospedagem contém dados como código, nome, preço
 * da diária e avaliação, usados para gerenciar informações sobre
 * locais de estadia durante a viagem.
 */
class Hospedagem {
    private:
        Codigo codigo;       /**< Código único da hospedagem. */
        Nome nome;           /**< Nome do local de hospedagem. */
        Dinheiro diaria;     /**< Preço da diária. */
        Avaliacao avaliacao; /**< Avaliação da hospedagem. */

    public:
        /**
         * @brief Define o código da hospedagem.
         * 
         * Atualiza o código único da hospedagem.
         * 
         * @param codigo Código a ser atribuído.
         */
        void setCodigo(const Codigo&);

        /**
         * @brief Retorna o código da hospedagem.
         * 
         * Obtém o código atual da hospedagem.
         * 
         * @return Código da hospedagem.
         */
        Codigo getCodigo() const;

        /**
         * @brief Define o nome da hospedagem.
         * 
         * Atualiza o nome do local de hospedagem.
         * 
         * @param nome Nome a ser atribuído.
         */
        void setNome(const Nome&);

        /**
         * @brief Retorna o nome da hospedagem.
         * 
         * Obtém o nome atual do local de hospedagem.
         * 
         * @return Nome da hospedagem.
         */
        Nome getNome() const;

        /**
         * @brief Define o preço da diária.
         * 
         * Atualiza o preço da diária de hospedagem.
         * 
         * @param diaria Valor da diária.
         */
        void setDiaria(const Dinheiro&);

        /**
         * @brief Retorna o preço da diária.
         * 
         * Obtém o preço atual da diária de hospedagem.
         * 
         * @return Valor da diária.
         */
        Dinheiro getDiaria() const;

        /**
         * @brief Define a avaliação da hospedagem.
         * 
         * Atualiza a avaliação do local de hospedagem.
         * 
         * @param avaliacao Nota de avaliação a ser atribuída.
         */
        void setAvaliacao(const Avaliacao&);

        /**
         * @brief Retorna a avaliação da hospedagem.
         * 
         * Obtém a avaliação atual do local de hospedagem.
         * 
         * @return Avaliação da hospedagem.
         */
        Avaliacao getAvaliacao() const;
};

inline void Hospedagem::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}

inline Codigo Hospedagem::getCodigo() const {
    return codigo;
}

inline void Hospedagem::setNome(const Nome &nome) {
    this->nome = nome;
}

inline Nome Hospedagem::getNome() const {
    return nome;
}

inline void Hospedagem::setDiaria(const Dinheiro &diaria) {
    this->diaria = diaria;
}

inline Dinheiro Hospedagem::getDiaria() const {
    return diaria;
}

inline void Hospedagem::setAvaliacao(const Avaliacao &avaliacao) {
    this->avaliacao = avaliacao;
}

inline Avaliacao Hospedagem::getAvaliacao() const {
    return avaliacao;
}

#endif
