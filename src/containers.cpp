#include "containers.hpp"

// Implementação do ContainerConta
bool ContainerConta::incluir(Conta conta) {
    for (const auto &c : container) {
        if (c.getCodigo().getValor() == conta.getCodigo().getValor()) {
            return false;
        }
    }
    container.push_back(conta);
    return true;
}

bool ContainerConta::remover(Codigo codigo) {
    for (auto it = container.begin(); it != container.end(); ++it) {
        if (it->getCodigo().getValor() == codigo.getValor()) {
            container.erase(it);
            return true;
        }
    }
    return false;
}

bool ContainerConta::pesquisar(Conta *conta) {
    for (auto &c : container) {
        if (c.getCodigo().getValor() == conta->getCodigo().getValor()) {
            *conta = c;
            return true;
        }
    }
    return false;
}

bool ContainerConta::atualizar(Conta conta) {
    for (auto &c : container) {
        if (c.getCodigo().getValor() == conta.getCodigo().getValor()) {
            c = conta;
            return true;
        }
    }
    return false;
}

// Implementação do ContainerViagem
bool ContainerViagem::incluir(Viagem viagem) {
    for (const auto &v : container) {
        if (v.getCodigo().getValor() == viagem.getCodigo().getValor()) {
            return false;
        }
    }
    container.push_back(viagem);
    return true;
}

bool ContainerViagem::remover(Codigo codigo) {
    for (auto it = container.begin(); it != container.end(); ++it) {
        if (it->getCodigo().getValor() == codigo.getValor()) {
            container.erase(it);
            return true;
        }
    }
    return false;
}

bool ContainerViagem::pesquisar(Viagem *viagem) {
    for (auto &v : container) {
        if (v.getCodigo().getValor() == viagem->getCodigo().getValor()) {
            *viagem = v;
            return true;
        }
    }
    return false;
}

bool ContainerViagem::atualizar(Viagem viagem) {
    for (auto &v : container) {
        if (v.getCodigo().getValor() == viagem.getCodigo().getValor()) {
            v = viagem;
            return true;
        }
    }
    return false;
}

// Implementação do ContainerDestino
bool ContainerDestino::incluir(Destino destino) {
    for (const auto &d : container) {
        if (d.getCodigo().getValor() == destino.getCodigo().getValor()) {
            return false;
        }
    }
    container.push_back(destino);
    return true;
}

bool ContainerDestino::remover(Codigo codigo) {
    for (auto it = container.begin(); it != container.end(); ++it) {
        if (it->getCodigo().getValor() == codigo.getValor()) {
            container.erase(it);
            return true;
        }
    }
    return false;
}

bool ContainerDestino::pesquisar(Destino *destino) {
    for (auto &d : container) {
        if (d.getCodigo().getValor() == destino->getCodigo().getValor()) {
            *destino = d;
            return true;
        }
    }
    return false;
}

bool ContainerDestino::atualizar(Destino destino) {
    for (auto &d : container) {
        if (d.getCodigo().getValor() == destino.getCodigo().getValor()) {
            d = destino;
            return true;
        }
    }
    return false;
}

// Implementação do ContainerAtividade
bool ContainerAtividade::incluir(Atividade atividade) {
    for (const auto &a : container) {
        if (a.getCodigo().getValor() == atividade.getCodigo().getValor()) {
            return false;
        }
    }
    container.push_back(atividade);
    return true;
}

bool ContainerAtividade::remover(Nome nome) {
    for (auto it = container.begin(); it != container.end(); ++it) {
        if (it->getNome().getValor() == nome.getValor()) {
            container.erase(it);
            return true;
        }
    }
    return false;
}

bool ContainerAtividade::pesquisar(Atividade *atividade) {
    for (auto &a : container) {
        if (a.getCodigo().getValor() == atividade->getCodigo().getValor()) {
            *atividade = a;
            return true;
        }
    }
    return false;
}

bool ContainerAtividade::atualizar(Atividade atividade) {
    for (auto &a : container) {
        if (a.getCodigo().getValor() == atividade.getCodigo().getValor()) {
            a = atividade;
            return true;
        }
    }
    return false;
}

// Implementação do ContainerHospedagem
bool ContainerHospedagem::incluir(Hospedagem hospedagem) {
    for (const auto &h : container) {
        if (h.getCodigo().getValor() == hospedagem.getCodigo().getValor()) {
            return false;
        }
    }
    container.push_back(hospedagem);
    return true;
}

bool ContainerHospedagem::remover(Codigo codigo) {
    for (auto it = container.begin(); it != container.end(); ++it) {
        if (it->getCodigo().getValor() == codigo.getValor()) {
            container.erase(it);
            return true;
        }
    }
    return false;
}

bool ContainerHospedagem::pesquisar(Hospedagem *hospedagem) {
    for (auto &h : container) {
        if (h.getCodigo().getValor() == hospedagem->getCodigo().getValor()) {
            *hospedagem = h;
            return true;
        }
    }
    return false;
}

bool ContainerHospedagem::atualizar(Hospedagem hospedagem) {
    for (auto &h : container) {
        if (h.getCodigo().getValor() == hospedagem.getCodigo().getValor()) {
            h = hospedagem;
            return true;
        }
    }
    return false;
}