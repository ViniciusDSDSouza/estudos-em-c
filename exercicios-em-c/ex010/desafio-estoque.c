#include <stdio.h>

int main() {
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a Temperatura (C°): ");
    scanf("%f", &temperatura);

    printf("Entre com a Umidade (%%): ");
    scanf("%f", &umidade);

    printf("Entre com o Estoque (Un): ");
    scanf("%i", &estoque);

    // printf("Temperatura: %.2f°C\nUmidade: %.2f\nEstoque: %i", temperatura, umidade, estoque);

    printf("\nRELARTÓRIO:\n\n");

    if(temperatura > 30) {
        printf("Temperatura Elevada!\n");
    } else {
        printf("Temperatura dentro dos parâmetros!\n");
    }

    if(umidade > 50) {
        printf("Umidade Elevada!\n");
    } else {
        printf("Umidade dentro dos parâmetros!\n");
    }

    if(estoque >= estoqueMinimo) {
        printf("Estoque Dentro dos parâmetros!\n");
    } else {
        printf("Estoque Abaixo dos parâmetros\n");
    }

    return 0;
}