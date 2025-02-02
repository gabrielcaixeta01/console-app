#ifndef ENTIDADES_HPP
#define ENTIDADES_HPP

#include "dominios.hpp"
using namespace std;

/**
 * @class Conta
 * @brief Classe que representa uma entidade Conta.
 *
 * Armazena informações de código e senha de uma conta.
 */
class Conta {
private:
    Codigo codigo; ///< Código da conta.
    Senha senha;   ///< Senha da conta.

public:
    Conta() = default; ///< Construtor padrão.

    /**
     * @brief Define o código da conta.
     * @param codigo Código a ser atribuído.
     */
    void setCodigo(const Codigo&);

    /**
     * @brief Obtém o código da conta.
     * @return O código da conta.
     */
    Codigo getCodigo() const;

    /**
     * @brief Define a senha da conta.
     * @param senha Senha a ser atribuída.
     */
    void setSenha(const Senha&);

    /**
     * @brief Obtém a senha da conta.
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
 * @class Viagem
 * @brief Classe que representa uma entidade Viagem.
 *
 * Armazena informações de código, nome e avaliação de uma viagem.
 */
class Viagem {
private:
    Codigo codigo;    ///< Código da viagem.
    Nome nome;        ///< Nome da viagem.
    Avaliacao avaliacao; ///< Avaliação da viagem.

public:
    Viagem() = default; ///< Construtor padrão.

    /**
     * @brief Define o código da viagem.
     * @param codigo Código a ser atribuído.
     */
    void setCodigo(const Codigo&);

    /**
     * @brief Obtém o código da viagem.
     * @return O código da viagem.
     */
    Codigo getCodigo() const;

    /**
     * @brief Define o nome da viagem.
     * @param nome Nome a ser atribuído.
     */
    void setNome(const Nome&);

    /**
     * @brief Obtém o nome da viagem.
     * @return O nome da viagem.
     */
    Nome getNome() const;

    /**
     * @brief Define a avaliação da viagem.
     * @param avaliacao Avaliação a ser atribuída.
     */
    void setAvaliacao(const Avaliacao&);

    /**
     * @brief Obtém a avaliação da viagem.
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
 * @class Destino
 * @brief Classe que representa uma entidade Destino.
 *
 * Armazena informações de código, nome, datas de início e término, e avaliação de um destino.
 */
class Destino {
private:
    Codigo codigo;       ///< Código do destino.
    Nome nome;           ///< Nome do destino.
    Data dataInicio;     ///< Data de início do destino.
    Data dataTermino;    ///< Data de término do destino.
    Avaliacao avaliacao; ///< Avaliação do destino.

public:
    Destino() = default; ///< Construtor padrão.

    /**
     * @brief Define o código do destino.
     * @param codigo Código a ser atribuído.
     */
    void setCodigo(const Codigo&);

    /**
     * @brief Obtém o código do destino.
     * @return O código do destino.
     */
    Codigo getCodigo() const;

    /**
     * @brief Define o nome do destino.
     * @param nome Nome a ser atribuído.
     */
    void setNome(const Nome&);

    /**
     * @brief Obtém o nome do destino.
     * @return O nome do destino.
     */
    Nome getNome() const;

    /**
     * @brief Define a data de início do destino.
     * @param dataInicio Data de início a ser atribuída.
     */
    void setDataInicio(const Data&);

    /**
     * @brief Obtém a data de início do destino.
     * @return A data de início do destino.
     */
    Data getDataInicio() const;

    /**
     * @brief Define a data de término do destino.
     * @param dataTermino Data de término a ser atribuída.
     */
    void setDataTermino(const Data&);

    /**
     * @brief Obtém a data de término do destino.
     * @return A data de término do destino.
     */
    Data getDataTermino() const;

    /**
     * @brief Define a avaliação do destino.
     * @param avaliacao Avaliação a ser atribuída.
     */
    void setAvaliacao(const Avaliacao&);

