#include <stdio.h>

int main() {
    int n, i, A = 0;

    printf("Digite um numero inteiro maior que zero: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero invalido. Por favor, digite um numero maior que zero.\n");
    } else {
        for (i = 1; i <= n; i++) {
            A += i;
        }

        printf("O valor de A eh: %d\n", A);
    }

    return 0;
}

