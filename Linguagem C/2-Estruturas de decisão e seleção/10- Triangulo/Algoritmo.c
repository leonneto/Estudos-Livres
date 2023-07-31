#include <stdio.h>

/*
10) Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
formam um triângulo”.
*/

int main() {
    float a, b, c;

    printf("Digite o valor do lado a: ");
    scanf("%f", &a);

    printf("Digite o valor do lado b: ");
    scanf("%f", &b);

    printf("Digite o valor do lado c: ");
    scanf("%f", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if (a == b && b == c) {
            printf("Formam um triângulo equilátero.\n");
        } else if (a == b || a == c || b == c) {
            printf("Formam um triângulo isósceles.\n");
        } else {
            printf("Formam um triângulo escaleno.\n");
        }
    } else {
        printf("Não formam um triângulo.\n");
    }

    return 0;
}
