#include <stdio.h>
// 6) Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
// como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
// Dólares.
int main(){
    float taxaCambio = 5.3;
    float valorReal, TotalDolar;

    printf("Digite o valor em reais:\n");
    scanf("%f", &valorReal);

    TotalDolar = valorReal / taxaCambio;

    printf("Valor em Real: %.2f R$", valorReal);
    printf("Valor em Dolar: %.2f U$", TotalDolar);
    


    return 0;

}