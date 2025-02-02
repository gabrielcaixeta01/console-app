#ifndef ENTIDADES_HPP
#define ENTIDADES_HPP

#include "dominios.hpp"
using namespace std;

/**
 * @class Conta
 * @brief Representa uma conta de usuário.
 */
class Conta {
private:
    Codigo codigo;
    Senha senha;

public:
    Conta() = default;

    void setCodigo(const Codigo&);
    Codigo getCodigo() const;

    void setSenha(const Senha&);
    Senha getSenha() const;
};

// Implementação dos métodos inline de Conta
inline void Conta::setCodigo(const Codigo &codigo) { this->codigo = codigo; }
inline Codigo Conta::getCodigo() const { return codigo; }

inline void Conta::setSenha(const Senha &senha) { this->senha = senha; }
inline Senha Conta::getSenha() const { return senha; }

/**
 * @class Atividade
 * @brief Representa uma atividade em uma viagem.
 */
class Atividade {
private:
    Codigo codigo;
    Nome nome;
    Data data;
    Horario horario;
    Duracao duracao;
    Dinheiro preco;
    Avaliacao avaliacao;

public:
    Atividade() = default;

    void setCodigo(const Codigo&);
    Codigo getCodigo() const;

    void setNome(const Nome&);
    Nome getNome() const;

    void setData(const Data&);
    Data getData() const;

    void setHorario(const Horario&);
    Horario getHorario() const;

    void setDuracao(const Duracao&);
    Duracao getDuracao() const;

    void setPreco(const Dinheiro&);
    Dinheiro getPreco() const;

    void setAvaliacao(const Avaliacao&);
    Avaliacao getAvaliacao() const;
};

// Implementação dos métodos inline de Atividade
inline void Atividade::setCodigo(const Codigo &codigo) { this->codigo = codigo; }
inline Codigo Atividade::getCodigo() const { return codigo; }

inline void Atividade::setNome(const Nome &nome) { this->nome = nome; }
inline Nome Atividade::getNome() const { return nome; }

inline void Atividade::setData(const Data &data) { this->data = data; }
inline Data Atividade::getData() const { return data; }

inline void Atividade::setHorario(const Horario &horario) { this->horario = horario; }
inline Horario Atividade::getHorario() const { return horario; }

inline void Atividade::setDuracao(const Duracao &duracao) { this->duracao = duracao; }
inline Duracao Atividade::getDuracao() const { return duracao; }

inline void Atividade::setPreco(const Dinheiro &preco) { this->preco = preco; }
inline Dinheiro Atividade::getPreco() const { return preco; }

inline void Atividade::setAvaliacao(const Avaliacao &avaliacao) { this->avaliacao = avaliacao; }
inline Avaliacao Atividade::getAvaliacao() const { return avaliacao; }

/**
 * @class Destino
 * @brief Representa um destino de viagem.
 */
class Destino {
private:
    Codigo codigo;
    Nome nome;
    Data dataInicio;
    Data dataTermino;
    Avaliacao avaliacao;

public:
    Destino() = default;

    void setCodigo(const Codigo&);
    Codigo getCodigo() const;

    void setNome(const Nome&);
    Nome getNome() const;

    void setDataInicio(const Data&);
    Data getDataInicio() const;

    void setDataTermino(const Data&);
    Data getDataTermino() const;

    void setAvaliacao(const Avaliacao&);
    Avaliacao getAvaliacao() const;
};

// Implementação dos métodos inline de Destino
inline void Destino::setCodigo(const Codigo &codigo) { this->codigo = codigo; }
inline Codigo Destino::getCodigo() const { return codigo; }

inline void Destino::setNome(const Nome &nome) { this->nome = nome; }
inline Nome Destino::getNome() const { return nome; }

inline void Destino::setDataInicio(const Data &dataInicio) { this->dataInicio = dataInicio; }
inline Data Destino::getDataInicio() const { return dataInicio; }

inline void Destino::setDataTermino(const Data &dataTermino) { this->dataTermino = dataTermino; }
inline Data Destino::getDataTermino() const { return dataTermino; }

inline void Destino::setAvaliacao(const Avaliacao &avaliacao) { this->avaliacao = avaliacao; }
inline Avaliacao Destino::getAvaliacao() const { return avaliacao; }

/**
 * @class Hospedagem
 * @brief Representa uma hospedagem dentro de uma viagem.
 */
class Hospedagem {
private:
    Codigo codigo;
    Nome nome;
    Dinheiro diaria;
    Avaliacao avaliacao;

public:
    Hospedagem() = default;

    void setCodigo(const Codigo&);
    Codigo getCodigo() const;

    void setNome(const Nome&);
    Nome getNome() const;

    void setDiaria(const Dinheiro&);
    Dinheiro getDiaria() const;

    void setAvaliacao(const Avaliacao&);
    Avaliacao getAvaliacao() const;
};

// Implementação dos métodos inline de Hospedagem
inline void Hospedagem::setCodigo(const Codigo &codigo) { this->codigo = codigo; }
inline Codigo Hospedagem::getCodigo() const { return codigo; }

inline void Hospedagem::setNome(const Nome &nome) { this->nome = nome; }
inline Nome Hospedagem::getNome() const { return nome; }

inline void Hospedagem::setDiaria(const Dinheiro &diaria) { this->diaria = diaria; }
inline Dinheiro Hospedagem::getDiaria() const { return diaria; }

inline void Hospedagem::setAvaliacao(const Avaliacao &avaliacao) { this->avaliacao = avaliacao; }
inline Avaliacao Hospedagem::getAvaliacao() const { return avaliacao; }

/**
 * @class Viagem
 * @brief Representa uma viagem com destino, hospedagem e atividade.
 */
class Viagem {
private:
    Codigo codigo;
    Nome nome;
    Avaliacao avaliacao;
    Destino destino;
    Hospedagem hospedagem;
    Atividade atividade;

public:
    Viagem() = default;

    void setCodigo(const Codigo&);
    Codigo getCodigo() const;

    void setNome(const Nome&);
    Nome getNome() const;

    void setAvaliacao(const Avaliacao&);
    Avaliacao getAvaliacao() const;

    void setDestino(const Destino&);
    Destino getDestino() const;

    void setHospedagem(const Hospedagem&);
    Hospedagem getHospedagem() const;

    void setAtividade(const Atividade&);
    Atividade getAtividade() const;
};

// Implementação dos métodos inline de Viagem
inline void Viagem::setCodigo(const Codigo &codigo) { this->codigo = codigo; }
inline Codigo Viagem::getCodigo() const { return codigo; }

inline void Viagem::setNome(const Nome &nome) { this->nome = nome; }
inline Nome Viagem::getNome() const { return nome; }

inline void Viagem::setAvaliacao(const Avaliacao &avaliacao) { this->avaliacao = avaliacao; }
inline Avaliacao Viagem::getAvaliacao() const { return avaliacao; }

inline void Viagem::setDestino(const Destino &destino) { this->destino = destino; }
inline Destino Viagem::getDestino() const { return destino; }

inline void Viagem::setHospedagem(const Hospedagem &hospedagem) { this->hospedagem = hospedagem; }
inline Hospedagem Viagem::getHospedagem() const { return hospedagem; }

inline void Viagem::setAtividade(const Atividade &atividade) { this->atividade = atividade; }
inline Atividade Viagem::getAtividade() const { return atividade; }

#endif // ENTIDADES_HPP