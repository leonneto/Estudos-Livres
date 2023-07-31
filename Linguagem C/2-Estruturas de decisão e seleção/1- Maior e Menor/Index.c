#include <stdio.h>

/*
1) Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.
*/

int main() {
    int a, b, c;
    int maior, menor;

    printf("Digite três valores: ");
    scanf("%d %d %d", &a, &b, &c);

    maior = a;
    menor = a;

    if (b < menor) {
        menor = b;
    }

    if (b > maior) {
        maior = b;
    }

    if (c < menor) {
        menor = c;
    }

    if (c > maior) {
        maior = c;
    }

    printf("O menor valor é: %d\n", menor);
    printf("O maior valor é: %d\n", maior);

    return 0;
}
