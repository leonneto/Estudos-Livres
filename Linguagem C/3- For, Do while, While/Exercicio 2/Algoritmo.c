#include <stdio.h>

/*
2) Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura
de senha incorreta informada, escrever a mensagem “Senha Invalida”. Quando a senha for
informada corretamente deve ser impressa a mensagem “Acesso Permitido” e o programa deve ser
encerrado. Considere que a senha correta é o valor 123456.
*/

int main(){
    int senha;
        printf("Por favor, digite uma senha valida:\n");
        scanf("%i", &senha);

        while (1)
        {
             printf("Por favor, digite a senha: ");
             scanf("%i", &senha);
            
             if (senha == 123456) {
             printf("Acesso Permitido.\n");
            break; 
        } else {
            printf("Senha Invalida.\n");
        }
    
        }
        

    return 0;
}