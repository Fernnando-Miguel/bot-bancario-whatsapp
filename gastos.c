#include <stdio.h>
#include "gastos.h"
#include <time.h>
#include <string.h>

typedef struct
{
    char gasto[90];
    char horario[30];
    float valor;
} Gasto;

#define MAX_GASTOS 100

Gasto gastos[MAX_GASTOS];

int total_gastos = 0;

void adicionar_gasto()
{

    if (total_gastos >= MAX_GASTOS)

    {
        printf("Limite atingido!\n");

        return;
    }
    time_t agora;
    struct tm *info_hora;
    char buffer[30];
    agora = time(NULL);
    info_hora = localtime(&agora);
    strftime(buffer, 30, "%H:%M:%S", info_hora);

    printf("Digite seu gasto: \n");
    getchar();
    fgets(gastos[total_gastos].gasto, 90, stdin);
    strcpy(gastos[total_gastos].horario, buffer);
    printf("Digite o valor do seu gasto: \n");
    scanf("%f", &gastos[total_gastos].valor);
    total_gastos++;
    printf("Gasto adicionado\n");
}

void listar_gasto()
{
    if (total_gastos == 0)
    {
        printf("Erro!\nNenhum gasto listado\n");
        return;
    }
    for (int i = 0; i < total_gastos; i++)
    {
        printf("%d - %s | %s\n", i + 1, gastos[i].gasto, gastos[i].horario);
    }
}

float total_gasto()
{
    float soma = 0;
    for (int i = 0; i < total_gasto; i++)
    {
        soma += gastos[i].valor;
    }
    return soma;
}
void mostrar_total()
{
    printf("Total dos gastos: R$: %2.f\n", total_gasto());
}