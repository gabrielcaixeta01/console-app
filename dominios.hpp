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

class Dominio {
    private:
        string valor;                        
        virtual void validar(string) = 0;    

    public:
        void setValor(string);               
        string getValor() const;             
};

// Implementação do método getValor (inline)
inline string Dominio::getValor() const {
    return valor;
}

// Classe Avaliacao (0 a 5)
class Avaliacao : public Dominio {
    private:
        void validar(string);
};

// Classe Codigo (seis caracteres alfanuméricos)
class Codigo : public Dominio {
    private:
        void validar(string);
};

// Classe Data (formato: DD-MM-AA)
class Data : public Dominio {
    private:
        void validar(string);
        bool mes_dia(int dia, int mes, int ano);
};

// Classe Dinheiro (0,00 a 200.000,00)
class Dinheiro : public Dominio {
    private:
        void validar(string);
};

// Classe Duracao (0 a 360 minutos)
class Duracao : public Dominio {
    private:
        void validar(string);
};

// Classe Horario (formato HH:MM)
class Horario : public Dominio {
    private:
        void validar(string);
};

// Classe Nome
class Nome : public Dominio {
    private:
        void validar(string);
};

// Classe Senha
class Senha : public Dominio {
    private:
        void validar(string);
};

#endif // DOMINIOS_HPP_INCLUDED