    /**
     * @brief Obtém a avaliação do destino.
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
 * @class Atividade
 * @brief Classe que representa uma entidade Atividade.
 *
 * Armazena informações de código, nome, data, horário, duração, preço e avaliação de uma atividade.
 */
class Atividade {
private:
    Codigo codigo;     ///< Código da atividade.
    Nome nome;         ///< Nome da atividade.
    Data data;         ///< Data da atividade.
    Horario horario;   ///< Horário da atividade.
    Duracao duracao;   ///< Duração da atividade.
    Dinheiro preco;    ///< Preço da atividade.
    Avaliacao avaliacao; ///< Avaliação da atividade.

public:
    Atividade() = default; ///< Construtor padrão.

    /**
     * @brief Define o código da atividade.
     * @param codigo Código a ser atribuído.
     */
    void setCodigo(const Codigo&);

    /**
     * @brief Obtém o código da atividade.
     * @return O código da atividade.
     */
    Codigo getCodigo() const;

    /**
     * @brief Define o nome da atividade.
     * @param nome Nome a ser atribuído.
     */
    void setNome(const Nome&);

    /**
     * @brief Obtém o nome da atividade.
     * @return O nome da atividade.
     */
    Nome getNome() const;

    /**
     * @brief Define a data da atividade.
     * @param data Data a ser atribuída.
     */
    void setData(const Data&);

    /**
     * @brief Obtém a data da atividade.
     * @return A data da atividade.
     */
    Data getData() const;

    /**
     * @brief Define o horário da atividade.
     * @param horario Horário a ser atribuído.
     */
    void setHorario(const Horario&);

    /**
     * @brief Obtém o horário da atividade.
     * @return O horário da atividade.
     */
    Horario getHorario() const;

    /**
     * @brief Define a duração da atividade.
     * @param duracao Duração a ser atribuída.
     */
    void setDuracao(const Duracao&);

    /**
     * @brief Obtém a duração da atividade.
     * @return A duração da atividade.
     */
    Duracao getDuracao() const;

    /**
     * @brief Define o preço da atividade.
     * @param preco Preço a ser atribuído.
     */
    void setPreco(const Dinheiro&);

    /**
     * @brief Obtém o preço da atividade.
     * @return O preço da atividade.
     */
    Dinheiro getPreco() const;

    /**
     * @brief Define a avaliação da atividade.
     * @param avaliacao Avaliação a ser atribuída.
     */
    void setAvaliacao(const Avaliacao&);

    /**
     * @brief Obtém a avaliação da atividade.
     * @return A avaliação da atividade.
     */
    Avaliacao getAvaliacao() const;
};

// Implementação dos métodos inline

inline void Atividade::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}

inline Codigo Atividade::getCodigo() const {
    return codigo;
}

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
 * @class Hospedagem
 * @brief Classe que representa uma entidade Hospedagem.
 *
 * Armazena informações de código, nome, diária e avaliação de uma hospedagem.
 */
class Hospedagem {
private:
    Codigo codigo;    ///< Código da hospedagem.
    Nome nome;        ///< Nome da hospedagem.
    Dinheiro diaria;  ///< Valor da diária da hospedagem.
    Avaliacao avaliacao; ///< Avaliação da hospedagem.

public:
    Hospedagem() = default; ///< Construtor padrão.

    /**
     * @brief Define o código da hospedagem.
     * @param codigo Código a ser atribuído.
     */
    void setCodigo(const Codigo&);

    /**
     * @brief Obtém o código da hospedagem.
     * @return O código da hospedagem.
     */
    Codigo getCodigo() const;

    /**
     * @brief Define o nome da hospedagem.
     * @param nome Nome a ser atribuído.
     */
    void setNome(const Nome&);

    /**
     * @brief Obtém o nome da hospedagem.
     * @return O nome da hospedagem.
     */
    Nome getNome() const;

    /**
     * @brief Define o valor da diária da hospedagem.
     * @param diaria Valor da diária a ser atribuído.
     */
    void setDiaria(const Dinheiro&);

    /**
     * @brief Obtém o valor da diária da hospedagem.
     * @return O valor da diária da hospedagem.
     */
    Dinheiro getDiaria() const;

    /**
     * @brief Define a avaliação da hospedagem.
     * @param avaliacao Avaliação a ser atribuída.
     */
    void setAvaliacao(const Avaliacao&);

    /**
     * @brief Obtém a avaliação da hospedagem.
     * @return A avaliação da hospedagem.
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