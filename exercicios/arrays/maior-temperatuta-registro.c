#include <stdio.h>

int main()
{
    int temperaturas[10];
    int maior;

    printf("-----------------------------------------\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Temperatura do dia %d: ", i+1);
        scanf("%d", &temperaturas[i]);

        if (i == 0)
        {
            maior = temperaturas[i];
        }

        else
        {
            if (temperaturas[i] > maior)
            {
                maior = temperaturas[i];
            }
        }
    }
    printf("\n-----------------------------------------\n");
    printf("A maior temperatura atingida foi de %d.", maior);
}