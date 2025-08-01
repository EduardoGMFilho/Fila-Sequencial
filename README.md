# Fila-Sequencial


Este projeto contém implementações da estrutura de dados Fila Sequencial nas linguagens Python e C. O objetivo foi aplicar e consolidar o conhecimento sobre a teoria de filas, explorando como essa estrutura se comporta em diferentes ambientes de programação.


Uma fila sequencial é uma estrutura de dados linear que segue o princípio FIFO (First In, First Out), ou seja, o primeiro elemento a ser inserido é o primeiro a ser removido. Ela se assemelha a uma fila de pessoas em um banco ou supermercado: quem chega primeiro é atendido primeiro. A principal diferença de uma fila sequencial para outras filas é que ela é implementada usando um array ou um bloco contíguo de memória. Isso a torna eficiente para acesso, mas com a desvantagem de ter um tamanho fixo, que precisa ser definido no momento da criação.


Conhecimentos Adquiridos
Ao desenvolver este projeto, foi possível aprofundar os seguintes conceitos:

Implementação em Linguagens Distintas: Entender como os conceitos abstratos de uma fila se traduzem em implementações concretas em Python  e em C. Isso mostrou a importância de gerenciar a memória e o tamanho da fila manualmente em C.

Princípio FIFO na Prática: Aplicar a lógica de primeiro a entrar, primeiro a sair, garantindo que as operações de enqueue e dequeue sigam corretamente essa ordem.

Gerenciamento de Índices: Em C, foi crucial gerenciar os índices de início (front) e fim (rear) da fila dentro do array para evitar que a fila "vazasse" ou que elementos fossem acessados de forma incorreta.

Modularização do Código: A implementação em C foi dividida entre o arquivo de cabeçalho (.h) para as declarações e o arquivo de implementação (.c) para as definições, reforçando a importância da modularização e reutilização de código.
