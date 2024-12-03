#include "testesEntidade.hpp"

const int SUCESSO = 0;
const int FALHA = 1;

// Teste conta
void TUConta::setUp() {
    conta = new Conta();  
    estado = SUCESSO;     
};

void TUConta::tearDown() {
    delete conta;  
};

void TUConta::testarCenarioCodigo() {
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    conta->setCodigo(codigo);            
    if (conta->getCodigo().getValor() != VALOR_VALIDO_CODIGO) {
        estado = FALHA; 
    }
};

void TUConta::testarCenarioSenha() {
    Senha senha;
    senha.setValor(VALOR_VALIDO_SENHA);

    if (conta->getSenha().getValor() != VALOR_VALIDO_SENHA) {
        estado = FALHA; 
    }
};

int TUConta::run() {
    setUp();            
    testarCenarioCodigo();
    testarCenarioSenha(); 
    tearDown();         
    return estado;      
};


// Teste viagem
void TUViagem::setUp() {
    viagem = new Viagem();
    estado = SUCESSO;
}

void TUViagem::tearDown() {
    delete viagem;
}

void TUViagem::testarCenarioCodigo() {
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    viagem->setCodigo(codigo);
    if (viagem->getCodigo().getValor() != VALOR_VALIDO_CODIGO) {
        estado = FALHA;
    }
}

void TUViagem::testarCenarioNome() {
    Nome nome;
    nome.setValor(VALOR_VALIDO_NOME);
    viagem->setNome(nome);
    if (viagem->getNome().getValor() != VALOR_VALIDO_NOME) {
        estado = FALHA;
    }
}

void TUViagem::testarCenarioAvaliacao() {
    Avaliacao avaliacao;
    avaliacao.setValor(VALOR_VALIDO_AVALIACAO);
    viagem->setAvaliacao(avaliacao);
    if (viagem->getAvaliacao().getValor() != VALOR_VALIDO_AVALIACAO) {
        estado = FALHA;
    }
}

int TUViagem::run() {
    setUp();
    testarCenarioCodigo();
    testarCenarioNome();
    testarCenarioAvaliacao();
    tearDown();
    return estado;
}

// Teste destino
void TUDestino::setUp() {
    destino = new Destino();
    estado = SUCESSO;
}

void TUDestino::tearDown() {
    delete destino;
}

void TUDestino::testarCenarioCodigo() {
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    destino->setCodigo(codigo);
    if (destino->getCodigo().getValor() != VALOR_VALIDO_CODIGO) {
        estado = FALHA;
    }
}

void TUDestino::testarCenarioNome() {
    Nome nome;
    nome.setValor(VALOR_VALIDO_NOME);
    destino->setNome(nome);
    if (destino->getNome().getValor() != VALOR_VALIDO_NOME) {
        estado = FALHA;
    }
}

void TUDestino::testarCenarioDataInicio() {
    Data dataInicio;
    dataInicio.setValor(VALOR_VALIDO_DATA_INICIO);
    destino->setDataInicio(dataInicio);
    if (destino->getDataInicio().getValor() != VALOR_VALIDO_DATA_INICIO) {
        estado = FALHA;
    }
}

void TUDestino::testarCenarioDataFim() {
    Data dataTermino;
    dataTermino.setValor(VALOR_VALIDO_DATA_FIM);
    destino->setDataTermino(dataTermino);
    if (destino->getDataTermino().getValor() != VALOR_VALIDO_DATA_FIM) {
        estado = FALHA;
    }
}

void TUDestino::testarCenarioAvaliacao() {
    Avaliacao avaliacao;
    avaliacao.setValor(VALOR_VALIDO_AVALIACAO);
    destino->setAvaliacao(avaliacao);
    if (destino->getAvaliacao().getValor() != VALOR_VALIDO_AVALIACAO) {
        estado = FALHA;
    }
}

int TUDestino::run() {
    setUp();
    testarCenarioCodigo();
    testarCenarioNome();
    testarCenarioDataInicio();
    testarCenarioDataFim();
    testarCenarioAvaliacao();
    tearDown();
    return estado;
}

