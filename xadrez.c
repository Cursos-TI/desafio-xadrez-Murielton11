#include <stdio.h>

int main() {
    int i; // Variável de controle usada nos laços

    printf("=== SIMULACAO DE MOVIMENTO DAS PECAS DE XADREZ ===\n\n");

    // ================================================
    // 1) TORRE - Movimenta 5 casas para a DIREITA (usando for)
    // ================================================
    printf("TORRE (movendo 5 casas para a direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ================================================
    // 2) BISPO - Movimenta 5 casas na diagonal (cima e direita) (usando while)
    // ================================================
    printf("BISPO (movendo 5 casas na diagonal cima/direita):\n");
    i = 1;                    // reinicia o contador
    while (i <= 5) {
        printf("Cima Direita\n");
        i++;                  // i = i + 1
    }
    printf("\n");

    // ================================================
    // 3) RAINHA - Movimenta 8 casas para a ESQUERDA (usando do-while)
    // ================================================
    printf("RAINHA (movendo 8 casas para a esquerda):\n");
    i = 1;                    // reinicia o contador
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    printf("\nFim da simulacao.\n");
    return 0;
}
