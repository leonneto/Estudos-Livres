#include <stdio.h>
// 6) Faça um programa que imprima na tela todos os múltiplos de 7 entre 1 e 9999.

int main(){
    int x;

    for(x = 1; x < 9999 ; x++){
        if(x % 7 == 0){
            printf("%i", x);
        }
    }
    return 0;

}