// Teste atividade
void TUAtividade::setUp() {
    atividade = new Atividade();
    estado = SUCESSO;
}

void TUAtividade::tearDown() {
    delete atividade;
}

void TUAtividade::testarCenarioNome() {
    Nome nome;
    nome.setValor(VALOR_VALIDO_NOME);
    atividade->setNome(nome);
    if (atividade->getNome().getValor() != VALOR_VALIDO_NOME) {
        estado = FALHA;
    }
}

void TUAtividade::testarCenarioData() {
    Data data;
    data.setValor(VALOR_VALIDO_DATA);
    atividade->setData(data);
    if (atividade->getData().getValor() != VALOR_VALIDO_DATA) {
        estado = FALHA;
    }
}

void TUAtividade::testarCenarioHorario() {
    Horario horario;
    horario.setValor(VALOR_VALIDO_HORARIO);
    atividade->setHorario(horario);
    if (atividade->getHorario().getValor() != VALOR_VALIDO_HORARIO) {
        estado = FALHA;
    }
}

void TUAtividade::testarCenarioDuracao() {
    Duracao duracao;
    duracao.setValor(VALOR_VALIDO_DURACAO);
    atividade->setDuracao(duracao);
    if (atividade->getDuracao().getValor() != VALOR_VALIDO_DURACAO) {
        estado = FALHA;
    }
}

void TUAtividade::testarCenarioDinheiro() {
    Dinheiro dinheiro;
    dinheiro.setValor(VALOR_VALIDO_DINHEIRO);
    atividade->setPreco(dinheiro);
    if (atividade->getPreco().getValor() != VALOR_VALIDO_DINHEIRO) {
        estado = FALHA;
    }
}

void TUAtividade::testarCenarioAvaliacao() {
    Avaliacao avaliacao;
    avaliacao.setValor(VALOR_VALIDO_AVALIACAO);
    atividade->setAvaliacao(avaliacao);
    if (atividade->getAvaliacao().getValor() != VALOR_VALIDO_AVALIACAO) {
        estado = FALHA;
    }
}

int TUAtividade::run() {
    setUp();
    testarCenarioData();
    testarCenarioHorario();
    testarCenarioDuracao();
    testarCenarioDinheiro();
    testarCenarioAvaliacao();
    tearDown();
    return estado;
}

// Teste hospedagem
void TUHospedagem::setUp() {
    hospedagem = new Hospedagem();
    estado = SUCESSO;
}

void TUHospedagem::tearDown() {
    delete hospedagem;
}

void TUHospedagem::testarCenarioCodigo() {
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    hospedagem->setCodigo(codigo);
    if (hospedagem->getCodigo().getValor() != VALOR_VALIDO_CODIGO) {
        estado = FALHA;
    }
}

void TUHospedagem::testarCenarioNome() {
    Nome nome;
    nome.setValor(VALOR_VALIDO_NOME);
    hospedagem->setNome(nome);
    if (hospedagem->getNome().getValor() != VALOR_VALIDO_NOME) {
        estado = FALHA;
    }
}

void TUHospedagem::testarCenarioDinheiro() {
    Dinheiro dinheiro;
    dinheiro.setValor(VALOR_VALIDO_DINHEIRO);
    hospedagem->setDiaria(dinheiro);
    if (hospedagem->getDiaria().getValor() != VALOR_VALIDO_DINHEIRO) {
        estado = FALHA;
    }
}

void TUHospedagem::testarCenarioAvaliacao() {
    Avaliacao avaliacao;
    avaliacao.setValor(VALOR_VALIDO_AVALIACAO);
    hospedagem->setAvaliacao(avaliacao);
    if (hospedagem->getAvaliacao().getValor() != VALOR_VALIDO_AVALIACAO) {
        estado = FALHA;
    }
}

int TUHospedagem::run() {
    setUp();
    testarCenarioCodigo();
    testarCenarioNome();
    testarCenarioDinheiro();
    testarCenarioAvaliacao();
    tearDown();
    return estado;
}
