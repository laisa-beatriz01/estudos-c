#include <stdio.h>

void verificarVagas(int vagas)
{
    printf("Há %d vagas disponíveis.\n", vagas);
}

int registrarEntrada(int *vagas)
{
    if (*vagas < 1)
    {
        printf("Estacionamento lotado.\n");
        return 0;
    }

    printf("Vaga registrada com sucesso.\n");
    *vagas = *vagas - 1;
    return 1;
}

int registrarSaida(int *vagas)
{
    if (*vagas >= 20)
    {
        printf("Não há nenhum veículo estacionado.\n");
        return 0;
    }

    printf("Saída do veículo registrada com sucesso.\n");
    *vagas = *vagas + 1;
    return 1;
}

int calcularValor(int horas, float *pagamento)
{
    if (horas == 1)
    {
        *pagamento = 8;
        printf("Você deverá pagar R$%.2f", *pagamento);

        return 1;
    } 

    else if (horas >= 2)
    {
        *pagamento = 8 + ((horas - 1)* 5);
        if (horas > 8)
        {
            *pagamento = *pagamento * 0.90;
        }
        printf("Você deverá pagar R$%.2f", *pagamento);

        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    int option;
    int vagas = 20;
    int horas;
    float pagamento;
    

    do
    {
        printf("\n=-=-=-=-=-=-= MENU =-=-=-=-=-=-=\n");
        printf("[1] - Registrar entrada de veículo\n");
        printf("[2] - Registrar saída de veículo\n");
        printf("[3] - Consultar vagas disponíveis\n");
        printf("[4] - Consultar faturamento\n");
        printf("[5] - Exibir relatório do estacionamento\n");
        printf("[0] - Encerrar sistema\n");
        printf("Selecione uma opção válida: ");
        scanf("%d", &option);

        switch (option)
        {
        case 0:
            printf("\nEncerrando o sistema...\n");
            break;
        case 1:
            printf("----------------------------------------\n");
            printf("Verificando...\n");
            registrarEntrada(&vagas);
            
            break;
        
        case 2:
            printf("----------------------------------------\n");
            printf("Verificando...\n");
            registrarSaida(&vagas);
            break;
            
        case 3:
            printf("----------------------------------------\n");            
            printf("Verificando...\n");
            verificarVagas(vagas);
            break;

        case 4:
            printf("----------------------------------------\n");  
            printf("Informe a quantidade de horas que o veúculo ficou estacionado: ");
            scanf("%d", &horas);    

            if (horas < 1)
            {
                printf("Infome uma quantidade de horas válidas.\n");
                break;
            }

            printf("Verificando...\n");
            calcularValor(horas, &pagamento);
            break;

        case 5:
            printf("----------------------------------------\n");
            break;

        default:
            printf("Opção inválida. Tente novamente\n");
            continue;
        }

    } while (option != 0);
    
    return 0;
}