#include "dominios.hpp"
#include <iostream>
using namespace std;

bool Dominio::validar(string valor) {
    //verificar se a matricula tem 9 digitos
    if (valor.length() == 9) {
        for (size_t i = 0; i < valor.length(); i++) {
            char c = valor[i];
            if (!isdigit(c)) {
                return false;           //matricula invalida por letra
            }
        }
        return true;
    }
    return false;               //matricula invalida por tamanho
}

bool Dominio::setValor(string valor) {
    //verifica se o valor é valido
    if (!validar(valor))        
        return false;
    this->valor = valor;        //atribui o valor se for valido
    return true;
    
}