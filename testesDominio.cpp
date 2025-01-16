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
    } catch (const invalid_argument &) {
        estado = FALHA;
    }
}

void TUAvaliacao::testarCenarioValorInvalido() {
    try {
        avaliacao->setValor("6");
        estado = FALHA;  // Não deveria chegar aqui
    } catch (const invalid_argument &) {
        // Exceção esperada
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
    } catch (const invalid_argument &) {
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioValorInvalido() {
    try {
        codigo->setValor("12345");
        estado = FALHA;  // Não deveria chegar aqui
    } catch (const invalid_argument &) {
        // Exceção esperada
    }
}

// Testes para os demais domínios seguem a mesma estrutura...

// Testes para Senha
void TUSenha::setUp() {
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown() {
    delete senha;
}

int TUSenha::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}

void TUSenha::testarCenarioValorValido() {
    try {
        senha->setValor("18340");
        if (senha->getValor() != "18340") {
            estado = FALHA;
        }
    } catch (const invalid_argument &) {
        estado = FALHA;
    }
}

void TUSenha::testarCenarioValorInvalido() {
    try {
        senha->setValor("11111");  // Valor inválido
        estado = FALHA;           // Não deveria chegar aqui
    } catch (const invalid_argument &) {
        // Exceção esperada
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
        dinheiro->setValor("100,00");
        if (dinheiro->getValor() != "100,00") {
            estado = FALHA;
        }
    } catch (const invalid_argument &) {
        estado = FALHA;
    }
}

void TUDinheiro::testarCenarioValorInvalido() {
    try {
        dinheiro->setValor("100000,01");  // Valor inválido
        estado = FALHA;                  // Não deveria chegar aqui
    } catch (const invalid_argument &) {
        // Exceção esperada
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
        data->setValor("01-01-24");
        if (data->getValor() != "01-01-24") {
            estado = FALHA;
        }
    } catch (const invalid_argument &) {
        estado = FALHA;
    }
}

void TUData::testarCenarioValorInvalido() {
    try {
        data->setValor("32-13-24");  // Valor inválido
        estado = FALHA;             // Não deveria chegar aqui
    } catch (const invalid_argument &) {
        // Exceção esperada
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
    } catch (const invalid_argument &) {
        estado = FALHA;
    }
}

void TUNome::testarCenarioValorInvalido() {
    try {
        nome->setValor("");  // Valor inválido
        estado = FALHA;      // Não deveria chegar aqui
    } catch (const invalid_argument &) {
        // Exceção esperada
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
        duracao->setValor("120");
        if (duracao->getValor() != "120") {
            estado = FALHA;
        }
    } catch (const invalid_argument &) {
        estado = FALHA;
    }
}

void TUDuracao::testarCenarioValorInvalido() {
    try {
        duracao->setValor("400");  // Valor inválido
        estado = FALHA;           // Não deveria chegar aqui
    } catch (const invalid_argument &) {
        // Exceção esperada
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
        horario->setValor("14:30");
        if (horario->getValor() != "14:30") {
            estado = FALHA;
        }
    } catch (const invalid_argument &) {
        estado = FALHA;
    }
}

void TUHorario::testarCenarioValorInvalido() {
    try {
        horario->setValor("25:61");  // Valor inválido
        estado = FALHA;             // Não deveria chegar aqui
    } catch (const invalid_argument &) {
        // Exceção esperada
    }
}