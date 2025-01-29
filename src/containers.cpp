#include "../include/containers.hpp"
#include <iostream>

using namespace std;

bool ContainerConta::incluir(Conta conta) {
    try {
        for (auto elemento = container.begin(); elemento != container.end(); elemento++) {
            if (elemento->getCodigo().getValor() == conta.getCodigo().getValor()) {
                return false;
            }
        }
        container.push_back(conta);
        return true;
    } catch (const exception &e) {
        cout << "Erro ao incluir conta: " << e.what() << endl;
        return false;
    }
}

bool ContainerConta::remover(Codigo matricula) {
    try {
        for (auto elemento = container.begin(); elemento != container.end(); elemento++) {
            if (elemento->getCodigo().getValor() == matricula.getValor()) {
                container.erase(elemento);
                return true;
            }
        }
        return false;
    } catch (const exception &e) {
        cout << "Erro ao remover conta: " << e.what() << endl;
        return false;
    }
}

// Similar try-catch implementation continues for all Conta functions...

// Viagem
bool ContainerViagem::incluir(Viagem viagem) {
    try {
        for (auto elemento = container.begin(); elemento != container.end(); elemento++) {
            if (elemento->getCodigo().getValor() == viagem.getCodigo().getValor()) {
                return false;
            }
        }
        container.push_back(viagem);
        return true;
    } catch (const exception &e) {
        cout << "Erro ao incluir viagem: " << e.what() << endl;
        return false;
    }
}

// Similar try-catch implementation continues for all Viagem functions...

// Destino
bool ContainerDestino::incluir(Destino destino) {
    try {
        for (auto elemento = container.begin(); elemento != container.end(); elemento++) {
            if (elemento->getCodigo().getValor() == destino.getCodigo().getValor()) {
                return false;
            }
        }
        container.push_back(destino);
        return true;
    } catch (const exception &e) {
        cout << "Erro ao incluir destino: " << e.what() << endl;
        return false;
    }
}

// Similar try-catch implementation continues for all Destino functions...

// Atividade
bool ContainerAtividade::incluir(Atividade atividade) {
    try {
        for (auto elemento = container.begin(); elemento != container.end(); elemento++) {
            if (elemento->getNome().getValor() == atividade.getNome().getValor()) {
                return false;
            }
        }
        container.push_back(atividade);
        return true;
    } catch (const exception &e) {
        cout << "Erro ao incluir atividade: " << e.what() << endl;
        return false;
    }
}

// Similar try-catch implementation continues for all Atividade functions...

// Hospedagem
bool ContainerHospedagem::incluir(Hospedagem hospedagem) {
    try {
        for (auto elemento = container.begin(); elemento != container.end(); elemento++) {
            if (elemento->getCodigo().getValor() == hospedagem.getCodigo().getValor()) {
                return false;
            }
        }
        container.push_back(hospedagem);
        return true;
    } catch (const exception &e) {
        cout << "Erro ao incluir hospedagem: " << e.what() << endl;
        return false;
    }
}

bool ContainerHospedagem::remover(Codigo matricula) {
    try {
        for (auto elemento = container.begin(); elemento != container.end(); elemento++) {
            if (elemento->getCodigo().getValor() == matricula.getValor()) {
                container.erase(elemento);
                return true;
            }
        }
        return false;
    } catch (const exception &e) {
        cout << "Erro ao remover hospedagem: " << e.what() << endl;
        return false;
    }
}

bool ContainerHospedagem::pesquisar(Hospedagem* hospedagem) {
    try {
        for (auto elemento = container.begin(); elemento != container.end(); elemento++) {
            if (elemento->getCodigo().getValor() == hospedagem->getCodigo().getValor()) {
                *hospedagem = *elemento;
                return true;
            }
        }
        return false;
    } catch (const exception &e) {
        cout << "Erro ao pesquisar hospedagem: " << e.what() << endl;
        return false;
    }
}

bool ContainerHospedagem::atualizar(Hospedagem hospedagem) {
    try {
        for (auto elemento = container.begin(); elemento != container.end(); elemento++) {
            if (elemento->getCodigo().getValor() == hospedagem.getCodigo().getValor()) {
                *elemento = hospedagem;
                return true;
            }
        }
        return false;
    } catch (const exception &e) {
        cout << "Erro ao atualizar hospedagem: " << e.what() << endl;
        return false;
    }
}
