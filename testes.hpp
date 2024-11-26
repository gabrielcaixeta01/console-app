#ifndef TESTES_HPP_INCLUDED
#define TESTES_HPP_INCLUDED

#include <stdexcept>
#include "dominios.hpp"
using namespace std;

// Teste para Avaliacao
class TUAvaliacao {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;
        Avaliacao *avaliacao;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioValorValido();
        void testarCenarioValorInvalido();
    
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

// Teste para Codigo
class TUCodigo {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;
        Codigo *codigo;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioValorValido();
        void testarCenarioValorInvalido();
    
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

// Teste para Data
class TUData {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;
        Data *data;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioValorValido();
        void testarCenarioValorInvalido();
    
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

// Teste para Dinheiro
class TUDinheiro {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;
        Dinheiro *dinheiro;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioValorValido();
        void testarCenarioValorInvalido();
    
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

// Teste para Duracao
class TUDuracao {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;
        Duracao *duracao;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioValorValido();
        void testarCenarioValorInvalido();
    
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

// Teste para Horario
class TUHorario {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;
        Horario *horario;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioValorValido();
        void testarCenarioValorInvalido();
    
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

// Teste para Nome
class TUNome {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;
        Nome *nome;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioValorValido();
        void testarCenarioValorInvalido();
    
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

// Teste para Senha
class TUSenha {
    private:
        const static string VALOR_VALIDO;
        const static string VALOR_INVALIDO;
        Senha *senha;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioValorValido();
        void testarCenarioValorInvalido();
    
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

#endif // TESTES_HPP_INCLUDED