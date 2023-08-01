#include <stdio.h>

int main() {
    float nota1, nota2;
    int notas_validas = 0;

    while (notas_validas < 2) {
        printf("Digite a nota %d: ", notas_validas + 1);
        scanf("%f", &nota1);

        if (nota1 >= 0 && nota1 <= 10) {
            notas_validas++;
        } else {
            printf("Nota inválida. Digite uma nota entre 0 e 10.\n");
        }
    }

    notas_validas = 0; 

    while (notas_validas < 2) {
        printf("Digite a nota %d: ", notas_validas + 2);
        scanf("%f", &nota2);

        if (nota2 >= 0 && nota2 <= 10) {
            notas_validas++;
        } else {
            printf("Nota inválida. Digite uma nota entre 0 e 10.\n");
        }
    }

    float media = (nota1 + nota2) / 2;

    printf("Média semestral: %.2f\n", media);

    return 0;
}
