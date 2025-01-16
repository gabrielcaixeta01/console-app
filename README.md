# Console App - TP1

Este projeto foi desenvolvido como parte da disciplina de Técnicas de Programação para implementar um sistema modular, orientado a objetos, com funcionalidades bem definidas e validação das regras de negócio.

## Estrutura do Projeto

console-app/
│
├── src/               # Código-fonte principal
│   ├── controladoras.cpp
│   ├── dominios.cpp
│   ├── entidades.cpp
│   ├── stubs.cpp
│   └── main.cpp
│
├── include/           # Arquivos de cabeçalho
│   ├── controladoras.hpp
│   ├── dominios.hpp
│   ├── entidades.hpp
│   ├── interfaces.hpp
│   └── stubs.hpp
│
├── data/              # Artefatos gerados
│   ├── sistema        # Executável principal
│   └── obj/           # Arquivos objeto (.o)
│
├── tests/             # Testes automatizados
│   ├── testesEntidade.cpp
│   ├── testesDominio.cpp
│   └── Makefile       # Automação dos testes
│
├── docs/              # Documentação gerada pelo Doxygen
│   ├── html/          # Documentação em HTML
│   └── latex/         # Documentação em LaTeX
│
└── Makefile           # Automação do build e execução


## Funcionalidades

O sistema implementa operações de CRUD (Criar, Ler, Atualizar e Excluir) para as seguintes entidades:

### Contas
- **Criar conta**: Cria uma nova conta com código e senha.
- **Ler conta**: Exibe os dados da conta.
- **Atualizar conta**: Permite atualizar a senha da conta.
- **Excluir conta**: Remove a conta caso não haja restrições.

### Viagens
- **Criar viagem**: Cadastra uma nova viagem.
- **Ler viagem**: Exibe os detalhes de uma viagem específica.
- **Atualizar viagem**: Permite alterar o nome de uma viagem.
- **Excluir viagem**: Remove uma viagem.

### Destinos, Atividades e Hospedagens
- Para cada um desses elementos:
  - **Criar**: Adiciona um novo item.
  - **Ler**: Exibe os detalhes de um item específico.
  - **Atualizar**: Permite atualizar os dados de um item.
  - **Excluir**: Remove o item.

## Interfaces

O projeto utiliza uma abordagem modular baseada em interfaces para separar as responsabilidades:

### Interfaces de Apresentação (`IA`)
As interfaces de apresentação interagem com o usuário e recebem entradas diretamente dele:
- `IAAutenticacao`: Gerencia a autenticação de usuários.
- `IAConta`: Gerencia as operações relacionadas às contas.
- `IAViagem`, `IADestino`, `IAAtividade`, `IAHospedagem`: Gerenciam as operações de CRUD para as respectivas entidades.

### Interfaces de Serviço (`IS`)
As interfaces de serviço implementam a lógica de negócio e validam as operações:
- `ISAutenticacao`: Valida os dados de autenticação.
- `ISConta`: Realiza operações de CRUD para contas.
- `ISViagem`, `ISDestino`, `ISAtividade`, `ISHospedagem`: Implementam as funcionalidades de CRUD para cada entidade.

## Modularização e Separação de Responsabilidades

A arquitetura do sistema é composta por camadas bem definidas:
1. **Apresentação (IA)**: Reúne as funcionalidades para o usuário.
2. **Serviço (IS)**: Lida com a lógica de negócio.
3. **Entidades e Domínios**: Modelam os dados e suas validações.

Essa separação permite:
- **Reutilização de Código**: A lógica de serviço pode ser usada por várias interfaces de apresentação.
- **Testes Independentes**: Cada camada pode ser testada isoladamente.
- **Flexibilidade**: Novas funcionalidades podem ser adicionadas sem grandes refatorações.

## Regras de Negócio

1. **Imutabilidade da Chave Primária**:
   - Não é permitido alterar campos que identificam registros (ex.: códigos).
   
2. **Exclusão Condicional**:
   - Entidades só podem ser removidas se não houver dependências ativas.

3. **Validação de Datas**:
   - As atividades de um destino devem respeitar o intervalo de datas do destino.

## Desenvolvedores

- Gabriel Caixeta
- Gustavo Cavalcanti
- João Henrique Antunes