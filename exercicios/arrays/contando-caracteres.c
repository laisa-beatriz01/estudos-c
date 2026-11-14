#include <stdio.h>

int main()
{
    char codigo[30];
    int contador = 0;
    int i = 0;

    printf("Digite seu código: ");
    scanf("%29s", codigo);

    while (codigo[i] != '\0')
    {
        contador ++;
        i ++;
    }
    
    printf("\nQuantidade de caracteres: %d\n", contador);

    return 0;
}