#include <stdio.h>

int main()
{
    int umidadePercentual[10];

    printf("\n=-=-=-= PERCENTUAIS DE UMIDADE =-=-=-=\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Percentual de umidade do %d° dia: ", i+1);
        scanf("%d", &umidadePercentual[i]);

        if (umidadePercentual[i] > 100)
        {
            umidadePercentual[i] = 100;
        }

        if (umidadePercentual[i] < 0)
        {
            umidadePercentual[i] = 0;
        }
    }

    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%i° dia: %d\n", i+1, umidadePercentual[i]);
    }

    return 0;
}   
