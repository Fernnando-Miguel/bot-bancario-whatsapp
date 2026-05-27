#include <stdio.h>
#include "gastos.h"

typedef struct
{
    char gasto[90];
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

    printf("Digite seu gasto: \n");
    fgets(gastos[total_gastos].gasto, 90, stdin);
    total_gastos++;
    printf("Gasto adicionado\n");
}
