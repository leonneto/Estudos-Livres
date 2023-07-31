#include <stdio.h>

/*
3) Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar.
*/

int main() {
    int a, b;
    
    printf("Digite o valor para a variável 'a': ");
    scanf("%d", &a);

    printf("Digite o valor para a variável 'b': ");
    scanf("%d", &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("Valor da variável 'a' após a troca: %d\n", a);
    printf("Valor da variável 'b' após a troca: %d\n", b);

    return 0;
}
