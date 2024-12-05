#include "testesDominio.hpp"

// Testes para Avaliacao
void TUAvaliacao::setUp() {
    avaliacao = new Avaliacao();
    estado = SUCESSO;
}

void TUAvaliacao::tearDown() {
    delete avaliacao;
}

int TUAvaliacao::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}

void TUAvaliacao::testarCenarioValorValido() {
    try {
        avaliacao->setValor("5");
        if (avaliacao->getValor() != "5") {
            estado = FALHA;
        }
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUAvaliacao::testarCenarioValorInvalido() {
    try {
        avaliacao->setValor("6");
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        // Exceção esperada.
    }
}

// Testes para Codigo
void TUCodigo::setUp() {
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown() {
    delete codigo;
}

int TUCodigo::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}

void TUCodigo::testarCenarioValorValido() {
    try {
        codigo->setValor("ABC123");
        if (codigo->getValor() != "ABC123") {
            estado = FALHA;
        }
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioValorInvalido() {
    try {
        codigo->setValor("A12345Z");
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        // Exceção esperada.
    }
}

// Testes para Data
void TUData::setUp() {
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown() {
    delete data;
}

int TUData::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}

void TUData::testarCenarioValorValido() {
    try {
        data->setValor("31-12-99");
        if (data->getValor() != "31-12-99") {
            estado = FALHA;
        }
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUData::testarCenarioValorInvalido() {
    try {
        data->setValor("32-13-99");
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        // Exceção esperada.
    }
}

// Testes para Dinheiro
void TUDinheiro::setUp() {
    dinheiro = new Dinheiro();
    estado = SUCESSO;
}

void TUDinheiro::tearDown() {
    delete dinheiro;
}

int TUDinheiro::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}

void TUDinheiro::testarCenarioValorValido() {
    try {
        dinheiro->setValor("200,00");
        if (dinheiro->getValor() != "200,00") {
            estado = FALHA;
        }
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUDinheiro::testarCenarioValorInvalido() {
    try {
        dinheiro->setValor("200.000,01");
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        // Exceção esperada.
    }
}

// Testes para Duracao
void TUDuracao::setUp() {
    duracao = new Duracao();
    estado = SUCESSO;
}

void TUDuracao::tearDown() {
    delete duracao;
}

int TUDuracao::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}

void TUDuracao::testarCenarioValorValido() {
    try {
        duracao->setValor("360");
        if (duracao->getValor() != "360") {
            estado = FALHA;
        }
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUDuracao::testarCenarioValorInvalido() {
    try {
        duracao->setValor("361");
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        // Exceção esperada.
    }
}

// Testes para Horario
void TUHorario::setUp() {
    horario = new Horario();
    estado = SUCESSO;
}

void TUHorario::tearDown() {
    delete horario;
}

int TUHorario::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}

void TUHorario::testarCenarioValorValido() {
    try {
        horario->setValor("14:30");  // Valor válido
        if (horario->getValor() != "14:30") {
            estado = FALHA;
        }
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUHorario::testarCenarioValorInvalido() {
    try {
        horario->setValor("25:61");  // Valor inválido
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        // Exceção esperada.
    }
}

// Testes para Nome
void TUNome::setUp() {
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown() {
    delete nome;
}

int TUNome::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}

void TUNome::testarCenarioValorValido() {
    try {
        nome->setValor("João da Silva");
        if (nome->getValor() != "João da Silva") {
            estado = FALHA;
        }
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUNome::testarCenarioValorInvalido() {
    try {
        nome->setValor("");
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        // Exceção esperada.
    }
}

// Testes para Senha
void TUSenha::setUp() {
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown() {
    delete senha;
}

void TUSenha::testarCenarioValorValido() {
    try {
        senha->setValor("18340");
        if (senha->getValor() != "18340") {
            estado = FALHA;
        }
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUSenha::testarCenarioValorInvalido() {
    try {
        senha->setValor("11111");
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        // Exceção esperada.
    }
}

int TUSenha::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}

