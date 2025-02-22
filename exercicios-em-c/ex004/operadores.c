#include <stdio.h>

int main() {
    // Soma (+)
    // Subtração (-)
    // Multiplicação (*)
    // Divisão (/)

    int n1, n2, soma, subtracao, multiplicacao, divisao;

    printf("Digite n1: ");
    scanf("%i", &n1);
    printf("Digite n2: ");
    scanf("%i", &n2);

    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;
    divisao = n1 / n2;

    printf("Soma = %i\n", soma);
    printf("Subtração = %i\n", subtracao);
    printf("Multiplicação = %i\n", multiplicacao);
    printf("Divisão = %i\n", divisao);

    return 0;
}