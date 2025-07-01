#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a Direita) - usando FOR
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo (5 casas na Diagonal: Cima Direita) - usando WHILE
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // Movimento da Rainha (8 casas para a Esquerda) - usando DO-WHILE
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    printf("\n");

    // Movimento do Cavalo (2 casas para Baixo, 1 para a Esquerda)
    // Usando loops aninhados: for + while

    printf("Movimento do Cavalo:\n");

    const int movimentosParaBaixo = 2;
    const int movimentosParaEsquerda = 1;

    // Loop externo: for - movimenta para baixo
    for (int i = 0; i < movimentosParaBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop interno: while - movimenta para a esquerda
    int cont = 0;
    while (cont < movimentosParaEsquerda) {
        printf("Esquerda\n");
        cont++;
    }

    return 0;
}
