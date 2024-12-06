# Trabalho TP1: Console App

Este projeto foi desenvolvido como parte da disciplina de Técnicas de Programação.

## Objetivos do Projeto
- Implementar entidades e domínios que atendam aos requisitos funcionais e regras de negócio.
- Validar as funcionalidades por meio de testes automatizados.
- Gerar documentação do código utilizando a ferramenta Doxygen.

## Funcionalidades do Sistema
O sistema implementado possibilita as seguintes operações (CRUD):
- Criar, ler, atualizar e excluir contas.
- Criar, ler, atualizar e excluir viagens.
- Criar, ler, atualizar e excluir destinos.
- Criar, ler, atualizar e excluir atividades.
- Criar, ler, atualizar e excluir hospedagens.

Além disso, o sistema assegura as seguintes funcionalidades:
- Consulta ao custo total de uma viagem.
- Listagem de viagens associadas a um viajante.
- Listagem de atividades associadas a um destino.
- Listagem de hospedagens associadas a um destino.

## Regras do Negócio
- `Imutabilidade da chave primária`:  Não é permitido atualizar campos que identificam registros (ex.: código).
- `Exclusão condicional`: Um registro só pode ser excluído caso não esteja associado a outro registro (ex.: excluir um destino somente se não houver atividades associadas).
- `Validação de datas`: A data de uma atividade deve estar contida entre as datas de início e término do destino associado.
- `Apresentação clara`: Todos os registros devem exibir seu código e nome em listagens.

## Estrutura do Projeto
- `entidades.hpp`: Declaração das classes de entidades do sistema, como Conta, Viagem, Destino, Atividade e Hospedagem.
- `dominios.hpp`: Definição dos domínios do sistema, como Codigo, Data, Nome, Senha, entre outros.
- `testesEntidade.hpp` e `testesDominio.hpp`: Declaração dos casos de teste para validar as regras de negócio e integridade dos domínios e entidades.
- `main.cpp`: Arquivo principal para a execução dos testes automatizados.

## Tecnologias Utilizadas

## Desenvolvedores
- Gabriel Caixeta
- Gustavo Cavalcanti
- João Henrique Antunes