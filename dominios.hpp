#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED
#include <string>
using namespace std;

/*
class Dominio {
    private:
        string valor;                 // Armazena o valor do domínio
        bool validar(string);         // Método abstrato

    public:
        bool setValor(string);        // Atribuir valor
        string getValor() const;      // Recuperar valor
};

// Implementação do método getValor (inline)
inline string Dominio::getValor() const {
    return valor;  
}
*/


//Classe Avaliação (0 a 5)
class Avaliacao {
    private:
        int valor;                            
        bool validar(int);                   
        
    public:
        bool setValor(int);                 
        int getValor() const;               
};

inline int Avaliacao::getValor() const {
    return valor;  
};


//Classe Código (seis caracteres alfanumericos)
class Codigo {
    private:
        string valor;
        bool validar(string);

    public:
        bool setValor(string);
        string getValor() const;
};

inline string Codigo::getValor() const {
    return valor;
};


//Classe data (formato: DD-MM-AA)
class Data {
    private:
        string valor;
        bool validar(string);

    public:
        bool setValor(string);
        string getValor() const;   
};

inline string Data::getValor() const {
    return valor;
};


//Classe dinheiro (0,00 a 200.000,00)
class Dinheiro {
    private:
        float valor;
        bool validar(float);
    
    public:
        bool setValor(float);
        float getValor() const;

};

inline float Dinheiro::getValor() const {
    return valor;
};


//Classe duracao (0 a 360)
class Duracao {
    private:
        int valor;
        bool validar(int);

    public:
        bool setValor(int);
        int getValor() const;

};

inline int Duracao::getValor() const {
    return valor;
};


//Classe horario (formato -> HH:MM)
class Horario {
    private:
        string valor;
        bool validar(string);

    public:
        bool setValor(string);
        string getValor() const;
};

inline string Horario::getValor() const {
    return valor;
};


//Classe nome (maximo 30 caracteeres)
class Nome {
    private:
        string valor;
        bool validar(string);

    public:
        bool setValor(string);
        string getValor() const;
};

inline string Nome::getValor() const {
    return valor;
};


//Classe senha (cinco digitos nao duplicados)
class Senha {
    private:
        int valor;
        bool validar(int);

    public:
        bool setValor(int);
        int getValor() const;
};

inline int Senha::getValor() const {
    return valor;
};



#endif // DOMINIOS_HPP_INCLUDED