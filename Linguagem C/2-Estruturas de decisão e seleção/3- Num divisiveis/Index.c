#include <stdio.h>

/*
3) Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por
5, ou se não é divisível por nenhum deles.
*/

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero eh divisivel por 2.\n");
    }

    if (numero % 3 == 0) {
        printf("O numero eh divisivel por 3.\n");
    }

    if (numero % 5 == 0) {
        printf("O numero eh divisivel por 5.\n");
    }

    if (numero % 2 != 0 && numero % 3 != 0 && numero % 5 != 0) {
        printf("O numero nao eh divisivel por 2, 3 ou 5.\n");
    }

    return 0;
}
