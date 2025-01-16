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
    virtual ~Dominio() = default; // Adicionado destrutor virtual
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
    Avaliacao() = default;
    ~Avaliacao() override = default; // Adicionado destrutor virtual explícito
    Avaliacao(const string& valor) {
        setValor(valor);
    }
};

class Codigo : public Dominio {
private:
    void validar(string) override;

public:
    Codigo() = default;
    ~Codigo() override = default; // Adicionado destrutor virtual explícito
    Codigo(const string& valor) {
        setValor(valor);
    }
};

class Data : public Dominio {
private:
    void validar(string) override;
    bool mes_dia(int dia, int mes, int ano); // Declaração adicionada

public:
    Data() = default;
    ~Data() override = default; // Adicionado destrutor virtual explícito
    Data(const string& valor) {
        setValor(valor);
    }
};

class Dinheiro : public Dominio {
private:
    void validar(string) override;

public:
    Dinheiro() = default;
    ~Dinheiro() override = default; // Adicionado destrutor virtual explícito
    Dinheiro(const string& valor) {
        setValor(valor);
    }
};

class Duracao : public Dominio {
private:
    void validar(string) override;

public:
    Duracao() = default;
    ~Duracao() override = default; // Adicionado destrutor virtual explícito
    Duracao(const string& valor) {
        setValor(valor);
    }
};

class Horario : public Dominio {
private:
    void validar(string) override;

public:
    Horario() = default;
    ~Horario() override = default; // Adicionado destrutor virtual explícito
    Horario(const string& valor) {
        setValor(valor);
    }
};

class Nome : public Dominio {
private:
    void validar(string) override;

public:
    Nome() = default;
    ~Nome() override = default; // Adicionado destrutor virtual explícito
    Nome(const string& valor) {
        setValor(valor);
    }
};

class Senha : public Dominio {
private:
    void validar(string) override;

public:
    Senha() = default;
    ~Senha() override = default; // Adicionado destrutor virtual explícito
    Senha(const string& valor) {
        setValor(valor);
    }
};

#endif // DOMINIOS_HPP_INCLUDED