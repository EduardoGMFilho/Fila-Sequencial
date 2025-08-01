#include <stdio.h>
#include "fila.h"

int main() {
    Fila f;
    int valor;

    inicializarFila(&f);

    inserir(&f, 10);
    inserir(&f, 20);
    inserir(&f, 30);
    inserir(&f, 40);
    inserir(&f, 50);

    if (!inserir(&f, 60))
        printf("Fila cheia. Não é possível inserir 60.\n");

    if (consultarInicio(&f, &valor))
        printf("Início da fila: %d\n", valor);

    if (remover(&f, &valor))
        printf("Removido do início: %d\n", valor);

    inserir(&f, 60);
    printf("Inserido 60 após remoção.\n");

    while (!estaVazia(&f)) {
        remover(&f, &valor);
        printf("Removido: %d\n", valor);
    }

    if (estaVazia(&f))
        printf("Fila agora está vazia.\n");

    return 0;
}
