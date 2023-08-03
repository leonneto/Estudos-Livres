// 7) Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N,
// inclusive N, se for o caso.
#include <stdio.h>

int main(){
    int num,x;

        printf("Digite um valor inteiro\n");
        scanf("%i", &num);

        for(x=0; x <= num; x++){
            if(x % 2 ==0 ){
                 int quadrado = x * x;
                 printf("%i^2 = %i\n", x, quadrado);
            }
        }




    return 0;
}