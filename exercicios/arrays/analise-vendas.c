#include <stdio.h>

float calcularTotal(float vendas[], int tamanho)
{
    float soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += vendas[i];
    }

    return soma;
}

float calcularMedia(float vendas[], int tamanho)
{
    float media;
    float soma = calcularTotal(vendas, 10);

    media = soma / tamanho;

    return media;
}

float encontrarMaior(float vendas[], int tamanho)
{
    float maior = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (i == 0)
        {
            maior = vendas[i];
        }
        else
        {
            if (vendas[i] > maior)
            {
                maior = vendas[i];
            }
        }
    }

    return maior;
}

float encontrarMenor(float vendas[], int tamanho)
{
    float menor = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (i == 0)
        {
            menor = vendas[i];
        }
        else
        {
            if (vendas[i] < menor)
            {
                menor = vendas[i];
            }
        }
    }

    return menor;
}

int contarAcima(float vendas[], int tamanho)
{
    int acimaMedia = 0;
    float media = calcularMedia(vendas, tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        if (vendas[i] > media)
        {
            acimaMedia += 1;
        }
    }

    return acimaMedia;
}

int main()
{   
    float vendas[10];
    float totalVendido, media, maiorVenda, menorVenda;
    int vendasAcimaMedia;
 
    printf("\n===============================================\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Vendas realizadas pelo %d° vendedor: R$ ", i+1);
        scanf("%f", &vendas[i]);
    }

    totalVendido = calcularTotal(vendas, 10);
    media = calcularMedia(vendas, 10); 
    maiorVenda = encontrarMaior(vendas, 10);
    menorVenda = encontrarMenor(vendas, 10);
    vendasAcimaMedia = contarAcima(vendas, 10);

    printf("\n===============================================\n");
    printf("Total vendido: R$%.2f\n", totalVendido);
    printf("Média: R$%.2f\n", media);
    printf("Maio venda: R$%.2f\n", maiorVenda);
    printf("Menor venda: R$%.2f\n", menorVenda);
    printf("Quantidade de vendas acima da média: %d\n", vendasAcimaMedia);

    return 0;
}