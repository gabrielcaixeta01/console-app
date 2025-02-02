#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

/**
 * @class Dominio
 * @brief Classe base abstrata para representar um domínio.
 *
 * Um domínio é uma classe que encapsula um valor e possui regras de validação específicas.
 */
class Dominio {
private:
    string valor; ///< Valor armazenado no domínio.
    virtual void validar(string) = 0; ///< Método virtual puro para validação do valor.

public:
    virtual ~Dominio() = default; ///< Destrutor virtual padrão.
    
    /**
     * @brief Define o valor do domínio após validação.
     * @param valor Valor a ser atribuído ao domínio.
     */
    void setValor(string);

    /**
     * @brief Obtém o valor armazenado no domínio.
     * @return O valor do domínio.
     */
    string getValor() const;
};

inline string Dominio::getValor() const {
    return valor;
}

/**
 * @class Avaliacao
 * @brief Classe que representa um domínio de avaliação.
 *
 * Herda da classe Dominio e implementa regras de validação específicas para avaliações.
 */
class Avaliacao : public Dominio {
private:
    void validar(string) override; ///< Implementação da validação para avaliação.

public:
    Avaliacao() = default; ///< Construtor padrão.
    ~Avaliacao() override = default; ///< Destrutor padrão.
    
    /**
     * @brief Construtor que inicializa o domínio com um valor.
     * @param valor Valor inicial do domínio.
     */
    Avaliacao(const string& valor) {
        setValor(valor);
    }
};

/**
 * @class Codigo
 * @brief Classe que representa um domínio de código.
 *
 * Herda da classe Dominio e implementa regras de validação específicas para códigos.
 */
class Codigo : public Dominio {
private:
    void validar(string) override; ///< Implementação da validação para código.

public:
    Codigo() = default; ///< Construtor padrão.
    ~Codigo() override = default; ///< Destrutor padrão.
    
    /**
     * @brief Construtor que inicializa o domínio com um valor.
     * @param valor Valor inicial do domínio.
     */
    Codigo(const string& valor) {
        setValor(valor);
    }
};

/**
 * @class Data
 * @brief Classe que representa um domínio de data.
 *
 * Herda da classe Dominio e implementa regras de validação específicas para datas.
 */
class Data : public Dominio {
private:
    void validar(string) override; ///< Implementação da validação para data.
    bool mes_dia(int dia, int mes, int ano); ///< Método auxiliar para validar dia e mês.

public:
    Data() = default; ///< Construtor padrão.
    ~Data() override = default; ///< Destrutor padrão.
    
    /**
     * @brief Construtor que inicializa o domínio com um valor.
     * @param valor Valor inicial do domínio.
     */
    Data(const string& valor) {
        setValor(valor);
    }
};

/**
 * @class Dinheiro
 * @brief Classe que representa um domínio de dinheiro.
 *
 * Herda da classe Dominio e implementa regras de validação específicas para valores monetários.
 */
class Dinheiro : public Dominio {
private:
    void validar(string) override; ///< Implementação da validação para dinheiro.

public:
    Dinheiro() = default; ///< Construtor padrão.
    ~Dinheiro() override = default; ///< Destrutor padrão.
    
    /**
     * @brief Construtor que inicializa o domínio com um valor.
     * @param valor Valor inicial do domínio.
     */
    Dinheiro(const string& valor) {
        setValor(valor);
    }
};

/**
 * @class Duracao
 * @brief Classe que representa um domínio de duração.
 *
 * Herda da classe Dominio e implementa regras de validação específicas para durações.
 */
class Duracao : public Dominio {
private:
    void validar(string) override; ///< Implementação da validação para duração.

public:
    Duracao() = default; ///< Construtor padrão.
    ~Duracao() override = default; ///< Destrutor padrão.
    
    /**
     * @brief Construtor que inicializa o domínio com um valor.
     * @param valor Valor inicial do domínio.
     */
    Duracao(const string& valor) {
        setValor(valor);
    }
};

/**
 * @class Horario
 * @brief Classe que representa um domínio de horário.
 *
 * Herda da classe Dominio e implementa regras de validação específicas para horários.
 */
class Horario : public Dominio {
private:
    void validar(string) override; ///< Implementação da validação para horário.

public:
    Horario() = default; ///< Construtor padrão.
    ~Horario() override = default; ///< Destrutor padrão.
    
    /**
     * @brief Construtor que inicializa o domínio com um valor.
     * @param valor Valor inicial do domínio.
     */
    Horario(const string& valor) {
        setValor(valor);
    }
};

/**
 * @class Nome
 * @brief Classe que representa um domínio de nome.
 *
 * Herda da classe Dominio e implementa regras de validação específicas para nomes.
 */
class Nome : public Dominio {
private:
    void validar(string) override; ///< Implementação da validação para nome.

public:
    Nome() = default; ///< Construtor padrão.
    ~Nome() override = default; ///< Destrutor padrão.
    
    /**
     * @brief Construtor que inicializa o domínio com um valor.
     * @param valor Valor inicial do domínio.
     */
    Nome(const string& valor) {
        setValor(valor);
    }
};

/**
 * @class Senha
 * @brief Classe que representa um domínio de senha.
 *
 * Herda da classe Dominio e implementa regras de validação específicas para senhas.
 */
class Senha : public Dominio {
private:
    void validar(string) override; ///< Implementação da validação para senha.

public:
    Senha() = default; ///< Construtor padrão.
    ~Senha() override = default; ///< Destrutor padrão.
    
    /**
     * @brief Construtor que inicializa o domínio com um valor.
     * @param valor Valor inicial do domínio.
     */
    Senha(const string& valor) {
        setValor(valor);
    }
};

#endif // DOMINIOS_HPP_INCLUDED