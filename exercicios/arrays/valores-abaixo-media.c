#include <stdio.h>

int main()
{
    float vendas[10];
    float media, soma = 0;
    int vendasAbaixoMedia = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("\nValor da %dº venda: ", i+1);
        scanf("%f", &vendas[i]);

        soma += vendas[i];
    }

    media = soma / 10;

    for (int i = 0; i < 10; i++)
    {
        if (vendas[i] < media)
        {
            vendasAbaixoMedia += 1;
        }
    }

    printf("\n========================================\n");
    printf("Quantidade de vendas abaixo da média: %d\n", vendasAbaixoMedia);

    return 0;
}