#include <stdio.h>
/*
1) Elabore um programa em C para ler do teclado um valor inteiro entre 1 e 10 e apresentar a
tabuada. Exemplo:
Entrada 7
Saída:
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70
*/

int main(){
    int num,x;
    
    printf("====Tabuada====\n");
    printf("digite um valor inteiro entre 1 e 10:\n");
    scanf("%i", &num);

    if(num< 1 || num>10){
        printf("Valor invalido!.Digite um valor inteiro entre 1 e 10\n ");
    }else{
        for(x=0;x<10;x++){
            printf("%i X %i = %i\n", num,x,num*x);
        }
    }

    return 0;
}