/**
 * @file containers.hpp
 * @brief Implementação dos containers para Conta, Viagem, Destino, Atividade e Hospedagem.
 */

#include "containers.hpp"

/**
 * @class ContainerConta
 * @brief Container para gerenciamento de objetos do tipo Conta.
 */

/**
 * @brief Inclui uma Conta no container.
 * @param conta A Conta a ser incluída.
 * @return true se a inclusão foi bem-sucedida, false se uma Conta com o mesmo código já existe.
 */
bool ContainerConta::incluir(Conta conta) {
    for (const auto &c : container) {
        if (c.getCodigo().getValor() == conta.getCodigo().getValor()) {
            return false;
        }
    }
    container.push_back(conta);
    return true;
}

/**
 * @brief Remove uma Conta do container com base no código.
 * @param codigo O código da Conta a ser removida.
 * @return true se a remoção foi bem-sucedida, false se a Conta não foi encontrada.
 */
bool ContainerConta::remover(Codigo codigo) {
    for (auto it = container.begin(); it != container.end(); ++it) {
        if (it->getCodigo().getValor() == codigo.getValor()) {
            container.erase(it);
            return true;
        }
    }
    return false;
}

/**
 * @brief Pesquisa uma Conta no container com base no código.
 * @param conta Um ponteiro para a Conta que receberá os dados encontrados.
 * @return true se a Conta foi encontrada, false caso contrário.
 */
bool ContainerConta::pesquisar(Conta *conta) {
    for (auto &c : container) {
        if (c.getCodigo().getValor() == conta->getCodigo().getValor()) {
            *conta = c;
            return true;
        }
    }
    return false;
}

/**
 * @brief Atualiza uma Conta no container.
 * @param conta A Conta com os novos dados.
 * @return true se a atualização foi bem-sucedida, false se a Conta não foi encontrada.
 */
bool ContainerConta::atualizar(Conta conta) {
    for (auto &c : container) {
        if (c.getCodigo().getValor() == conta.getCodigo().getValor()) {
            c = conta;
            return true;
        }
    }
    return false;
}

/**
 * @class ContainerViagem
 * @brief Container para gerenciamento de objetos do tipo Viagem.
 */

/**
 * @brief Inclui uma Viagem no container.
 * @param viagem A Viagem a ser incluída.
 * @return true se a inclusão foi bem-sucedida, false se uma Viagem com o mesmo código já existe.
 */
bool ContainerViagem::incluir(Viagem viagem) {
    for (const auto &v : container) {
        if (v.getCodigo().getValor() == viagem.getCodigo().getValor()) {
            return false;
        }
    }
    container.push_back(viagem);
    return true;
}

/**
 * @brief Remove uma Viagem do container com base no código.
 * @param codigo O código da Viagem a ser removida.
 * @return true se a remoção foi bem-sucedida, false se a Viagem não foi encontrada.
 */
bool ContainerViagem::remover(Codigo codigo) {
    for (auto it = container.begin(); it != container.end(); ++it) {
        if (it->getCodigo().getValor() == codigo.getValor()) {
            container.erase(it);
            return true;
        }
    }
    return false;
}

/**
 * @brief Pesquisa uma Viagem no container com base no código.
 * @param viagem Um ponteiro para a Viagem que receberá os dados encontrados.
 * @return true se a Viagem foi encontrada, false caso contrário.
 */
bool ContainerViagem::pesquisar(Viagem *viagem) {
    for (auto &v : container) {
        if (v.getCodigo().getValor() == viagem->getCodigo().getValor()) {
            *viagem = v;
            return true;
        }
    }
    return false;
}

/**
 * @brief Atualiza uma Viagem no container.
 * @param viagem A Viagem com os novos dados.
 * @return true se a atualização foi bem-sucedida, false se a Viagem não foi encontrada.
 */
bool ContainerViagem::atualizar(Viagem viagem) {
    for (auto &v : container) {
        if (v.getCodigo().getValor() == viagem.getCodigo().getValor()) {
            v = viagem;
            return true;
        }
    }
    return false;
}

/**
 * @class ContainerDestino
 * @brief Container para gerenciamento de objetos do tipo Destino.
 */

/**
 * @brief Inclui um Destino no container.
 * @param destino O Destino a ser incluído.
 * @return true se a inclusão foi bem-sucedida, false se um Destino com o mesmo código já existe.
 */
bool ContainerDestino::incluir(Destino destino) {
    for (const auto &d : container) {
        if (d.getCodigo().getValor() == destino.getCodigo().getValor()) {
            return false;
        }
    }
    container.push_back(destino);
    return true;
}

/**
 * @brief Remove um Destino do container com base no código.
 * @param codigo O código do Destino a ser removido.
 * @return true se a remoção foi bem-sucedida, false se o Destino não foi encontrado.
 */
bool ContainerDestino::remover(Codigo codigo) {
    for (auto it = container.begin(); it != container.end(); ++it) {
        if (it->getCodigo().getValor() == codigo.getValor()) {
            container.erase(it);
            return true;
        }
    }
    return false;
}

