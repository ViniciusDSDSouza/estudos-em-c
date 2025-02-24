#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int escolhaComputador = rand() % 3 + 1;
    int escolhaJogador;

    printf("*** Jogo de Jokenpô ***\n");

    printf("Escolha uma opção:\n");

    printf("1. Pedra\n");

    printf("2. Papel\n");

    printf("3. Tesoura\n");

    printf("Escolha: \n");
    scanf("%i", &escolhaJogador);

    printf("Jogador: (%i)\n", escolhaJogador);
    printf("Computador: (%i)\n", escolhaComputador);

    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: Pedra - ");
        break;

    case 2:
        printf("Jogador: Papel - ");
        break;

    case 3:
        printf("Jogador: Tesoura - ");
        break;

    default:
        printf("Jogador: Inválido - ");
        break;
    }

    switch (escolhaComputador)
    {
    case 1:
        printf("Computador: Pedra - ");
        break;

    case 2:
        printf("Computador: Papel - ");
        break;

    case 3:
        printf("Computador: Tesoura - ");
        break;

    default:
        break;
    }

    if (escolhaComputador == escolhaJogador)
    {
        printf("### Jogo Empatou! ###\n");
    }
    else if ((escolhaJogador == 1 && escolhaComputador == 2) || 
            (escolhaJogador == 2 && escolhaComputador == 3) || 
            (escolhaJogador == 3 && escolhaComputador == 1))
    {
        printf("Você Perdeu!\n");
    }
    else if ((escolhaJogador == 1 && escolhaComputador == 3) || 
            (escolhaJogador == 2 && escolhaComputador == 1) || 
            (escolhaJogador == 3 && escolhaComputador == 2))
    {
        printf("Você Venceu!\n");
    }
    
    return 0;
}