#include <stdio.h>

int main()
{
    int opcao = 2;

    switch (opcao)
    {
    case 1:
        printf("Você escolheu a opção 1!");
        break;

    case 2:
        printf("Você escolheu a opção 2!");
        break;

    case 3:
        printf("Você escolheu a opção 3!");
        break;

    default:
        printf("Opção Inválida!");
        break;
    }

    return 0;
}