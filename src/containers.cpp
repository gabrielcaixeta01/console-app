/*
bool ContainerUsuario::incluir(Usuario usuario){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if(elemento->getMatricula().getValor() == usuario.getMatricula().getValor()){
            return false;
        }
    }
    container.push_back(usuario);
    return true;
}

bool ContainerUsuario::remover(Matricula matricula){
    for(list<Usuario>::iterator elemento = container .begin(); elemento!= container.end(); elemento++){
        if(elemento->getMatricula().getValor() == matricula.getValor()){
            container.erase(elemento);
            return true;
        }
    }
    return false;
}

bool ContainerUsuario::pesquisar(Usuario* usuario){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if(elemento->getMatricula().getValor() == usuario->getMatricula().getValor()){
            *usuario = *elemento;
            return true;
        }
    }
    return false;
} 

bool ContainerUsuario::atualizar(Usuario usuario){
    for(list<Usuario>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        ir(elemento->getMatricula().getValor() == usuario.getMatricula().getValor()){
            *elemento = usuario;
            return true;
        }
    }
    return false;
}
*/

#include "../include/containers.hpp"

bool ContainerConta::incluir(Conta conta) {
    for (list<Conta>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getCodigo().getValor() == conta.getCodigo().getValor()) {
            return false;
        }
    }
    container.push_back(conta);
    return true;
}

bool ContainerConta::remover(Codigo matricula) {
    for (list<Conta>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getCodigo().getValor() == matricula.getValor()) {
            container.erase(elemento);
            return true;
        }
    }
    return false;
}

bool ContainerConta::pesquisar(Conta* conta) {
    for (list<Conta>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getCodigo().getValor() == conta->getCodigo().getValor()) {
            *conta = *elemento;
            return true;
        }
    }
    return false;
}

bool ContainerConta::atualizar(Conta conta) {
    for (list<Conta>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getCodigo().getValor() == conta.getCodigo().getValor()) {
            *elemento = conta;
            return true;
        }
    }
    return false;
}

bool ContainerViagem::incluir(Viagem viagem) {
    for (list<Viagem>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getCodigo().getValor() == viagem.getCodigo().getValor()) {
            return false;
        }
    }
    container.push_back(viagem);
    return true;
}

bool ContainerViagem::remover(Codigo matricula) {
    for (list<Viagem>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getCodigo().getValor() == matricula.getValor()) {
            container.erase(elemento);
            return true;
        }
    }
    return false;
}

bool ContainerViagem::pesquisar(Viagem* viagem) {
    for (list<Viagem>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getCodigo().getValor() == viagem->getCodigo().getValor()) {
            *viagem = *elemento;
            return true;
        }
    }
    return false;
}

bool ContainerViagem::atualizar(Viagem viagem) {
    for (list<Viagem>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getCodigo().getValor() == viagem.getCodigo().getValor()) {
            *elemento = viagem;
            return true;
        }
    }
    return false;
}

bool ContainerDestino::incluir(Destino destino) {
    for (list<Destino>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getCodigo().getValor() == destino.getCodigo().getValor()) {
            return false;
        }
    }
    container.push_back(destino);
    return true;
}

bool ContainerDestino::remover(Codigo matricula) {
    for (list<Destino>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getCodigo().getValor() == matricula.getValor()) {
            container.erase(elemento);
            return true;
        }
    }
    return false;
}

bool ContainerDestino::pesquisar(Destino* destino) {
    for (list<Destino>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getCodigo().getValor() == destino->getCodigo().getValor()) {
            *destino = *elemento;
            return true;
        }
    }
    return false;
}

bool ContainerDestino::atualizar(Destino destino) {
    for (list<Destino>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getCodigo().getValor() == destino.getCodigo().getValor()) {
            *elemento = destino;
            return true;
        }
    }
    return false;
}

bool ContainerAtividade::incluir(Atividade atividade) {
    for (list<Atividade>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getNome().getValor() == atividade.getNome().getValor()) {
            return false;
        }
    }
    container.push_back(atividade);
    return true;
}

bool ContainerAtividade::remover(Codigo matricula) {
    for (list<Atividade>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getNome().getValor() == matricula.getValor()) {
            container.erase(elemento);
            return true;
        }
    }
    return false;
}

bool ContainerAtividade::pesquisar(Atividade* atividade) {
    for (list<Atividade>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getNome().getValor() == atividade->getNome().getValor()) {
            *atividade = *elemento;
            return true;
        }
    }
    return false;
}

bool ContainerAtividade::atualizar(Atividade atividade) {
    for (list<Atividade>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getNome().getValor() == atividade.getNome().getValor()) {
            *elemento = atividade;
            return true;
        }
    }
    return false;
}

bool ContainerHospedagem::incluir(Hospedagem hospedagem) {
    for (list<Hospedagem>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getCodigo().getValor() == hospedagem.getCodigo().getValor()) {
            return false;
        }
    }
    container.push_back(hospedagem);
    return true;
}

bool ContainerHospedagem::remover(Codigo matricula) {
    for (list<Hospedagem>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getCodigo().getValor() == matricula.getValor()) {
            container.erase(elemento);
            return true;
        }
    }
    return false;
}

bool ContainerHospedagem::pesquisar(Hospedagem* hospedagem) {
    for (list<Hospedagem>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getCodigo().getValor() == hospedagem->getCodigo().getValor()) {
            *hospedagem = *elemento;
            return true;
        }
    }
    return false;
}

bool ContainerHospedagem::atualizar(Hospedagem hospedagem) {
    for (list<Hospedagem>::iterator elemento = container.begin(); elemento != container.end(); elemento++) {
        if (elemento->getCodigo().getValor() == hospedagem.getCodigo().getValor()) {
            *elemento = hospedagem;
            return true;
        }
    }
    return false;
}
