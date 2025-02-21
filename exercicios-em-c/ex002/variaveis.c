#include <stdio.h>

int main() {
    /*
    Variaveis podem ter varios tipos:
    char --> Letra
    int --> Numeros Inteiros
    float ou double --> Numeros Decimais
    */

    char inicial = 'V';
    char nome[20] = "Vinicius";
    int idade = 19;
    float altura = 1.7;
    double peso = 70.5;

    printf("Nome: %s \nInicial: %c \nIdade: %i \nAltura: %.2f \nPeso: %.2f",nome , inicial, idade, altura, peso);

    return 0;
}