#include <stdio.h>

int main()
{

    float temperaturas[7];
    float soma = 0;
    int dias = 0;
    float *p = &soma;
    float media;
    float maior, menor;

    for (int i = 0; i < 7; i++)
    {
        printf("Informe a temperatura do dia %d: ", i+1);
        scanf("%f", &temperaturas[i]);
        *p += temperaturas[i];
        
        if (i == 0)
        {
            maior = temperaturas[0];
            menor = temperaturas[0];
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

    media = *p / 7;

    for (int i = 0; i < 7; i++)
    {
        if (temperaturas[i] > media)
        {
            dias = dias + 1;
        }
    }

    printf("\nTemperaturas registradas: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%.2f ", temperaturas[i]);
    }
    printf("\nMédia = %.2f\n", media);
    printf("MAIOR temperatura: %.2f\n", maior);
    printf("MENOR temperatura: %.2f\n", menor);
    printf("Quantidade de dias que ficaram acima de %.2f: %d", media, dias);

    return 0;
}