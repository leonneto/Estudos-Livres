#include <stdio.h>

/*
4) Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.
*/

int main() {
    int opcao;
    float valorReal, valorDolar, Taxa = 5.3, Conversao;

    printf("====Sistema de conversao====\n");
    printf("Selecione uma opcao:\n\n");
    printf("1- Real para Dolar\n");
    printf("2- Dolar para Real\n");
    scanf("%i", &opcao);

    switch (opcao) {
    case 1:
        printf("Digite o valor em reais: ");
        scanf("%f", &valorReal);

        Conversao = valorReal / Taxa;
        printf("Valor em Dolar: US$ %.2f\n", Conversao);
        break;

    case 2:
        printf("Digite o valor em dolares: ");
        scanf("%f", &valorDolar);

        Conversao = valorDolar * Taxa;
        printf("Valor em Real: R$ %.2f\n", Conversao);
        break;

    default:
        printf("Opcao invalida\n");
        break;
    }

    return 0;
}
