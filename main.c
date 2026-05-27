#include <stdio.h>

void adiconar_gasto();

int main()
{
    int opcao = 1;

        while (opcao != 0) {
    {
        printf("\n===SISTEMA DE GASTOS===\n");
            printf("1 - Adicionar Gasto \n");
        printf("0 - Sair \n");
        printf("Escolha: \n");
        scanf("%d", &opcao);

        switch (opcao)
        {

        case 1:

            adicionar_gasto();

            break;

        case 0:
            printf("Saindo...\n");

            break;

        default:
            break;
        }
    }
    return 0;
}