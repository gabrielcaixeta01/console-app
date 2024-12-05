#ifndef TESTES_ENTIDADE_HPP_INCLUDED
#define TESTES_ENTIDADE_HPP_INCLUDED

#include "entidades.hpp"
#include "dominios.hpp"
using namespace std;

// Constantes globais usadas fora das classes
extern const string VALOR_VALIDO_CODIGO;
extern const string VALOR_VALIDO_SENHA;


// Teste conta
class TUConta {
    private:
        Conta* conta;
        int estado;
        static const string VALOR_VALIDO_CODIGO;
        static const string VALOR_VALIDO_SENHA;
        void setUp();
        void tearDown();
        void testarCenarioCodigo();
        void testarCenarioSenha();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

// Teste viagem
class TUViagem {
    private:
        Viagem* viagem;  
        int estado;
        static const string VALOR_VALIDO_CODIGO;
        static const string VALOR_VALIDO_NOME;
        static const string VALOR_VALIDO_AVALIACAO;
        void setUp();
        void tearDown();
        void testarCenarioCodigo();
        void testarCenarioNome();
        void testarCenarioAvaliacao();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

// Teste destino
class TUDestino {
    private:
        Destino* destino;
        int estado;
        static const string VALOR_VALIDO_CODIGO;
        static const string VALOR_VALIDO_NOME;
        static const string VALOR_VALIDO_DATA_INICIO;
        static const string VALOR_VALIDO_DATA_FIM;
        static const string VALOR_VALIDO_AVALIACAO;
        void setUp();
        void tearDown();
        void testarCenarioCodigo();
        void testarCenarioNome();
        void testarCenarioDataInicio();
        void testarCenarioDataFim();
        void testarCenarioAvaliacao();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

// Teste atividade
class TUAtividade {
    private:
        Atividade* atividade;
        int estado;
        static const string VALOR_VALIDO_NOME;
        static const string VALOR_VALIDO_DATA;
        static const string VALOR_VALIDO_HORARIO;
        static const string VALOR_VALIDO_DURACAO;
        static const string VALOR_VALIDO_DINHEIRO;
        static const string VALOR_VALIDO_AVALIACAO;
        void setUp();
        void tearDown();
        void testarCenarioNome();
        void testarCenarioData();
        void testarCenarioHorario();
        void testarCenarioDuracao();
        void testarCenarioDinheiro();
        void testarCenarioAvaliacao();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

// Teste hospedagem
class TUHospedagem {
    private:
        Hospedagem* hospedagem;
        int estado;
        static const string VALOR_VALIDO_CODIGO;
        static const string VALOR_VALIDO_NOME;
        static const string VALOR_VALIDO_DINHEIRO;
        static const string VALOR_VALIDO_AVALIACAO;
        void setUp();
        void tearDown();
        void testarCenarioCodigo();
        void testarCenarioNome();
        void testarCenarioDinheiro();
        void testarCenarioAvaliacao();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

#endif // TESTES_ENTIDADE_HPP_INCLUDED
