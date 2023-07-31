#include <stdio.h>

/*
5) O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg)
pela altura (h em metros) elevada ao quadrado (IMC= m/h2). Escreva um programa que leia o peso
e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de acordo
com a tabela abaixo:

IMC Interpretação
Menor que 18,5 Abaixo do peso
Entre 18,5 e menor que 25 Peso normal
Entre 25 e menor que 30 Sobrepeso
Entre 30 e menor que 35 Obesidade grau 1
Entre 35 e menor que 40 Obesidade grau 2
Maior ou igual a 40 Obesidade grau 3
*/

int main() {
    float altura, peso, IMC = 0;

    printf("====Seja bem vindo(a) ao sistema de Indice de Massa Corporal====\n");

    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);

    printf("Digite o seu peso em kg: ");
    scanf("%f", &peso);

    IMC = peso / (altura * altura);

    printf("Seu IMC: %.2f\n", IMC);

    if (IMC < 18.5) {
        printf("Abaixo do peso\n");
    } else if (IMC < 25) {
        printf("Peso normal\n");
    } else if (IMC < 30) {
        printf("Sobrepeso\n");
    } else if (IMC < 35) {
        printf("Obesidade grau 1\n");
    } else if (IMC < 40) {
        printf("Obesidade grau 2\n");
    } else {
        printf("Obesidade grau 3\n");
    }

    return 0;
}
