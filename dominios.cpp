#include "dominios.hpp"
#include <cctype> // para a função isalnum
#include <string> // para a funcao length
#include <set> // para a funcao set

/*
// Método para validar se a matrícula é composta apenas por 9 dígitos
bool Dominio::validar(string valor) {
    // Verificar se o valor tem exatamente 9 caracteres
    if (valor.length() != 9) {
        return false;  // Matrícula inválida por tamanho
    }
    
    // Verificar se todos os caracteres são dígitos
    for (char c : valor) {
        if (!isdigit(c)) {
            return false;  // Matrícula inválida por conter letras ou outros caracteres
        }
    }

    return true;  // Matrícula válida
}

// Método para definir o valor, validando-o previamente
bool Dominio::setValor(string valor) {
    // Verifica se o valor é válido
    if (!validar(valor)) {
        return false;  // Valor inválido, não atribuir
    }
    
    // Se for válido, atribui o valor ao atributo da classe
    this->valor = valor;
    return true;
} 
*/
//Funcoes auxiliares
bool is_number(string valor) {                      //verifica se toda a string é um numero
    for (int i = 0; i < valor.length(); i++) {
        if (!isdigit(valor[i])) {
            return false;
        }
    }
    return true;
}

bool is_bissexto(int ano) {                         //verifica se o ano é bissexto
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
        if (is_bissexto(ano)) {
            return dia <= 29;  
        } else {
            return dia <= 28;  
        }
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

bool hasDuplicata(string valor) {
    set<char> numerosVistos; 

    for (int i = 0; i < 5; i++) {
        if (numerosVistos.find(valor[i]) != numerosVistos.end()) {
            return true;
        }
        numerosVistos.insert(valor[i]);
    }
    return false;
}

bool ordemCrescente(string valor) {
    for (int i = 1; i < 5; i++) {
        if (valor[i] <= valor[i-1]) {
            return false;
        }
    }
    return true;
 }

bool ordemDecrescente(string valor) {
    for (int i; i < 5; i++) {
        if (valor[i] >= valor[i-1]) {
            return false;
        }
    }
    return true;
}




//Validar e setValor: Avaliacao
bool Avaliacao::validar(int valor) {
    // verifcar se o numero esta entre 0 e 5
    if (valor < 0 || valor > 5) {
        return false; 
    }
    return true; 
}

bool Avaliacao::setValor(int valor) {
    // Verifica se o valor é válido
    if (!validar(valor)) {
        return false;  // Valor inválido, não atribuir
    }
    
    // Se for válido, atribui o valor ao atributo da classe
    this->valor = valor;
    return true;
}



//Validar e setValor: Codigo
bool Codigo::validar(string valor) {
    //verificar se tem 6 caracteres
    if (valor.length() == 6) {
        
        //verificar se é letra ou digito
        for (int i = 0; i < 6; i++) {
            if (!isalnum(valor[i])) {
                return false;
            }
        }
        return true;

    } else {
        return false; //nao tem 6 caracteres
    }
}

bool Codigo::setValor(string valor) {
    if (!validar(valor)) {
        return false;
    }

    this-> valor = valor;
    return true;
}



//Validar e setValor: Data
bool Data::validar(string valor) {
    //verifica tamanho
    if (valor.length() != 8) {
        return false;
    }

    //verifica formato (DD-MM-AA)
    if (valor[2] != '-' || valor[5] != '-') {
        return false;
    }

    string diaStr = valor.substr(0, 2);
    string mesStr = valor.substr(3, 2);
    string anoStr = valor.substr(6, 2);

    if (!is_number(diaStr) || !is_number(mesStr) || !is_number(anoStr)) {
        return false;
    } 

    int dia = stoi(diaStr);
    int mes = stoi(mesStr);
    int ano = stoi(anoStr);
    
    //verifica os intervalos
    if (dia < 1 || dia > 31) {
        return false;
    }

    if (mes < 1 || mes > 12) {
        return false;
    }

    if (ano < 0 || ano > 99) {
        return false;
    }

    return mes_dia(dia, mes, ano);
}

bool Data::setValor(string valor) {
    if (!validar(valor)) {
        return false;
    }

    this-> valor = valor;
    return true;
}



//Validar e setValor: Dinheiro
bool Dinheiro::validar(float valor) {
    if (valor < 0.0 || valor > 200000.0) {
        return false;
    }

    return true;
}

bool Dinheiro::setValor(float valor) {
    if (!validar(valor)) {
        return false;
    }

    this-> valor = valor;
    return true;
}


//Validar e setValor: Duracao
bool Duracao::validar(int valor) {
    if (valor < 0 || valor > 360) {
        return false;
    }
    return true;
}

bool Duracao::setValor(int valor) {
    if (!validar(valor)) {
        return false;
    }

    this-> valor = valor;
    return true;
}



//Validar e setValor: Horario
bool Horario::validar(string valor) {
    //verifca tamanho
    if (valor.length() != 5) {
        return false;
    }

    //verifica o formato
    if (valor[2] != ':') {
        return false;
    }

    string horaStr = valor.substr(0, 2);
    string minStr = valor.substr(3, 2);

    //verifica se só tem numeros
    if (!is_number(horaStr) || !is_number(minStr)) {
        return false;
    }

    int hora = stoi(horaStr);
    int min = stoi(minStr);

    //verifica os intevalos
    if (hora < 0 || hora > 23 || min < 0 || min > 59) {
        return false;
    }

    return true;
}

bool Horario::setValor(string valor) {
    if (!validar(valor)) {
        return false;
    }

    this-> valor = valor;
    return true;
}



//Validar e setValor: Nome
bool Nome::validar(string valor) {
    // Verifica se o nome excede o tamanho máximo de 30 caracteres
    if (valor.length() > 30) {
        return false;
    }

    // Verifica se todos os caracteres são válidos (letras ou espaços)
    for (int i = 0; i < valor.length(); i++) {
        if (!isalpha(valor[i]) && !isspace(valor[i])) {
            return false;  
        }
    }

    return true;
}

bool Nome::setValor(string valor) {
    if (!validar(valor)) {
        return false;
    }

    this-> valor = valor;
        return true;
}



//Validar e setValor: Senha
bool Senha::validar(string valor) {
    if (valor.length() != 5){
        return false;
    }

    if (!is_number(valor)) {
        return false;
    }

    if (hasDuplicata(valor)) {
        return false;
    }

    if (ordemCrescente(valor)) {
        return false;
    }

    if (ordemDecrescente(valor)) {
        return false;
    }

    return true;
}

bool Senha::setValor(string valor) {
    if (!validar(valor)) {
        return false;
    }

    this-> valor = valor;
    return true;
}
