#include <stdio.h>

int main()
{
    int codProd[10] = {13, 10, 27, 81, 3, 96, 55, 74, 61, 32};
    int codVer, verificacao = 0;

    printf("Digite o código o qual deseja verificar: ");
    scanf("%d", &codVer);

    for (int i = 0; i < 10; i++)
    {
        if (codVer == codProd[i])
        {
            verificacao = 1;
            break;
        }
    }

    verificacao == 1 
        ? printf("\n%d está cadastrado.\n", codVer) 
        : printf("\n%d não está cadastrado.\n", codVer);
    return 0;
}