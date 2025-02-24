#include <stdio.h>

int main()
{
    // (condicao) ? (verdadeiro) : (falso)

    // if (condicao) {
    //     verdadeiro
    // } else {
    //     falso
    // }

    int idade = 16;

    if (idade >= 18) {
        printf("Maior de idade!\n");
    } else {
        printf("Menor de idade!\n");
    }

    int resultado = (idade >= 18); // resultado = 1 ou verdadeiro

    resultado ? printf("Maior de Idade!\n") : printf("Menor de idade!\n");

    return 0;
}