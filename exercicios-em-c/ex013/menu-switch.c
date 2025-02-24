#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int opcao;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");

    printf("1. Iniciar Jogo\n");

    printf("2. Ver Regras\n");

    printf("3. Sair\n");

    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        // Código para iniciar o jogo

        srand(time(0));
        numeroSecreto = rand() % 10 + 1;

        printf("Adivinhe o número (entre 1 e 10): \n");
        scanf("%d", &palpite);

        if (palpite == numeroSecreto)
        {
            printf("Parabéns! Você acertou!");
        }
        else
        {
            printf("Você errou. O número era %i", numeroSecreto);
        }

        break;
    case 2:
        // Código para exibir as regras

        printf("Regras do Jogo:\n");
        printf("1. Regra 1\n");
        printf("2. Regra 2\n");
        printf("3. Regra 3\n");
        break;
    case 3:
        // Código para sair

        printf("Saindo...\n");

        break;
    default:
        printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
}