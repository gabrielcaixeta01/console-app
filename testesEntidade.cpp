#include "testesEntidade.hpp"

// Constantes globais
const int SUCESSO = 0;
const int FALHA = 1;

// Definições das constantes globais
const string VALOR_VALIDO_CODIGO = "ABC123";
const string VALOR_VALIDO_SENHA = "18340";

// Definições das constantes para TUAtividade
const string TUAtividade::VALOR_VALIDO_NOME = "Atividade Teste";
const string TUAtividade::VALOR_VALIDO_DATA = "10-11-23";
const string TUAtividade::VALOR_VALIDO_HORARIO = "14:30";
const string TUAtividade::VALOR_VALIDO_DURACAO = "120";
const string TUAtividade::VALOR_VALIDO_DINHEIRO = "150,00";
const string TUAtividade::VALOR_VALIDO_AVALIACAO = "3";

// Definições das constantes para TUHospedagem
const string TUHospedagem::VALOR_VALIDO_CODIGO = "GHI789";
const string TUHospedagem::VALOR_VALIDO_NOME = "Hospedagem Teste";
const string TUHospedagem::VALOR_VALIDO_DINHEIRO = "200,00";
const string TUHospedagem::VALOR_VALIDO_AVALIACAO = "5";

// Definições das constantes para TUConta
const string TUConta::VALOR_VALIDO_CODIGO = "ABC123";
const string TUConta::VALOR_VALIDO_SENHA = "12540";

// Definições das constantes para TUViagem
const string TUViagem::VALOR_VALIDO_CODIGO = "XYZ789";
const string TUViagem::VALOR_VALIDO_NOME = "Viagem Teste";
const string TUViagem::VALOR_VALIDO_AVALIACAO = "5";

// Definições das constantes para TUDestino
const string TUDestino::VALOR_VALIDO_CODIGO = "DEF456";
const string TUDestino::VALOR_VALIDO_NOME = "Destino Teste";
const string TUDestino::VALOR_VALIDO_DATA_INICIO = "01-01-24";
const string TUDestino::VALOR_VALIDO_DATA_FIM = "31-12-24";
const string TUDestino::VALOR_VALIDO_AVALIACAO = "4";

// Testes para Conta

void TUConta::setUp() {
    conta = new Conta();
    estado = SUCESSO;
}

void TUConta::tearDown() {
    delete conta;
}

void TUConta::testarCenarioCodigo() {
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);  // Valor válido definido na constante
    conta->setCodigo(codigo);
    if (conta->getCodigo().getValor() != VALOR_VALIDO_CODIGO) {
        estado = FALHA;
    }
}

void TUConta::testarCenarioSenha() {
    Senha senha;
    senha.setValor(VALOR_VALIDO_SENHA);  // Valor válido definido na constante
    conta->setSenha(senha);
    if (conta->getSenha().getValor() != VALOR_VALIDO_SENHA) {
        estado = FALHA;
    }
}

int TUConta::run() {
    setUp();
    testarCenarioCodigo();
    testarCenarioSenha();
    tearDown();
    return estado;
}

// Testes para Viagem

void TUViagem::setUp() {
    viagem = new Viagem();
    estado = SUCESSO;
}

void TUViagem::tearDown() {
    delete viagem;
}

void TUViagem::testarCenarioCodigo() {
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);  // Valor válido definido na constante
    viagem->setCodigo(codigo);
    if (viagem->getCodigo().getValor() != VALOR_VALIDO_CODIGO) {
        estado = FALHA;
    }
}

void TUViagem::testarCenarioNome() {
    Nome nome;
    nome.setValor(VALOR_VALIDO_NOME);  // Valor válido definido na constante
    viagem->setNome(nome);
    if (viagem->getNome().getValor() != VALOR_VALIDO_NOME) {
        estado = FALHA;
    }
}

