#include "testes.hpp"

//Domínio avaliação

void TUAvaliacao::setUp() {
    avaliacao = new Avaliacao(); // Inicializa o objeto Avaliacao.
    estado = SUCESSO;           // Define o estado inicial como SUCESSO.
}

void TUAvaliacao::tearDown() {
    delete avaliacao; // Libera a memória alocada.
}

void TUAvaliacao::testarCenarioValorValido() {
    try {
        avaliacao->setValor(VALOR_VALIDO); // Tenta atribuir um valor válido.
        if (avaliacao->getValor() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUAvaliacao::testarCenarioValorInvalido() {
    try {
        avaliacao->setValor(VALOR_INVALIDO); // Tenta atribuir um valor inválido.
        estado = FALHA;                     // Não deve chegar aqui.
    } catch (invalid_argument &excecao) {
        // Se uma exceção for lançada, o valor não deve ser atribuído.
        if (avaliacao->getValor() == VALOR_INVALIDO) {
            estado = FALHA; // O valor inválido foi atribuído.
        }
    }
}

int TUAvaliacao::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado; // Retorna o estado final do teste.
}

//Domínio código

void TUCodigo::setUp() {
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown() {
    delete codigo;
}

void TUCodigo::testarCenarioValorValido() {
    try {
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioValorInvalido() {
    try {
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (codigo->getValor() == VALOR_INVALIDO) {
            estado = FALHA;
        }
    }
}

int TUCodigo::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}


// Testes para Avaliacao

void TUAvaliacao::setUp() {
    avaliacao = new Avaliacao();
    estado = SUCESSO;
}

void TUAvaliacao::tearDown() {
    delete avaliacao;
}

void TUAvaliacao::testarCenarioValorValido() {
    try {
        avaliacao->setValor(VALOR_VALIDO);
        if (avaliacao->getValor() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUAvaliacao::testarCenarioValorInvalido() {
    try {
        avaliacao->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        // Exceção esperada.
    }
}

int TUAvaliacao::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}

//Testes para Codigo

void TUCodigo::setUp() {
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown() {
    delete codigo;
}

void TUCodigo::testarCenarioValorValido() {
    try {
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioValorInvalido() {
    try {
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        // Exceção esperada.
    }
}

int TUCodigo::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}

// Testes para Data 

void TUData::setUp() {
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown() {
    delete data;
}

void TUData::testarCenarioValorValido() {
    try {
        data->setValor(VALOR_VALIDO);
        if (data->getValor() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUData::testarCenarioValorInvalido() {
    try {
        data->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        // Exceção esperada.
    }
}

int TUData::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}

//Testes para Dinheiro

void TUDinheiro::setUp() {
    dinheiro = new Dinheiro();
    estado = SUCESSO;
}

void TUDinheiro::tearDown() {
    delete dinheiro;
}

void TUDinheiro::testarCenarioValorValido() {
    try {
        dinheiro->setValor(VALOR_VALIDO);
        if (dinheiro->getValor() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUDinheiro::testarCenarioValorInvalido() {
    try {
        dinheiro->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        // Exceção esperada.
    }
}

int TUDinheiro::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}

// Testes para Duracao

void TUDuracao::setUp() {
    duracao = new Duracao();
    estado = SUCESSO;
}

void TUDuracao::tearDown() {
    delete duracao;
}

void TUDuracao::testarCenarioValorValido() {
    try {
        duracao->setValor(VALOR_VALIDO);
        if (duracao->getValor() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUDuracao::testarCenarioValorInvalido() {
    try {
        duracao->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        // Exceção esperada.
    }
}

int TUDuracao::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}

// Testes para Nome

void TUNome::setUp() {
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown() {
    delete nome;
}

void TUNome::testarCenarioValorValido() {
    try {
        nome->setValor(VALOR_VALIDO);
        if (nome->getValor() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUNome::testarCenarioValorInvalido() {
    try {
        nome->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        // Exceção esperada.
    }
}

int TUNome::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
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
        senha->setValor(VALOR_VALIDO);
        if (senha->getValor() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUSenha::testarCenarioValorInvalido() {
    try {
        senha->setValor(VALOR_INVALIDO);
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

