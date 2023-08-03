#include <stdio.h>

int main() {
    int opcao, num1, num2, resultado;

    while (1) {
        printf("Selecione uma opcao da calculadora:\n");
        printf("1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\n");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Saindo do programa...\n");
            break;
        } else if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois valores inteiros para realizar a operacao:\n");
            scanf("%d %d", &num1, &num2);

            switch (opcao) {
                case 1:
                    resultado = num1 + num2;
                    printf("Resultado da soma: %d\n", resultado);
                    break;

                case 2:
                    resultado = num1 - num2;
                    printf("Resultado da subtracao: %d\n", resultado);
                    break;

                case 3:
                    resultado = num1 * num2;
                    printf("Resultado da multiplicacao: %d\n", resultado);
                    break;

                case 4:
                    if (num2 == 0) {
                        printf("Nao e possivel dividir por zero. Digite um novo valor para o segundo numero:\n");
                        scanf("%d", &num2);
                    }
                    resultado = num1 / num2;
                    printf("Resultado da divisao: %d\n", resultado);
                    break;
            }
        } else {
            printf("Opcao invalida. Escolha uma opcao valida.\n");
        }
    }

    return 0;
}

