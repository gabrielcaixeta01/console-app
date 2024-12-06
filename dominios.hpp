#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <cctype>   
#include <string>   
#include <set>      
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

/**
 * @file dominios.hpp
 * @brief Declaração das classes que representam os domínios do sistema.
 * 
 * Este arquivo contém as classes base e derivadas que implementam
 * os domínios utilizados no sistema, como Avaliação, Código, Data,
 * Dinheiro, Duração, Horário, Nome e Senha.
 */

/**
 * @brief Classe base para representar domínios genéricos.
 * 
 * A classe abstrata `Dominio` define um comportamento padrão para
 * domínios específicos, que devem implementar o método de validação.
 */
class Dominio {
    private:
        string valor; /**< Valor armazenado no domínio. */

        /**
         * @brief Método abstrato de validação.
         * 
         * Deve ser implementado pelas classes derivadas para validar
         * o valor atribuído ao domínio.
         * 
         * @param valor Valor a ser validado.
         */
        virtual void validar(string) = 0;

    public:
        /**
         * @brief Define o valor do domínio.
         * 
         * Valida e armazena o valor fornecido.
         * 
         * @param valor Valor a ser atribuído ao domínio.
         */
        void setValor(string);

        /**
         * @brief Retorna o valor do domínio.
         * 
         * @return O valor armazenado no domínio.
         */
        string getValor() const;
};

// Implementação do método getValor (inline)
/**
 * @brief Retorna o valor armazenado no domínio.
 * 
 * @return O valor do domínio.
 */
inline string Dominio::getValor() const {
    return valor;
}

/**
 * @brief Representa uma avaliação (nota de 0 a 5).
 * 
 * A classe `Avaliacao` valida e armazena notas de avaliação entre 0 e 5.
 */
class Avaliacao : public Dominio {
    private:
        /**
         * @brief Valida o valor da avaliação.
         * 
         * Verifica se o valor fornecido está entre 0 e 5.
         * 
         * @param valor Valor a ser validado.
         * @throw invalid_argument Se o valor for inválido.
         */
        void validar(string);
};

/**
 * @brief Representa um código de identificação (6 caracteres alfanuméricos).
 * 
 * A classe `Codigo` valida e armazena códigos que seguem o formato alfanumérico
 * de exatamente 6 caracteres.
 */
class Codigo : public Dominio {
    private:
        /**
         * @brief Valida o valor do código.
         * 
         * Verifica se o valor fornecido contém exatamente 6 caracteres
         * alfanuméricos.
         * 
         * @param valor Valor a ser validado.
         * @throw invalid_argument Se o valor não atender ao formato.
         */
        void validar(string);
};

/**
 * @brief Representa uma data no formato DD-MM-AA.
 * 
 * A classe `Data` valida e armazena datas no formato dia-mês-ano.
 */
class Data : public Dominio {
    private:
        /**
         * @brief Valida o valor da data.
         * 
         * Verifica se o valor segue o formato DD-MM-AA e se é uma data válida.
         * 
         * @param valor Valor a ser validado.
         * @throw invalid_argument Se o valor não atender ao formato ou for inválido.
         */
        void validar(string);

        /**
         * @brief Verifica se o dia e mês são válidos para o ano fornecido.
         * 
         * @param dia Dia do mês.
         * @param mes Mês do ano.
         * @param ano Ano da data.
         * @return true Se a data for válida.
         * @return false Se a data for inválida.
         */
        bool mes_dia(int dia, int mes, int ano);
};

/**
 * @brief Representa um valor monetário no intervalo de 0,00 a 200.000,00.
 * 
 * A classe `Dinheiro` valida e armazena valores monetários dentro de um limite
 * estabelecido.
 */
class Dinheiro : public Dominio {
    private:
        /**
         * @brief Valida o valor monetário.
         * 
         * Verifica se o valor está dentro do intervalo permitido (0,00 a 200.000,00).
         * 
         * @param valor Valor a ser validado.
         * @throw invalid_argument Se o valor não atender ao intervalo.
         */
        void validar(string);
};

/**
 * @brief Representa uma duração no intervalo de 0 a 360 minutos.
 * 
 * A classe `Duracao` valida e armazena valores de duração (em minutos).
 */
class Duracao : public Dominio {
    private:
        /**
         * @brief Valida o valor da duração.
         * 
         * Verifica se o valor está dentro do intervalo permitido (0 a 360 minutos).
         * 
         * @param valor Valor a ser validado.
         * @throw invalid_argument Se o valor não atender ao intervalo.
         */
        void validar(string);
};

/**
 * @brief Representa um horário no formato HH:MM.
 * 
 * A classe `Horario` valida e armazena horários seguindo o formato
 * de horas e minutos.
 */
class Horario : public Dominio {
    private:
        /**
         * @brief Valida o valor do horário.
         * 
         * Verifica se o valor segue o formato HH:MM e se é um horário válido.
         * 
         * @param valor Valor a ser validado.
         * @throw invalid_argument Se o valor for inválido.
         */
        void validar(string);
};

/**
 * @brief Representa um nome.
 * 
 * A classe `Nome` valida e armazena um nome, verificando seu formato.
 */
class Nome : public Dominio {
    private:
        /**
         * @brief Valida o valor do nome.
         * 
         * Verifica se o nome segue o formato esperado.
         * 
         * @param valor Valor a ser validado.
         * @throw invalid_argument Se o valor for inválido.
         */
        void validar(string);
};

/**
 * @brief Representa uma senha.
 * 
 * A classe `Senha` valida e armazena uma senha seguindo os critérios estabelecidos.
 */
class Senha : public Dominio {
    private:
        /**
         * @brief Valida o valor da senha.
         * 
         * Verifica se a senha atende aos critérios de segurança definidos.
         * 
         * @param valor Valor a ser validado.
         * @throw invalid_argument Se a senha não atender aos critérios.
         */
        void validar(string);
};

#endif // DOMINIOS_HPP_INCLUDED