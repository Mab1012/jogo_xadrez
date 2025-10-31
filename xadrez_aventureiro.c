#include <stdio.h>

int main() {
    // ============================================================
    // MOVIMENTO DA TORRE
    // ============================================================
    int casasTorre = 5;
    printf("=== Movimento da Torre ===\n");
    printf("A Torre vai se mover %d casas para a direita.\n\n", casasTorre);

    for (int i = 1; i <= casasTorre; i++) {
        printf("A Torre avança %d casa(s) para a direita...\n", i);
    }

    printf("Torre finalizou seu movimento!\n");


    // ============================================================
    // MOVIMENTO DO BISPO
    // ============================================================
    int casasBispo = 5;
    int i = 1;

    printf("\n=== Movimento do Bispo ===\n");
    printf("O Bispo vai se mover %d casas na diagonal (cima e direita).\n\n", casasBispo);

    while (i <= casasBispo) {
        printf("O Bispo se move na diagonal: Cima e Direita (casa %d)\n", i);
        i++;
    }

    printf("Bispo chegou ao seu destino!\n");


    // ============================================================
    // MOVIMENTO DA RAINHA
    // ============================================================
    int casasRainha = 8;
    int j = 1;

    printf("\n=== Movimento da Rainha ===\n");
    printf("A Rainha vai se mover %d casas para a esquerda.\n\n", casasRainha);

    do {
        printf("A Rainha desliza graciosamente %d casa(s) para a esquerda...\n", j);
        j++;
    } while (j <= casasRainha);

    printf("Rainha parou! Fim do movimento.\n");


    // ============================================================
    // MOVIMENTO DO CAVALO
    // ============================================================
    int movimentoVertical = 2;  // duas casas para baixo
    int movimentoHorizontal = 1; // uma casa para a esquerda

    printf("\n=== Movimento do Cavalo ===\n");
    printf("O Cavalo vai se mover em 'L': %d para baixo e %d para a esquerda.\n\n",
           movimentoVertical, movimentoHorizontal);

    // Loop externo controla o movimento vertical (para baixo)
    for (int baixo = 1; baixo <= movimentoVertical; baixo++) {
        printf("O Cavalo salta %d casa(s) para BAIXO!\n", baixo);
    }

    // Loop interno controla o movimento horizontal (para a esquerda)
    int esquerda = 1;
    while (esquerda <= movimentoHorizontal) {
        printf("E agora, o Cavalo completa o 'L' movendo %d casa(s) para a ESQUERDA!\n", esquerda);
        esquerda++;
    }

    printf("O Cavalo terminou seu movimento com sucesso!\n");

    // ============================================================
    printf("\nTodos os movimentos foram concluídos com sucesso!\n");
    printf("Fim da simulação de peças de xadrez.\n");

    return 0;
}
