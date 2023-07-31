#include <stdio.h>
/*
5) Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo que são descontados 8% para imposto de renda.
*/
int main(){
    int Numdias;
    float valor = 45;
    float imposto =0.08;
    float valorLiquid;

        printf("Digite o numero de dias trabalhados pelo encanador:\n");
        scanf("%i", &Numdias);

         valorLiquid = (Numdias * valor) * (1 - imposto);

        printf("Numero de dias: %i\n", Numdias);
        printf("Valor Liquido: %.2f R$\n", valorLiquid);



    return 0;
    
}