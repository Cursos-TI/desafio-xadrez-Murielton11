#include <stdio.h>

/* ============================================================= */
/* 1) TORRE – movimento recursivo (5 casas para a direita)      */
/* ============================================================= */
void mover_torre_direita(int casas_restantes) {
    if (casas_restantes <= 0) {          // caso base
        return;
    }
    printf("Direita\n");
    mover_torre_direita(casas_restantes - 1); // chamada recursiva
}

/* ============================================================= */
/* 2) BISPO – duas versões                                      */
/*    a) Recursiva (5 casas na diagonal cima/direita)           */
/*    b) Com loops aninhados (mesmo movimento)                  */
/* ============================================================= */
void mover_bispo_recursivo(int casas_restantes) {
    if (casas_restantes <= 0) {
        return;
    }
    printf("Cima Direita\n");
    mover_bispo_recursivo(casas_restantes - 1);
}

void mover_bispo_loops(int total_casas) {
    int vertical, horizontal;
    // loop externo = movimento vertical (cima)
    for (vertical = 1; vertical <= total_casas; vertical++) {
        // loop interno = movimento horizontal (direita)
        for (horizontal = 1; horizontal <= total_casas; horizontal++) {
            if (vertical == horizontal) {   // só imprime quando está na diagonal
                printf("Cima Direita\n");
                break;                      // já imprimiu a casa da diagonal, sai do interno
            }
        }
    }
}

/* ============================================================= */
/* 3) RAINHA – movimento recursivo (8 casas para a esquerda)   */
/* ============================================================= */
void mover_rainha_esquerda(int casas_restantes) {
    if (casas_restantes <= 0) {
        return;
    }
    printf("Esquerda\n");
    mover_rainha_esquerda(casas_restantes - 1);
}

/* ============================================================= */
/* 4) CAVALO – movimento em "L" (2 cima + 1 direita)           */
/*    Usando loops aninhados, múltiplas variáveis e break/continue */
/* ============================================================= */
void mover_cavalo_L(int quantidade_L) {
    int i;
    for (i = 1; i <= quantidade_L; i++) {
        int passo;
        // Primeiro faz as 2 casas para cima
        for (passo = 1; passo <= 2; passo++) {
            printf("Cima\n");
        }
        // Depois faz 1 casa para a direita
        printf("Direita\n");

        // Se ainda não for o último movimento, separa visualmente
        if (i < quantidade_L) {
            printf("\n");   // linha em branco entre cada "L"
        }
    }
}

/* ============================================================= */
/* FUNÇÃO PRINCIPAL                                             */
/* ============================================================= */
int main() {
    printf("=== SIMULACAO AVANCADA DE MOVIMENTO DAS PECAS ===\n\n");

    // 1) Torre – recursiva
    printf("TORRE (5 casas para a direita - recursivo):\n");
    mover_torre_direita(5);
    printf("\n");

    // 2) Bispo – versão recursiva
    printf("BISPO (5 casas diagonal - recursivo):\n");
    mover_bispo_recursivo(5);
    printf("\n");

    // 2b) Bispo – versão com loops aninhados
    printf("BISPO (5 casas diagonal - loops aninhados):\n");
    mover_bispo_loops(5);
    printf("\n");

    // 3) Rainha – recursiva
    printf("RAINHA (8 casas para a esquerda - recursivo):\n");
    mover_rainha_esquerda(8);
    printf("\n");

    // 4) Cavalo – movimento em L (exemplo: 3 movimentos completos em L)
    printf("CAVALO (3 movimentos em L - 2 cima + 1 direita):\n");
    mover_cavalo_L(3);

    printf("\nFim da simulacao.\n");
    return 0;
}
