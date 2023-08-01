#include <stdio.h>
/*
3) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
*/
int main() {
    int soma = 0;

    for (int num = 1; num <= 1000; num++) {
        if (num % 2 != 0) { 
            soma += num; 
        }
    }

    printf("A soma dos números impares entre 1 e 1000 é: %i\n", soma);

    return 0;
}
