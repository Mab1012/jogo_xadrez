#include <stdio.h>

int main() {
    // ---------------- TORRE ----------------
    // A Torre se move em linha reta (horizontal ou vertical)
    // Vamos simular 5 casas para a direita usando o loop FOR

    int casasTorre = 5;
    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // ---------------- BISPO ----------------
    // O Bispo se move em diagonal (exemplo: cima e direita)
    // Vamos simular 5 casas na diagonal superior direita usando WHILE

    int casasBispo = 5;
    int i = 1;
    printf("\n=== Movimento do Bispo ===\n");
    while (i <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    // ---------------- RAINHA ----------------
    // A Rainha pode se mover em qualquer direção
    // Vamos simular 8 casas para a esquerda usando DO-WHILE

    int casasRainha = 8;
    int j = 1;
    printf("\n=== Movimento da Rainha ===\n");
    do {
        printf("Casa %d: Esquerda\n", j);
        j++;
    } while (j <= casasRainha);

    printf("\nMovimentação concluída!\n");

    return 0;
}