/**
 * @brief Pesquisa um Destino no container com base no código.
 * @param destino Um ponteiro para o Destino que receberá os dados encontrados.
 * @return true se o Destino foi encontrado, false caso contrário.
 */
bool ContainerDestino::pesquisar(Destino *destino) {
    for (auto &d : container) {
        if (d.getCodigo().getValor() == destino->getCodigo().getValor()) {
            *destino = d;
            return true;
        }
    }
    return false;
}

/**
 * @brief Atualiza um Destino no container.
 * @param destino O Destino com os novos dados.
 * @return true se a atualização foi bem-sucedida, false se o Destino não foi encontrado.
 */
bool ContainerDestino::atualizar(Destino destino) {
    for (auto &d : container) {
        if (d.getCodigo().getValor() == destino.getCodigo().getValor()) {
            d = destino;
            return true;
        }
    }
    return false;
}

/**
 * @class ContainerAtividade
 * @brief Container para gerenciamento de objetos do tipo Atividade.
 */

/**
 * @brief Inclui uma Atividade no container.
 * @param atividade A Atividade a ser incluída.
 * @return true se a inclusão foi bem-sucedida, false se uma Atividade com o mesmo código já existe.
 */
bool ContainerAtividade::incluir(Atividade atividade) {
    for (const auto &a : container) {
        if (a.getCodigo().getValor() == atividade.getCodigo().getValor()) {
            return false;
        }
    }
    container.push_back(atividade);
    return true;
}

/**
 * @brief Remove uma Atividade do container com base no nome.
 * @param nome O nome da Atividade a ser removida.
 * @return true se a remoção foi bem-sucedida, false se a Atividade não foi encontrada.
 */
bool ContainerAtividade::remover(Nome nome) {
    for (auto it = container.begin(); it != container.end(); ++it) {
        if (it->getNome().getValor() == nome.getValor()) {
            container.erase(it);
            return true;
        }
    }
    return false;
}

/**
 * @brief Pesquisa uma Atividade no container com base no código.
 * @param atividade Um ponteiro para a Atividade que receberá os dados encontrados.
 * @return true se a Atividade foi encontrada, false caso contrário.
 */
bool ContainerAtividade::pesquisar(Atividade *atividade) {
    for (auto &a : container) {
        if (a.getCodigo().getValor() == atividade->getCodigo().getValor()) {
            *atividade = a;
            return true;
        }
    }
    return false;
}

/**
 * @brief Atualiza uma Atividade no container.
 * @param atividade A Atividade com os novos dados.
 * @return true se a atualização foi bem-sucedida, false se a Atividade não foi encontrada.
 */
bool ContainerAtividade::atualizar(Atividade atividade) {
    for (auto &a : container) {
        if (a.getCodigo().getValor() == atividade.getCodigo().getValor()) {
            a = atividade;
            return true;
        }
    }
    return false;
}

/**
 * @class ContainerHospedagem
 * @brief Container para gerenciamento de objetos do tipo Hospedagem.
 */

/**
 * @brief Inclui uma Hospedagem no container.
 * @param hospedagem A Hospedagem a ser incluída.
 * @return true se a inclusão foi bem-sucedida, false se uma Hospedagem com o mesmo código já existe.
 */
bool ContainerHospedagem::incluir(Hospedagem hospedagem) {
    for (const auto &h : container) {
        if (h.getCodigo().getValor() == hospedagem.getCodigo().getValor()) {
            return false;
        }
    }
    container.push_back(hospedagem);
    return true;
}

/**
 * @brief Remove uma Hospedagem do container com base no código.
 * @param codigo O código da Hospedagem a ser removida.
 * @return true se a remoção foi bem-sucedida, false se a Hospedagem não foi encontrada.
 */
bool ContainerHospedagem::remover(Codigo codigo) {
    for (auto it = container.begin(); it != container.end(); ++it) {
        if (it->getCodigo().getValor() == codigo.getValor()) {
            container.erase(it);
            return true;
        }
    }
    return false;
}

/**
 * @brief Pesquisa uma Hospedagem no container com base no código.
 * @param hospedagem Um ponteiro para a Hospedagem que receberá os dados encontrados.
 * @return true se a Hospedagem foi encontrada, false caso contrário.
 */
bool ContainerHospedagem::pesquisar(Hospedagem *hospedagem) {
    for (auto &h : container) {
        if (h.getCodigo().getValor() == hospedagem->getCodigo().getValor()) {
            *hospedagem = h;
            return true;
        }
    }
    return false;
}

/**
 * @brief Atualiza uma Hospedagem no container.
 * @param hospedagem A Hospedagem com os novos dados.
 * @return true se a atualização foi bem-sucedida, false se a Hospedagem não foi encontrada.
 */
bool ContainerHospedagem::atualizar(Hospedagem hospedagem) {
    for (auto &h : container) {
        if (h.getCodigo().getValor() == hospedagem.getCodigo().getValor()) {
            h = hospedagem;
            return true;
        }
    }
    return false;
}