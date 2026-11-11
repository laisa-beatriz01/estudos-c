#include <stdio.h>

int main()
{
    int pecas[5];
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Quantidade de peças produzidas no dia %d: ", i+1);
        scanf("%d", &pecas[i]);

        total += pecas[i];
    }

    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Produção do dia:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Dia %d: %d peças\n", i+1, pecas[i]);
    }
    printf("\nTotal de peças produzidas durante 5 dias: %d\n", total);

    return 0;
}