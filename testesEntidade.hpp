#ifndef TESTES_ENTIDADE_HPP_INCLUDED
#define TESTES_ENTIDADE_HPP_INCLUDED

#include "entidades.hpp"
#include "dominios.hpp"
using namespace std;

/**
 * @file testesEntidade.hpp
 * @brief Declaração das classes de teste para validar as entidades do sistema.
 * 
 * Este arquivo contém as classes responsáveis por testar as entidades definidas
 * no sistema, incluindo Conta, Viagem, Destino, Atividade e Hospedagem. Os testes
 * verificam os cenários de uso de cada entidade, validando os atributos associados.
 */

/**
 * @brief Constantes globais para valores válidos usados em testes.
 */
extern const string VALOR_VALIDO_CODIGO; /**< Valor válido para código. */
extern const string VALOR_VALIDO_SENHA; /**< Valor válido para senha. */

/**
 * @brief Classe de teste para a entidade Conta.
 * 
 * Valida os comportamentos da entidade Conta, incluindo os cenários
 * de atribuição e validação de código e senha.
 */
class TUConta {
    private:
        Conta* conta; /**< Ponteiro para a entidade Conta. */
        int estado; /**< Estado do teste (SUCESSO ou FALHA). */
        static const string VALOR_VALIDO_CODIGO; /**< Valor válido para código. */
        static const string VALOR_VALIDO_SENHA; /**< Valor válido para senha. */

        /**
         * @brief Configura o ambiente de teste.
         */
        void setUp();

        /**
         * @brief Limpa o ambiente de teste.
         */
        void tearDown();

        /**
         * @brief Testa o cenário com código válido.
         */
        void testarCenarioCodigo();

        /**
         * @brief Testa o cenário com senha válida.
         */
        void testarCenarioSenha();
    
    public:
        const static int SUCESSO = 0; /**< Indicador de sucesso no teste. */
        const static int FALHA = -1; /**< Indicador de falha no teste. */

        /**
         * @brief Executa todos os cenários de teste para a entidade Conta.
         * 
         * @return Estado final do teste (SUCESSO ou FALHA).
         */
        int run();
};

/**
 * @brief Classe de teste para a entidade Viagem.
 * 
 * Valida os comportamentos da entidade Viagem, incluindo os cenários
 * de atribuição e validação de código, nome e avaliação.
 */
class TUViagem {
    private:
        Viagem* viagem; /**< Ponteiro para a entidade Viagem. */
        int estado; /**< Estado do teste (SUCESSO ou FALHA). */
        static const string VALOR_VALIDO_CODIGO; /**< Valor válido para código. */
        static const string VALOR_VALIDO_NOME; /**< Valor válido para nome. */
        static const string VALOR_VALIDO_AVALIACAO; /**< Valor válido para avaliação. */

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

/**
 * @brief Classe de teste para a entidade Destino.
 * 
 * Valida os comportamentos da entidade Destino, incluindo os cenários
 * de atribuição e validação de código, nome, datas e avaliação.
 */
class TUDestino {
    private:
        Destino* destino; /**< Ponteiro para a entidade Destino. */
        int estado; /**< Estado do teste (SUCESSO ou FALHA). */
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

/**
 * @brief Classe de teste para a entidade Atividade.
 * 
 * Valida os comportamentos da entidade Atividade, incluindo os cenários
 * de atribuição e validação de nome, data, horário, duração, preço e avaliação.
 */
class TUAtividade {
    private:
        Atividade* atividade; /**< Ponteiro para a entidade Atividade. */
        int estado; /**< Estado do teste (SUCESSO ou FALHA). */
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

/**
 * @brief Classe de teste para a entidade Hospedagem.
 * 
 * Valida os comportamentos da entidade Hospedagem, incluindo os cenários
 * de atribuição e validação de código, nome, preço da diária e avaliação.
 */
class TUHospedagem {
    private:
        Hospedagem* hospedagem; /**< Ponteiro para a entidade Hospedagem. */
        int estado; /**< Estado do teste (SUCESSO ou FALHA). */
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