#include <stdio.h>
// 2) Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
// são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos
// e positivos.

int main(){
    int x,num, negativos=0,positivos=0;

    printf("Digite 5 numeros inteiros:\n");

    for(x=0;x<5;x++){
        scanf("%i", &num);

        if(num < 0){
            negativos++;
        }

        else if(num > 0 ){
            positivos++;
        }

    }

    printf("Quantidade de numeros positivos: %i\n", positivos);
    printf("Quantidade de numeros negativos: %i\n", negativos);

    return 0;
}