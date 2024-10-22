#include "dominios.hpp"
#include <cctype> // para a função isalnum
#include <string> // para a funcao length

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













//Validar e setValor: Dinheiro
bool Dinheiro::validar(float valor) {
    if (valor < 0.0 || valor > 200.0) {
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












//Validar e setValor: Nome
bool Nome::validar(string valor) {
    if (valor.length() > 30) {
        return false;
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