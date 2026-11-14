#include <stdio.h>

int main()
{
    int codProd[10] = {13, 10, 27, 81, 3, 96, 55, 74, 61, 32};
    int codVer, verificacao = 0, posicao = 0;

    printf("Digite o código o qual deseja verificar: ");
    scanf("%d", &codVer);

    for (int i = 0; i < 10; i++)
    {
        if (codVer == codProd[i])
        {
            verificacao = 1;
            posicao = i;
            break;
        }
    }

    if (verificacao == 1)
    {    
        printf("\nCódigo procurado: %d.\n", codVer);
        printf("Código encontrado na posição %d\n", posicao); 
    }   
    else
    {
        printf("\nCódigo procurado: %d\n", codVer);
        printf("Não está cadastrado.\n");
    }

    return 0;
}