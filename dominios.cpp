#include "dominios.hpp"


// Funções auxiliares
bool is_number(const string& valor) {
    for (size_t i = 0; i < valor.length(); i++) {
        if (!isdigit(valor[i])) {
            return false;
        }
    }
    return true;
}

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

bool ordemCrescente(const string& valor) {
    for (size_t i = 1; i < valor.length(); i++) {
        if (valor[i] <= valor[i - 1]) {
            return false;
        }
    }
    return true;
}

bool ordemDecrescente(const string& valor) {
    for (size_t i = 1; i < valor.length(); i++) {
        if (valor[i] >= valor[i - 1]) {
            return false;
        }
    }
    return true;
}

// Implementação do método setValor na classe base Dominio
void Dominio::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}


// Classe Avaliacao (0 a 5)
void Avaliacao::validar(string valor) {
    if (valor != "0" && valor != "1" && valor != "2" && valor != "3" && valor != "4" && valor != "5") {
        throw invalid_argument("Valor invalido para Avaliacao.");
    }
}


// Classe Codigo (deve ter 6 caracteres alfanuméricos)
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


// Classe Data (formato: DD-MM-AA)
void Data::validar(string valor) {
    // Verifica o formato básico da data (DD-MM-AA)
    if (valor.length() != 8 || valor[2] != '-' || valor[5] != '-') {
        throw invalid_argument("Formato inválido de data. Use DD-MM-AA.");
    }

    // Divide a string em dia, mês e ano
    string diaStr = valor.substr(0, 2);
    string mesStr = valor.substr(3, 2);
    string anoStr = valor.substr(6, 2);

    // Verifica se dia, mês e ano são números válidos
    if (!is_number(diaStr) || !is_number(mesStr) || !is_number(anoStr)) {
        throw invalid_argument("Dia, mês ou ano contém caracteres inválidos.");
    }

    // Converte strings para inteiros
    int dia = stoi(diaStr);
    int mes = stoi(mesStr);
    int ano = stoi(anoStr);

    // Valida se o dia é válido para o mês e ano
    if (!mes_dia(dia, mes, ano)) {
        throw invalid_argument("Data inválida. Verifique o dia, mês e ano.");
    }
}

bool Data::mes_dia(int dia, int mes, int ano) {
    // Verifica se o mês é válido
    if (mes < 1 || mes > 12) {
        return false;
    }

    // Verifica fevereiro separadamente
    if (mes == 2) {
        bool bissexto = (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
        return dia >= 1 && dia <= (bissexto ? 29 : 28);
    }

    // Verifica meses com 31 dias
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        return dia >= 1 && dia <= 31;
    }

    // Verifica meses com 30 dias
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return dia >= 1 && dia <= 30;
    }

    return false; // Caso algo dê errado
}


// Classe Dinheiro (deve estar entre 0 e 200000)
void Dinheiro::validar(string valor) {
    bool hasDecimal = false; 

    for (size_t i = 0; i < valor.length(); i++) {
        if (valor[i] == '.') {
            if (hasDecimal) {
                throw invalid_argument("Mais de um ponto decimal encontrado.");
            }
            hasDecimal = true;
        } else if (!isdigit(valor[i])) {
            throw invalid_argument("O valor contém caracteres não numéricos.");
        }
    }

    try {
        float dinheiro = stof(valor);
        if (dinheiro < 0.0 || dinheiro > 200000.0) {
            throw invalid_argument("O valor deve estar entre 0,00 e 200.000,00.");
        }
    } catch (const exception &e) {
        throw invalid_argument("Erro ao converter o valor para número.");
    }
}

// Classe Duracao (deve estar entre 0 e 360 minutos)
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


// Classe Horario (formato HH:MM)
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


// Classe Nome (máximo de 30 caracteres, apenas letras e espaços)
void Nome::validar(string valor) {
    if (valor.length() > 30) {
        throw invalid_argument("Nome deve ter no máximo 30 caracteres.");
    }

    for (size_t i = 0; i < valor.length(); i++) {
        if (!isalpha(valor[i]) && !isspace(valor[i])) {
            throw invalid_argument("Nome deve ter apenas letras ou espaços.");
        }
    }
}


// Classe Senha (5 caracteres numéricos, sem duplicatas e sem sequência ascendente/descendente)
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