void TUViagem::testarCenarioAvaliacao() {
    Avaliacao avaliacao;
    avaliacao.setValor(VALOR_VALIDO_AVALIACAO);  // Valor válido definido na constante
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

// Completar Teste para Destino
void TUDestino::setUp() {
    destino = new Destino();
    estado = SUCESSO;
}

void TUDestino::tearDown() {
    delete destino;
}

void TUDestino::testarCenarioDataInicio() {
    Data dataInicio;
    dataInicio.setValor(VALOR_VALIDO_DATA_INICIO);  // Valor válido definido na constante
    destino->setDataInicio(dataInicio);
    if (destino->getDataInicio().getValor() != VALOR_VALIDO_DATA_INICIO) {
        estado = FALHA;
    }
}

void TUDestino::testarCenarioDataFim() {
    Data dataFim;
    dataFim.setValor(VALOR_VALIDO_DATA_FIM);  // Valor válido definido na constante
    destino->setDataTermino(dataFim);
    if (destino->getDataTermino().getValor() != VALOR_VALIDO_DATA_FIM) {
        estado = FALHA;
    }
}

void TUDestino::testarCenarioAvaliacao() {
    Avaliacao avaliacao;
    avaliacao.setValor(VALOR_VALIDO_AVALIACAO);  // Valor válido definido na constante
    destino->setAvaliacao(avaliacao);
    if (destino->getAvaliacao().getValor() != VALOR_VALIDO_AVALIACAO) {
        estado = FALHA;
    }
}

void TUDestino::testarCenarioNome() {
    Nome nome;
    nome.setValor(VALOR_VALIDO_NOME);  // Usa o valor válido definido na constante
    destino->setNome(nome);
    if (destino->getNome().getValor() != VALOR_VALIDO_NOME) {
        estado = FALHA;
    }
}

void TUDestino::testarCenarioCodigo() {
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);  // Usa o valor válido definido na constante
    destino->setCodigo(codigo);
    if (destino->getCodigo().getValor() != VALOR_VALIDO_CODIGO) {
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

// Testes para Atividade

void TUAtividade::setUp() {
    atividade = new Atividade();
    estado = SUCESSO;
}

void TUAtividade::tearDown() {
    delete atividade;
}

void TUAtividade::testarCenarioNome() {
    Nome nome;
    nome.setValor(VALOR_VALIDO_NOME);  // Valor válido definido na constante
    atividade->setNome(nome);
    if (atividade->getNome().getValor() != VALOR_VALIDO_NOME) {
        estado = FALHA;
    }
}

void TUAtividade::testarCenarioData() {
    Data data;
    data.setValor(VALOR_VALIDO_DATA);  // Valor válido definido na constante
    atividade->setData(data);
    if (atividade->getData().getValor() != VALOR_VALIDO_DATA) {
        estado = FALHA;
    }
}

void TUAtividade::testarCenarioHorario() {
    Horario horario;
    horario.setValor(VALOR_VALIDO_HORARIO);  // Valor válido definido na constante
    atividade->setHorario(horario);
    if (atividade->getHorario().getValor() != VALOR_VALIDO_HORARIO) {
        estado = FALHA;
    }
}

void TUAtividade::testarCenarioDuracao() {
    Duracao duracao;
    duracao.setValor(VALOR_VALIDO_DURACAO);  // Valor válido definido na constante
    atividade->setDuracao(duracao);
    if (atividade->getDuracao().getValor() != VALOR_VALIDO_DURACAO) {
        estado = FALHA;
    }
}

void TUAtividade::testarCenarioDinheiro() {
    Dinheiro dinheiro;
    dinheiro.setValor(VALOR_VALIDO_DINHEIRO);  // Valor válido definido na constante
    atividade->setPreco(dinheiro);
    if (atividade->getPreco().getValor() != VALOR_VALIDO_DINHEIRO) {
        estado = FALHA;
    }
}

void TUAtividade::testarCenarioAvaliacao() {
    Avaliacao avaliacao;
    avaliacao.setValor(VALOR_VALIDO_AVALIACAO);  // Valor válido definido na constante
    atividade->setAvaliacao(avaliacao);
    if (atividade->getAvaliacao().getValor() != VALOR_VALIDO_AVALIACAO) {
        estado = FALHA;
    }
}

int TUAtividade::run() {
    setUp();
    testarCenarioNome();
    testarCenarioData();
    testarCenarioHorario();
    testarCenarioDuracao();
    testarCenarioDinheiro();
    testarCenarioAvaliacao();
    tearDown();
    return estado;
}

// Testes para Hospedagem

void TUHospedagem::setUp() {
    hospedagem = new Hospedagem();
    estado = SUCESSO;
}

void TUHospedagem::tearDown() {
    delete hospedagem;
}

void TUHospedagem::testarCenarioCodigo() {
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);  // Valor válido definido na constante
    hospedagem->setCodigo(codigo);
    if (hospedagem->getCodigo().getValor() != VALOR_VALIDO_CODIGO) {
        estado = FALHA;
    }
}

void TUHospedagem::testarCenarioNome() {
    Nome nome;
    nome.setValor(VALOR_VALIDO_NOME);  // Valor válido definido na constante
    hospedagem->setNome(nome);
    if (hospedagem->getNome().getValor() != VALOR_VALIDO_NOME) {
        estado = FALHA;
    }
}

void TUHospedagem::testarCenarioDinheiro() {
    Dinheiro dinheiro;
    dinheiro.setValor(VALOR_VALIDO_DINHEIRO);  // Valor válido definido na constante
    hospedagem->setDiaria(dinheiro);
    if (hospedagem->getDiaria().getValor() != VALOR_VALIDO_DINHEIRO) {
        estado = FALHA;
    }
}

void TUHospedagem::testarCenarioAvaliacao() {
    Avaliacao avaliacao;
    avaliacao.setValor(VALOR_VALIDO_AVALIACAO);  // Valor válido definido na constante
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