#include <stdio.h>

/* =========================
   Funções Recursivas
   ========================= */

// Torre: move N casas para a Direita (recursivo)
void moverTorreDireitaRec(int restante) {
    if (restante <= 0) return;
    printf("Direita\n");
    moverTorreDireitaRec(restante - 1);
}

// Bispo: move N passos na diagonal Cima+Direita (recursivo)
// Como a saída deve ser por direção, imprimimos "Cima" e depois "Direita" a cada passo.
void moverBispoCimaDireitaRec(int restante) {
    if (restante <= 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoCimaDireitaRec(restante - 1);
}

// Rainha: move N casas para a Esquerda (recursivo)
void moverRainhaEsquerdaRec(int restante) {
    if (restante <= 0) return;
    printf("Esquerda\n");
    moverRainhaEsquerdaRec(restante - 1);
}

/* =========================
   Bispo com Loops Aninhados
   - Externo: vertical (Cima)
   - Interno: horizontal (Direita)
   Cada iteração do laço externo representa um passo diagonal.
   ========================= */
void moverBispoCimaDireitaLoops(int passos) {
    for (int v = 1; v <= passos; v++) {
        // movimento vertical (cima)
        printf("Cima\n");
        // movimento horizontal (direita) — 1 por passo diagonal
        for (int h = 1; h <= 1; h++) {
            printf("Direita\n");
        }
    }
}

/* =========================
   Cavalo com Loops Complexos
   - Objetivo: 2 para Cima + 1 para Direita
   - Usa loops aninhados e controle de fluxo (continue/break)
   - Múltiplas variáveis para contar movimentos
   ========================= */
void moverCavaloCimaDireitaComplexo(void) {
    const int precisaCima = 2;
    const int precisaDireita = 1;

    int fezCima = 0;
    int fezDireita = 0;

    // Laço controlador geral (poderia ser um for com condição verdadeira e break de saída)
    for (int etapa = 1; ; etapa++) {
        // Fase vertical: subir até completar 2
        // Usamos um while aninhado para ilustrar controle fino do fluxo
        while (1) {
            // Se já cumpriu a parte vertical, sai desta fase
            if (fezCima >= precisaCima) break;

            // Se por algum motivo a etapa é "par" e já subimos ao menos 1,
            // demonstre uso de 'continue' (ex.: pular uma checagem supérflua)
            if (etapa % 2 == 0 && fezCima > 0) {
                // pula para a próxima iteração do while
                continue;
            }

            printf("Cima\n");
            fezCima++;

            // Assim que terminarmos a parte vertical exatamente, quebramos para ir ao horizontal
            if (fezCima == precisaCima) break;
        }

        // Fase horizontal: direita até completar 1
        for (int aux = fezDireita; aux < precisaDireita; aux++) {
            printf("Direita\n");
            fezDireita++;

            // Se atingimos a cota horizontal, podemos quebrar
            if (fezDireita == precisaDireita) break;
        }

        // Condição de saída do laço controlador
        if (fezCima == precisaCima && fezDireita == precisaDireita) {
            break;
        }

        // Caso contrário, segue para próxima "etapa"
        // (na prática, não será necessário mais de uma iteração)
    }
}

int main() {
    // ================= TORRE (recursivo) =================
    int casasTorre = 5;
    printf("=== Movimento da Torre (recursivo) ===\n");
    moverTorreDireitaRec(casasTorre);

    // ================= BISPO (recursivo) =================
    int passosBispo = 5;
    printf("\n=== Movimento do Bispo (recursivo) ===\n");
    moverBispoCimaDireitaRec(passosBispo);

    // =========== BISPO (loops aninhados) =================
    // Externo = vertical (Cima), Interno = horizontal (Direita)
    printf("\n=== Movimento do Bispo (loops aninhados) ===\n");
    moverBispoCimaDireitaLoops(passosBispo);

    // ================= RAINHA (recursivo) ================
    int casasRainha = 8;
    printf("\n=== Movimento da Rainha (recursivo) ===\n");
    moverRainhaEsquerdaRec(casasRainha);

    // ======== CAVALO (loops complexos + fluxo) ===========
    // Duas casas para Cima e uma para Direita
    printf("\n=== Movimento do Cavalo (loops complexos) ===\n");
    moverCavaloCimaDireitaComplexo();

    printf("\nMovimentacao concluida!\n");
    return 0;
}
