#include <stdio.h>

int main() {
    // Atribuição Simples (=)
    // Atribuição Com Soma (+=)
    // Atribuição Com Subtração (-=)
    // Atribuição Com Multiplicação (*=)
    // Atribuição Com Divisão (/=)

    int n1 = 10,n2, resultado = 10;

    resultado += 20; // 30
    printf("Resultado = %i\n", resultado);
    resultado -= n1; // 20
    printf("Resultado = %i\n", resultado);
    resultado *= 5; // 100
    printf("Resultado = %i\n", resultado);
    resultado /= 2; // 50
    printf("Resultado = %i\n", resultado);

    return 0;
}