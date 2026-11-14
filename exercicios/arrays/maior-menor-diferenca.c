#include <stdio.h>

int main()
{
    float temperaturas[10];
    float maior, menor, diferenca;

    for (int i = 0; i < 10; i++)
    {
        printf("Temperatura do %d° momento (°C): ", i+1);
        scanf("%f", &temperaturas[i]);

        if (i == 0)
        {
            maior = temperaturas[i];
            menor = temperaturas[i];
        }
        else
        {
            if (temperaturas[i] > maior)
            {
                maior = temperaturas[i];
            }

            if (temperaturas[i] < menor)
            {
                menor = temperaturas[i];
            }
        }
    }

    diferenca = maior - menor;

    printf("\n===========================\n");
    printf("Amplitude térmica = %.1f°C", diferenca);

    return 0;
}