#include <stdio.h>

/*
7) Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
conversão para horas, minutos e segundos.
*/

int main() {
    int segundos, horas, minutos, resto;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600; 
    resto = segundos % 3600;
    minutos = resto / 60; 
    segundos = resto % 60;

    printf("Conversão para horas, minutos e segundos: %d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
