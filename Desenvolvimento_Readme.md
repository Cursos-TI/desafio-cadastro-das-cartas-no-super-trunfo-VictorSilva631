Prezado avaliador, esse arquivo readme tem como objetivo explicar o desenvolvimento do presente código "Desenvolvimento_CartasSuperTrunfo.c"

Desenvolvido em linguagem C. esse projeto tem o objetivo de implementar o cadastro de cartas representando cidades de um país, onde cada carta possui atributos que serão cadastrados, exibidos e comparados em três niveis: Novato, Aventueiro e Mestre.

Nível Novato - Cadastro Básico
O programa solicita os dados de duas cartas:
  - Código (ex: A01)
  - Nome da cidade
  - População (int)
  - Área (float)
  - PIB (float)
  - Nº de pontos turísticos (int)
Os dados são lidos via `scanf` e exibidos com `printf`.

Nível Aventureiro - Atributos Calculados
Calcula dois novos atributos com base nos dados inseridos:
  - Densidade Populacional: População / Área
  - PIB per Capita: PIB / População

Nível Mestre - Comparativo e Super Poder
Implementa:
  - Comparativo entre os atributos das duas cartas:
    - 1: carta 1 vence
    - 0: carta 2 vence
  - Para densidade populacional, vence a menor
  - Para os demais, vence a maior
- Calcula o Super Poder da carta: Super Poder = População + Área + PIB + Pontos Turísticos + PIB per Capita + (1 / Densidade)

Apresenta o valor do Super Poder de ambas as cartas e indica qual é superior.

**Estrutura do código**

O arquivo principal segue a seguinte estrutura:
1. Declaração de variáveis para os atributos das duas cartas.
2. Leitura de dados do usuário com `scanf`.
3. Exibição dos dados inseridos com `printf`.
4. Cálculo de atributos adicionais (nível Aventureiro).
5. Cálculo e exibição do Super Poder e comparações (nível Mestre).
