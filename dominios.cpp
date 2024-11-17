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

bool is_bissexto(int ano) { 
    if (ano % 4 == 0) {
        if (ano % 100 == 0) {
            return (ano % 400 == 0);
        }
        return true;
    }
    return false;
}

bool mes_dia(int dia, int mes, int ano) {
    // Verifica fevereiro separadamente
    if (mes == 2) {
        return (is_bissexto(ano)) ? dia <= 29 : dia <= 28;
    }
    // Verifica meses com 31 dias
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        return dia <= 31;
    }
    // Verifica meses com 30 dias
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return dia <= 30;
    }
    return false;
}



// Implementação do método setValor na classe base Dominio
bool Dominio::setValor(string valor) {
    if (!validar(valor)) {
        return false;
    }
    this->valor = valor;
    return true;
}


// Classe Avaliacao (0 a 5)
bool Avaliacao::validar(string valor) {
    try {
        int avaliacao = stoi(valor);
        return avaliacao >= 0 && avaliacao <= 5;
    } catch (...) {
        return false;
    }
}


// Classe Codigo (deve ter 6 caracteres alfanuméricos)
bool Codigo::validar(string valor) {
    if (valor.length() != 6) {
        return false;
    } 

    for (size_t i = 0; i < valor.length(); i++) {
        if (!isalnum(valor[i])) {
            return false;
        }
    }
    return true;
}


// Classe Data (formato: DD-MM-AA)
bool Data::validar(string valor) {
    if (valor.length() != 8 || valor[2] != '-' || valor[5] != '-') {
        return false;  
    }

    string diaStr = valor.substr(0, 2);
    string mesStr = valor.substr(3, 2);
    string anoStr = valor.substr(6, 2);

    if (!is_number(diaStr) || !is_number(mesStr) || !is_number(anoStr)) {
        return false;
    }
    int dia = stoi(diaStr), mes = stoi(mesStr), ano = stoi(anoStr);
    return mes_dia(dia, mes, ano);
}


// Classe Dinheiro (deve estar entre 0 e 200000)
bool Dinheiro::validar(string valor) {
    bool hasDecimal = false;

    for (size_t i = 0; i < valor.length(); i++) {
        if (valor[i] == '.') {
            if (hasDecimal) {
                return false;
            }
            hasDecimal = true;
        } else if (!isdigit(valor[i])) {
            return false;
        }
    }

    try {
        float dinheiro = stof(valor);
        return dinheiro >= 0.0 && dinheiro <= 200000.0;
    } catch (...) {
        return false;
    }
}


// Classe Duracao (deve estar entre 0 e 360 minutos)
bool Duracao::validar(string valor) {
    try {
        int duracao = stoi(valor);
        return duracao >= 0 && duracao <= 360;
    } catch (...) {
        return false;
    }
}


// Classe Horario (formato HH:MM)
bool Horario::validar(string valor) {
    if (valor.length() != 5 || valor[2] != ':') {
        return false;
    }

    string horaStr = valor.substr(0, 2);
    string minStr = valor.substr(3, 2);

    if (!is_number(horaStr) || !is_number(minStr)) {
        return false;
    }

    int hora = stoi(horaStr), min = stoi(minStr);
    return hora >= 0 && hora <= 23 && min >= 0 && min <= 59;
}


// Classe Nome (máximo de 30 caracteres, apenas letras e espaços)
bool Nome::validar(string valor) {
    if (valor.length() > 30) {
        return false;
    }

    for (size_t i = 0; i < valor.length(); i++) {
        if (!isalpha(valor[i]) && !isspace(valor[i])) {
            return false;
        }
    }
    return true;
}


// Classe Senha (5 caracteres numéricos, sem duplicatas e sem sequência ascendente/descendente)
bool Senha::validar(string valor) {
    if (valor.length() != 5) {
        return false;
    }

    for (size_t i = 0; i < valor.length(); i++) {
        if (!isdigit(valor[i])) {
            return false;
        }
    }

    if (hasDuplicata(valor) || ordemCrescente(valor) || ordemDecrescente(valor)) {
        return false;
    }

    return true;
}