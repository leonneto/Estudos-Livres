#include <stdio.h>
/*
2) Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
*/
int main(){
    int a,b,temp;
        printf("Digite um valor para a variavel 'a'\n");
        scanf("%i", &a);

        printf("Digite um valor para a variabel 'b'\n");
        scanf("%i", &b);

        temp = a;
        a = b;
        b = temp;
        
        printf("Valor da variavel a: %i\n", a);
        printf("Valor da variavel b: %i\n", b);
    return 0;
}