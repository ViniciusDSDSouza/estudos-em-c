#include <stdio.h>

int main() {

    char nome[20];
    int idade;

    printf("Digite sua idade: ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    printf("Seu nome é: %s \nSua idade é: %i", nome, idade);

    return 0;
}