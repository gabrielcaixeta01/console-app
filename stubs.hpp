class StubLNAutenticacao:public ILNAutenticacao {
private:
    // Definições de valores a serem usados como gatilhos para notificações de erros.
    const static int TRIGGER_FALHA = 67890;
    const static int TRIGGER_ERRO_SISTEMA = 78901;

public:
    // Declaração de método previsto em interface.
    bool autenticar(const Matricula&, const Senha&);
};