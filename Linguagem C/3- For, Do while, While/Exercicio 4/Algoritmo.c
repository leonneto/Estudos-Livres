#include <stdio.h>
/*

4) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
Restrição:
→ O bloco de repetição deve executar no máximo 500 vezes.
*/
int main() {
    int soma1 = 0;
    int soma2 = 0;


    for (int num = 1; num <= 500; num++) {
        if (num % 2 != 0) { 
            soma1 += num; 
        }
    }

    for (int num = 501; num <= 1000; num++) {
        if (num % 2 != 0) { 
            soma2 += num; 
        }
    }

    int soma_total = soma1 + soma2;

    printf("A soma dos números impares entre 1 e 1000 é: %i\n", soma_total);

    return 0;
}
