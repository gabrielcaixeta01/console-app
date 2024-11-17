#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <cctype>   // para a função isalnum
#include <string>   // para a funcao length
#include <set>      // para a funcao set
#include <algorithm>
#include <iostream>
#include <iomanip>
using namespace std;

class Dominio {
    private:
        string valor;                        // Armazena o valor do domínio
        virtual bool validar(string) = 0;    // Método abstrato para validação

    public:
        bool setValor(string);               // Atribuir valor
        string getValor() const;             // Recuperar valor
};

// Implementação do método getValor (inline)
inline string Dominio::getValor() const {
    return valor;
}

// Classe Avaliacao (0 a 5)
class Avaliacao : public Dominio {
    private:
        bool validar(string);
};

// Classe Codigo (seis caracteres alfanuméricos)
class Codigo : public Dominio {
    private:
        bool validar(string);
};

// Classe Data (formato: DD-MM-AA)
class Data : public Dominio {
    private:
        bool validar(string);
};

// Classe Dinheiro (0,00 a 200.000,00)
class Dinheiro : public Dominio {
    private:
        bool validar(string);
};

// Classe Duracao (0 a 360 minutos)
class Duracao : public Dominio {
    private:
        bool validar(string);
};

// Classe Horario (formato HH:MM)
class Horario : public Dominio {
    private:
        bool validar(string);
};

// Classe Nome
class Nome : public Dominio {
    private:
        bool validar(string);
};

// Classe Senha
class Senha : public Dominio {
    private:
        bool validar(string);
};

#endif // DOMINIOS_HPP_INCLUDED