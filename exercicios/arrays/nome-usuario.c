#include <stdio.h>

int main()
{
    char nome[20];

    printf("Nome: ");
    scanf("%19s", nome);

    printf("Olá, %s!", nome);

    return 0;
}