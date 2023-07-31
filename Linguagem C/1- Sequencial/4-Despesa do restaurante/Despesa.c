#include <stdio.h>

/*
4) Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
Assuma que a conta será dividida igualmente.
*/

int main() {
    int numPessoas;
    float despesa, gorjeta, total, Unitario;

    printf("===========Seja bem vindo ao programa do restaurante===========\n\n");
    printf("Digite o número de pessoas para dividir a conta:\n");
    scanf("%i", &numPessoas);

    printf("Digite o valor das despesas:\n");
    scanf("%f", &despesa);

    printf("Digite o valor da gorjeta:\n");
    scanf("%f", &gorjeta);

    total = despesa * (1 + gorjeta / 100);
    Unitario = total / numPessoas;

    printf("Valor total: %.2f R$\n", total);
    printf("Valor que cada um deve pagar: %.2f R$\n", Unitario);

    return 0;
}
