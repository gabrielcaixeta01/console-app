#ifndef TESTES_DOMINIO_HPP_INCLUDED
#define TESTES_DOMINIO_HPP_INCLUDED

#include "dominios.hpp"
using namespace std;

class TUAvaliacao {
private:
    static const string VALOR_VALIDO;
    static const string VALOR_INVALIDO;
    Avaliacao *avaliacao;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();

public:
    static const int SUCESSO = 0;
    static const int FALHA = -1;

    int run();
};

class TUCodigo {
private:
    static const string VALOR_VALIDO;
    static const string VALOR_INVALIDO;
    Codigo *codigo;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();

public:
    static const int SUCESSO = 0;
    static const int FALHA = -1;

    int run();
};

class TUData {
private:
    static const string VALOR_VALIDO;
    static const string VALOR_INVALIDO;
    Data *data;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();

public:
    static const int SUCESSO = 0;
    static const int FALHA = -1;

    int run();
};

class TUDinheiro {
private:
    static const string VALOR_VALIDO;
    static const string VALOR_INVALIDO;
    Dinheiro *dinheiro;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();

public:
    static const int SUCESSO = 0;
    static const int FALHA = -1;

    int run();
};

class TUDuracao {
private:
    static const string VALOR_VALIDO;
    static const string VALOR_INVALIDO;
    Duracao *duracao;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();

public:
    static const int SUCESSO = 0;
    static const int FALHA = -1;

    int run();
};

class TUHorario {
private:
    static const string VALOR_VALIDO;
    static const string VALOR_INVALIDO;
    Horario *horario;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();

public:
    static const int SUCESSO = 0;
    static const int FALHA = -1;

    int run();
};

class TUNome {
private:
    static const string VALOR_VALIDO;
    static const string VALOR_INVALIDO;
    Nome *nome;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();

public:
    static const int SUCESSO = 0;
    static const int FALHA = -1;

    int run();
};

class TUSenha {
private:
    static const string VALOR_VALIDO;
    static const string VALOR_INVALIDO;
    Senha *senha;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();

public:
    static const int SUCESSO = 0;
    static const int FALHA = -1;

    int run();
};

#endif // TESTES_DOMINIO_HPP_INCLUDED