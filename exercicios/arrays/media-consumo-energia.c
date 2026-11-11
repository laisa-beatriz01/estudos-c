#include <stdio.h>

int main()
{
    float consumo[7];
    float soma = 0;
    float media;

    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Digite o consumo de energia (kWh) do dia %d: ", i+1);
        scanf("%f", &consumo[i]);

        soma += consumo[i];
    }
    
    media = soma / 7;

    printf("\n-------------------------------------------------------------\n");
    printf("A média do consumo de energia durante 7 dias foi de %.2f kWh.", media);
}