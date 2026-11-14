#include <stdio.h>

int main()
{
    int atendimentos[7];
    float media;
    int maior, menor, diasAcimaMedia = 0, somaTotal = 0;


    for (int i = 0; i < 7; i++)
    {
        printf("Quantidade de atendimentos do dia %d: ", i+1);
        scanf("%d", &atendimentos[i]);

        somaTotal += atendimentos[i];

        if(i == 0)
        {
            maior = atendimentos[i];
            menor = atendimentos[i];
        }
        else
        {
            if (atendimentos[i] > maior)
            {
                maior = atendimentos[i];
            }

            if (atendimentos[i] < menor)
            {
                menor = atendimentos[i];
            }
        }
    }

    media = somaTotal / 7.0;

    for (int i = 0; i < 7; i++)
    {
        if (atendimentos[i] > media)
        {
            diasAcimaMedia += 1;
        }
    }

    printf("\n========================================================\n");
    printf("Total de atendimentos: %d\n", somaTotal);
    printf("Média diária: %.2f\n", media);
    printf("Maior quantidade de atendimentos: %d\n", maior);
    printf("Menor quantidade de atendimentos: %d\n", menor);
    printf("Quantidade de dias com atendimentos acima da média: %d\n", diasAcimaMedia);
    
    return 0;
}