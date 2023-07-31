#include <stdio.h>
#include <ctype.h>

/*
7) Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.
*/

int main() {
    char caracter;

    printf("Digite um caracter: ");
    scanf(" %c", &caracter);

    caracter = tolower(caracter); 

    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
        printf("O caracter '%c' é uma vogal.\n", caracter);
    } else {
        printf("O caracter '%c' não é uma vogal.\n", caracter);
    }

    return 0;
}
