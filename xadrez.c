#include <stdio.h>

// Torre: movimento horizontal (direita)
void moverTorre(int movimento) {
    if (movimento > 0) {
        printf("A torre Moveu-se para a direita!\n");
        moverTorre(movimento - 1);
    }
}

// Bispo: movimento diagonal (cima + direita) com recursão e loops aninhados
void moverBispo(int vertical, int horizontal) {
    if (vertical > 0) {
        for (int i = 0; i < horizontal; i++) {
   
            printf("O Bispo Moveu-se para a direita!\n");
        }
        printf("O Bispo Moveu-se para cima!\n");
        moverBispo(vertical - 1, horizontal);
    }
}

// Rainha: movimento vertical (esquerda)
void moverRainha(int movimento) {
    if (movimento > 0) {
        printf("A rainha Moveu-se para a esquerda!\n");
        moverRainha(movimento - 1);
    }
}

// Cavalo: movimento em "L" (duas casas para cima e uma para a direita)
void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 1; j++) {
            if (j < 2) {
                printf("O cavalo Moveu-se para cima!\n");
                continue;
            }
            if (j == 2) {
                printf("O cavalo Moveu-se para direita!\n");
                break;
            }
        }
    }
}

int main() {
    int casasBispoVertical = 5;
    int casasBispoHorizontal = 1;
    int casasRainha = 8;
    int casasTorre = 5;
    int movimentosCavalo = 3;

    printf("----------MOVIMENTO DO BISPO----------\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);
    printf("--------------------------------------\n");

    printf("----------MOVIMENTO DA RAINHA---------\n");
    moverRainha(casasRainha);
    printf("--------------------------------------\n");

    printf("----------MOVIMENTO DA TORRE----------\n");
    moverTorre(casasTorre);
    printf("--------------------------------------\n");

    printf("----------MOVIMENTO DO CAVALO---------\n");
    moverCavalo(movimentosCavalo);
    printf("--------------------------------------\n");

    return 0;
}
