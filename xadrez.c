#include <stdio.h>

/// Movimento da Torre (com recursão)
void moverTorre(int casas) {
    if (casas <= 0) return; // Quando não tiver mais casas pra mover, para
    printf("Direita\n"); // A torre vai pra direita
    moverTorre(casas - 1); // Chama a função de novo pra mover mais uma casa
}

/// Movimento do Bispo (recursivo)
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n"); // O bispo anda na diagonal: cima e direita
    moverBispoRecursivo(casas - 1);
}

/// Movimento do Bispo (com loops aninhados)
void moverBispoComLoops(int casas) {
    for (int v = 0; v < casas; v++) { // movimento vertical
        for (int h = 0; h < 1; h++) { // movimento horizontal (só 1 por vez)
            printf("Cima Direita\n"); // imprime a direção
        }
    }
}

/// Movimento da Rainha (com recursão)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n"); // A rainha está indo pra esquerda
    moverRainha(casas - 1); // Chama a função de novo pra repetir o movimento
}

/// Movimento do Cavalo (com loops aninhados)
void moverCavalo() {
    int vertical = 2;  // duas casas pra cima
    int horizontal = 1; // uma casa pra direita

    printf("Movimento do Cavalo:\n");

    // Loop que vai subir 2 vezes
    for (int i = 0; i < 3; i++) {
        if (i >= vertical) break; // para depois de subir duas vezes
        printf("Cima\n");

        // Agora faz o movimento pra direita
        for (int j = 0; j < 2; j++) {
            if (j == 1) {
                printf("Direita\n");
                break; // já andou pra direita, pode sair
            }
            continue; // pula pra próxima repetição se não for o movimento certo
        }
    }
}

int main() {
    // Número de casas que cada peça vai andar
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Bispo
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    printf("Movimento do Bispo (loops aninhados):\n");
    moverBispoComLoops(casasBispo);
    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Cavalo
    moverCavalo();

    return 0;
}
