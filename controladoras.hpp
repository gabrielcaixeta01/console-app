#ifndef CONTROLADORAS_HPP
#define CONTROLADORAS_HPP

#include "interfaces.hpp"
#include <iostream>
using namespace std;

class ControladoraConta {
private:
    IServicoConta* servicoConta;
    IServicoAutenticacao* servicoAutenticacao;

public:
    ControladoraConta(IServicoConta* servicoConta, IServicoAutenticacao* servicoAutenticacao);

    void criarConta();
    void autenticarConta();
    void excluirConta();
};

class ControladoraViagem {
private:
    IServicoViagem* servicoViagem;

public:
    ControladoraViagem(IServicoViagem* servicoViagem);

    void criarViagem();
    void excluirViagem();
};

#endif // CONTROLADORAS_HPP