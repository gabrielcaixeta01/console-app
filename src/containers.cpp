#include "../include/containers.hpp"
#include <iostream>

using namespace std;

/**
 * @brief Inclui uma conta no container.
 * @param conta Conta a ser incluída.
 * @return true se a inclusão for bem-sucedida, false caso contrário.
 */
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

/**
 * @brief Remove uma conta do container com base no código.
 * @param matricula Código da conta a ser removida.
 * @return true se a remoção for bem-sucedida, false caso contrário.
 */
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

/**
 * @brief Inclui uma viagem no container.
 * @param viagem Viagem a ser incluída.
 * @return true se a inclusão for bem-sucedida, false caso contrário.
 */
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

/**
 * @brief Inclui um destino no container.
 * @param destino Destino a ser incluído.
 * @return true se a inclusão for bem-sucedida, false caso contrário.
 */
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

/**
 * @brief Inclui uma atividade no container.
 * @param atividade Atividade a ser incluída.
 * @return true se a inclusão for bem-sucedida, false caso contrário.
 */
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

/**
 * @brief Inclui uma hospedagem no container.
 * @param hospedagem Hospedagem a ser incluída.
 * @return true se a inclusão for bem-sucedida, false caso contrário.
 */
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

/**
 * @brief Remove uma hospedagem do container com base no código.
 * @param matricula Código da hospedagem a ser removida.
 * @return true se a remoção for bem-sucedida, false caso contrário.
 */
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

/**
 * @brief Pesquisa uma hospedagem no container com base no código.
 * @param hospedagem Ponteiro para armazenar os dados da hospedagem encontrada.
 * @return true se a hospedagem for encontrada, false caso contrário.
 */
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

/**
 * @brief Atualiza uma hospedagem no container.
 * @param hospedagem Hospedagem com os novos dados.
 * @return true se a atualização for bem-sucedida, false caso contrário.
 */
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