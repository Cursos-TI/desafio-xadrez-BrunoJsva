#include <stdio.h>

int main()
{
    int torre;
    int bispo;
    int rainha;
    int cavalo = 1;

    printf("\n");
    for (torre = 0; torre < 5; torre++)
    {
        printf("A Torre moveu-se para direita!\n");
    }
    printf("\n");

    for (bispo = 0; bispo < 5; bispo++)
    {
        printf("O Bispo Moveu-se para cima e direita!\n");
    }
    printf("\n");

    for (rainha = 0; rainha < 8; rainha++)
    {
        printf("A Rainha moveu-se para esquerda!\n");
    }

    while (cavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("A cavalo moveu-se para baixo!\n");
        }
        printf("A cavalo moveu-se para esquerda!\n");
    }

    return 0;
}
