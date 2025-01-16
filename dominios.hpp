#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

class Dominio {
private:
    string valor;
    virtual void validar(string) = 0;

public:
    void setValor(string);
    string getValor() const;
};

inline string Dominio::getValor() const {
    return valor;
}

class Avaliacao : public Dominio {
private:
    void validar(string) override;

public:
    Avaliacao() = default; // Construtor padrão
    Avaliacao(const string& valor) {
        setValor(valor);
    }
};

class Codigo : public Dominio {
private:
    void validar(string) override;

public:
    Codigo() = default; // Construtor padrão
    Codigo(const string& valor) {
        setValor(valor);
    }
};

class Data : public Dominio {
private:
    void validar(string) override;

public:
    Data() = default; // Construtor padrão
    Data(const string& valor) {
        setValor(valor);
    }
};

class Dinheiro : public Dominio {
private:
    void validar(string) override;

public:
    Dinheiro() = default; // Construtor padrão
    Dinheiro(const string& valor) {
        setValor(valor);
    }
};

class Duracao : public Dominio {
private:
    void validar(string) override;

public:
    Duracao() = default; // Construtor padrão
    Duracao(const string& valor) {
        setValor(valor);
    }
};

class Horario : public Dominio {
private:
    void validar(string) override;

public:
    Horario() = default; // Construtor padrão
    Horario(const string& valor) {
        setValor(valor);
    }
};

class Nome : public Dominio {
private:
    void validar(string) override;

public:
    Nome() = default; // Construtor padrão
    Nome(const string& valor) {
        setValor(valor);
    }
};

class Senha : public Dominio {
private:
    void validar(string) override;

public:
    Senha() = default; // Construtor padrão
    Senha(const string& valor) {
        setValor(valor);
    }
};

#endif // DOMINIOS_HPP_INCLUDED