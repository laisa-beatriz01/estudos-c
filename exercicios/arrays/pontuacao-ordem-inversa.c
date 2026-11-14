#include <stdio.h>

int main()
{
    float pontos[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Pontuação do %d° jogador: ", i+1);
        scanf("%f", &pontos[i]);
    }

    printf("\n-------- PONTUAÇÕES --------\n");
    
    for (int i = 4; i >= 0; i--)
    {
        printf("%d° jogador: %.1f\n", i+1, pontos[i]);
    }

    return 0;
}

