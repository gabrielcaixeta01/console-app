#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED
#include <string>
using namespace std;

class Dominio {
    private:
        string valor;                 // Armazena o valor do domínio
        bool validar(string);         // Método de validação

    public:
        bool setValor(string);        // Atribuir valor
        string getValor() const;      // Recuperar valor
};

// Implementação do método getValor (inline)
inline string Dominio::getValor() const {
    return valor;   // Apenas retorna o valor armazenado
}

#endif // DOMINIOS_HPP_INCLUDED