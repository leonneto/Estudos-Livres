#include <stdio.h>

/*
8) Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para
isso a estrutura de seleção switch.
Obs.: Considere fevereiro como tendo 28 dias.
*/

int main() {
    int numeroMes;

    printf("Digite o número do mês (1 a 12): ");
    scanf("%d", &numeroMes);

    switch (numeroMes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("O mês %d tem 31 dias.\n", numeroMes);
            break;
        case 4: case 6: case 9: case 11:
            printf("O mês %d tem 30 dias.\n", numeroMes);
            break;
        case 2:
            printf("O mês %d tem 28 dias.\n", numeroMes);
            break;
        default:
            printf("Mês Inválido.\n");
            break;
    }

    return 0;
}
