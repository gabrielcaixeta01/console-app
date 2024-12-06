#ifndef TESTES_DOMINIO_HPP_INCLUDED
#define TESTES_DOMINIO_HPP_INCLUDED

#include "dominios.hpp"
using namespace std;

/**
 * @file testesDominio.hpp
 * @brief Declaração das classes de teste para validar os domínios do sistema.
 * 
 * Este arquivo contém as classes responsáveis por testar os domínios definidos
 * no sistema, incluindo Avaliação, Código, Data, Dinheiro, Duração, Horário, Nome e Senha.
 * Os testes verificam valores válidos e inválidos para garantir que os domínios
 * sigam as restrições especificadas.
 */

/**
 * @brief Classe de teste para o domínio Avaliação.
 * 
 * Valida o comportamento do domínio Avaliação para valores dentro e fora
 * do intervalo permitido (0 a 5).
 */
class TUAvaliacao {
    private:
        const static string VALOR_VALIDO;    /**< Valor válido para o teste. */
        const static string VALOR_INVALIDO; /**< Valor inválido para o teste. */
        Avaliacao *avaliacao;               /**< Ponteiro para o domínio Avaliação. */
        int estado;                         /**< Estado atual do teste. */

        /**
         * @brief Configura o ambiente de teste.
         */
        void setUp();

        /**
         * @brief Limpa o ambiente de teste.
         */
        void tearDown();

        /**
         * @brief Testa o cenário com valor válido.
         */
        void testarCenarioValorValido();

        /**
         * @brief Testa o cenário com valor inválido.
         */
        void testarCenarioValorInvalido();
    
    public:
        const static int SUCESSO = 0; /**< Indicador de sucesso no teste. */
        const static int FALHA = -1;  /**< Indicador de falha no teste. */

        /**
         * @brief Executa todos os cenários de teste.
         * 
         * @return int Estado final do teste (SUCESSO ou FALHA).
         */
        int run();
};

/**
 * @brief Classe de teste para o domínio Código.
 * 
 * Valida o comportamento do domínio Código, verificando
 * se aceita apenas valores com exatamente 6 caracteres alfanuméricos.
 */
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

/**
 * @brief Classe de teste para o domínio Data.
 * 
 * Valida o comportamento do domínio Data, verificando
 * se aceita apenas datas válidas no formato DD-MM-AA.
 */
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

/**
 * @brief Classe de teste para o domínio Dinheiro.
 * 
 * Valida o comportamento do domínio Dinheiro, verificando
 * se aceita apenas valores no intervalo de 0,00 a 200.000,00.
 */
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

/**
 * @brief Classe de teste para o domínio Duração.
 * 
 * Valida o comportamento do domínio Duração, verificando
 * se aceita apenas valores no intervalo de 0 a 360 minutos.
 */
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

/**
 * @brief Classe de teste para o domínio Horário.
 * 
 * Valida o comportamento do domínio Horário, verificando
 * se aceita apenas valores no formato HH:MM.
 */
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

/**
 * @brief Classe de teste para o domínio Nome.
 * 
 * Valida o comportamento do domínio Nome, verificando
 * se aceita apenas valores que sigam o formato especificado.
 */
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

/**
 * @brief Classe de teste para o domínio Senha.
 * 
 * Valida o comportamento do domínio Senha, verificando
 * se aceita apenas senhas que atendam aos critérios de segurança.
 */
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

#endif // TESTES_DOMINIO_HPP_INCLUDED