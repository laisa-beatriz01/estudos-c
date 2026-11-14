#include <stdio.h>

int main()
{
    int respostas[20] = {2, 4, 5, 1, 1, 4, 5, 5, 1, 2, 2, 3, 3, 2, 1, 5, 4, 3, 1, 2};
    int contador = 0;
    int valorProcurado;

    printf("Valor procurado: ");
    scanf("%d", &valorProcurado);

    for (int i = 0; i < 20; i++)
    {
        if (valorProcurado == respostas[i])
        {
            contador += 1;
        }
    }

    printf("\nOcorrências: %d\n", contador);

    return 0;
}