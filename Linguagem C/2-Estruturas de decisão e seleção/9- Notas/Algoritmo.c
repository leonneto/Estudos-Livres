#include <stdio.h>

/*
9) Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
a apresente a média:
Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3, 3, 4).
*/

int main() {
    float nota1, nota2, nota3;
    char tipoMedia;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Escolha o tipo de média (a - Aritmética, p - Ponderada): ");
    scanf(" %c", &tipoMedia);

    switch (tipoMedia) {
        case 'a':
        case 'A':
            media = (nota1 + nota2 + nota3) / 3;
            break;
        case 'p':
        case 'P':
            media = (nota1 * 3 + nota2 * 3 + nota3 * 4) / 10;
            break;
        default:
            printf("Opção de média inválida.\n");
            return 1; 
    }

    printf("A média é: %.2f\n", media);

    return 0;
}
