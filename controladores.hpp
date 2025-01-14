class CntrIUAutenticacao:public IUAuntenticacao {
private:
    ILNAutenticacao *cntrLNAutenticacao; // Referência para servidor.

public:
    bool autenticar(Matricula*); 
    void setCntrLNAutenticacao(ILNAutenticacao*);
};

void inline CntIUAutenticacao::setCntrLNAutenticacao(ILNAutenticacao *cntrLNAutenticacao) {
    this->cntrLNAutenticacao = cntrLNAutenticacao;
};
