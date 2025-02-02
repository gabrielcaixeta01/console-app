/**
 * @file dominios.cpp
 * @brief Implementação das classes e funções para validação de dados.
 * @details Este arquivo contém a implementação das classes de validação de dados, como Avaliacao, Codigo, Data, Dinheiro, Duracao, Horario, Nome e Senha, além de funções auxiliares para validação.
 */

#include "../include/dominios.hpp"
#include <regex>
#include <set>

/**
 * @brief Verifica se uma string contém apenas dígitos numéricos.
 * @param valor String a ser verificada.
 * @return true se a string contiver apenas dígitos, false caso contrário.
 */
bool is_number(const string& valor) {
    for (size_t i = 0; i < valor.length(); i++) {
        if (!isdigit(valor[i])) {
            return false;
        }
    }
    return true;
}

/**
 * @brief Verifica se há caracteres duplicados em uma string.
 * @param valor String a ser verificada.
 * @return true se houver duplicatas, false caso contrário.
 */
bool hasDuplicata(const string& valor) {
    set<char> numerosVistos; 
    for (size_t i = 0; i < valor.length(); i++) {
        if (numerosVistos.find(valor[i]) != numerosVistos.end()) {
            return true;
        }
        numerosVistos.insert(valor[i]);
    }
    return false;
}

/**
 * @brief Verifica se os caracteres de uma string estão em ordem crescente.
 * @param valor String a ser verificada.
 * @return true se os caracteres estiverem em ordem crescente, false caso contrário.
 */
bool ordemCrescente(const string& valor) {
    for (size_t i = 1; i < valor.length(); i++) {
        if (valor[i] <= valor[i - 1]) {
            return false;
        }
    }
    return true;
}

/**
 * @brief Verifica se os caracteres de uma string estão em ordem decrescente.
 * @param valor String a ser verificada.
 * @return true se os caracteres estiverem em ordem decrescente, false caso contrário.
 */
bool ordemDecrescente(const string& valor) {
    for (size_t i = 1; i < valor.length(); i++) {
        if (valor[i] >= valor[i - 1]) {
            return false;
        }
    }
    return true;
}

/**
 * @brief Implementação do método setValor na classe base Dominio.
 * @param valor Valor a ser validado e atribuído.
 * @throws invalid_argument Se a validação falhar.
 */
void Dominio::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}

/**
 * @brief Classe para validação de Avaliação.
 * @details A avaliação deve ser um valor entre 0 e 5.
 */
void Avaliacao::validar(string valor) {
    if (valor != "0" && valor != "1" && valor != "2" && valor != "3" && valor != "4" && valor != "5") {
        throw invalid_argument("Valor invalido para Avaliacao.");
    }
}

/**
 * @brief Classe para validação de Código.
 * @details O código deve ter exatamente 6 caracteres alfanuméricos.
 */
void Codigo::validar(string valor) {
    if (valor.length() != 6) {
        throw invalid_argument("O código deve ter exatamente 6 caracteres.");
    } 

    for (size_t i = 0; i < valor.length(); i++) {
        if (!isalnum(valor[i])) {
            throw invalid_argument("O código deve conter apenas caracteres alfanuméricos.");
        }
    }
}

/**
 * @brief Classe para validação de Data.
 * @details A data deve estar no formato DD-MM-AA e ser válida.
 */
void Data::validar(string valor) {
    if (valor.length() != 8 || valor[2] != '-' || valor[5] != '-') {
        throw invalid_argument("Formato inválido de data. Use DD-MM-AA.");
    }

    string diaStr = valor.substr(0, 2);
    string mesStr = valor.substr(3, 2);
    string anoStr = valor.substr(6, 2);

    if (!is_number(diaStr) || !is_number(mesStr) || !is_number(anoStr)) {
        throw invalid_argument("Dia, mês ou ano contém caracteres inválidos.");
    }

    int dia = stoi(diaStr);
    int mes = stoi(mesStr);
    int ano = stoi(anoStr);

    if (!mes_dia(dia, mes, ano)) {
        throw invalid_argument("Data inválida. Verifique o dia, mês e ano.");
    }
}

/**
 * @brief Verifica se o dia é válido para o mês e ano fornecidos.
 * @param dia Dia a ser verificado.
 * @param mes Mês a ser verificado.
 * @param ano Ano a ser verificado.
 * @return true se o dia for válido, false caso contrário.
 */
