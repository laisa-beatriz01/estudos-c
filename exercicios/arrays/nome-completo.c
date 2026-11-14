#include <stdio.h>

int main()
{
    char nome[49];

    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Olá, %s", nome);

    return 0;
}