bool Data::mes_dia(int dia, int mes, int ano) {
    if (mes < 1 || mes > 12) {
        return false;
    }

    if (mes == 2) {
        bool bissexto = (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
        return dia >= 1 && dia <= (bissexto ? 29 : 28);
    }

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        return dia >= 1 && dia <= 31;
    }

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return dia >= 1 && dia <= 30;
    }

    return false;
}

/**
 * @brief Classe para validação de Dinheiro.
 * @details O valor deve estar no formato X.XXX,XX e entre 0,00 e 200.000,00.
 */
void Dinheiro::validar(string valor) {
    if (valor.length() < 4 || valor[valor.length() - 3] != ',') {
        throw invalid_argument("O valor deve conter a vírgula para separar os centavos.");
    }

    if (valor.length() > 6) {
        size_t posPonto = valor.find('.');
        if (posPonto == string::npos || (valor.length() - posPonto > 6)) {
            throw invalid_argument("O valor deve conter o ponto para separar os milhares.");
        }
    }

    size_t posVirgula = valor.find(',');
    valor[posVirgula] = '.';

    valor.erase(remove(valor.begin(), valor.end(), '.'), valor.end());

    try {
        float dinheiro = stof(valor);
        if (dinheiro < 0.0 || dinheiro > 200000.0) {
            throw invalid_argument("O valor deve estar entre 0,00 e 200.000,00.");
        }
    } catch (const exception &e) {
        throw invalid_argument("Erro ao converter o valor para número.");
    }
}

/**
 * @brief Classe para validação de Duração.
 * @details A duração deve estar entre 0 e 360 minutos.
 */
void Duracao::validar(string valor) {
    for (size_t i = 0; i < valor.length(); i++){
        if (!isdigit(valor[i])) {
            throw invalid_argument("O valor contém caracteres não numéricos.");
        }
    }

    try {
        int duracao = stoi(valor);
        if (duracao < 0 || duracao > 360) {
            throw invalid_argument("Valor fora do intervalo 0 a 360");
        }
    } catch (const exception &e) {
        throw invalid_argument("Erro ao converter o valor para número.");
    }
}

/**
 * @brief Classe para validação de Horário.
 * @details O horário deve estar no formato HH:MM e ser válido.
 */
void Horario::validar(string valor) {
    if (valor.length() != 5 || valor[2] != ':') {
        throw invalid_argument("Valor fora do formato válido (HH:MM)");
    }

    string horaStr = valor.substr(0, 2);
    string minStr = valor.substr(3, 2);

    if (!is_number(horaStr) || !is_number(minStr)) {
        throw invalid_argument("Hora ou minuto não é um numero");
    }

    int hora = stoi(horaStr), min = stoi(minStr);
    if (hora < 0 || hora > 23 || min < 0 || min > 59) {
        throw invalid_argument("Hora ou minuto fora do intervalo válido.");
    }
}

/**
 * @brief Classe para validação de Nome.
 * @details O nome deve ter entre 1 e 30 caracteres e conter apenas letras e espaços.
 */
void Nome::validar(string valor) {
    if (valor.length() > 30 || valor.empty()) {
        throw invalid_argument("Nome deve ter entre 1 e 30 caracteres.");
    }

    regex regexNome("^[A-Za-zÀ-ÿ\\s]+$");
    if (!regex_match(valor, regexNome)) {
        throw invalid_argument("Nome deve conter apenas letras ou espaços.");
    }
}

/**
 * @brief Classe para validação de Senha.
 * @details A senha deve ter exatamente 5 caracteres numéricos, sem duplicatas e sem sequência ascendente/descendente.
 */
void Senha::validar(string valor) {
    if (valor.length() != 5) {
        throw invalid_argument("Senha deve conter exatamente 5 caracteres numéricos");
    }

    for (size_t i = 0; i < valor.length(); i++) {
        if (!isdigit(valor[i])) {
            throw invalid_argument("Algum caractere não é numérico.");
        }
    }

    if (hasDuplicata(valor) || ordemCrescente(valor) || ordemDecrescente(valor)) {
        throw invalid_argument("Senha deve ser sem duplicatas e sem sequência ascendente/descendente");
    }
}