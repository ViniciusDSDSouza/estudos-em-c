#include <stdio.h>

int main()
{
    // Cadastro Carta 1
    char estadoCarta1 = 'A';
    char codigoCarta1[3] = "01";
    char nomeCidadeCarta1[20] = "São Paulo";
    unsigned long int populacaoCarta1 = 12325000;
    int pontosTuristicosCarta1 = 50;
    float areaCarta1 = 1521.11;
    float pibCarta1 = 699.28;

    float densidadePopulacionalCarta1 = populacaoCarta1 / areaCarta1;
    float pibPerCapitaCarta1 = (pibCarta1 * 1000000000) / populacaoCarta1;

    int poderCarta1 = populacaoCarta1 + pibCarta1 + pontosTuristicosCarta1 + pibPerCapitaCarta1 + (densidadePopulacionalCarta1 * (-1));

    // Cadastro Carta 2
    char estadoCarta2 = 'B';
    char codigoCarta2[3] = "02";
    char nomeCidadeCarta2[20] = "Rio de Janeiro";
    unsigned long int populacaoCarta2 = 6748000;
    int pontosTuristicosCarta2 = 30;
    float areaCarta2 = 1200.25;
    float pibCarta2 = 300.50;

    float densidadePopulacionalCarta2 = populacaoCarta2 / areaCarta2;
    float pibPerCapitaCarta2 = (pibCarta2 * 1000000000) / populacaoCarta2;

    int poderCarta2 = populacaoCarta2 + pibCarta2 + pontosTuristicosCarta2 + pibPerCapitaCarta2 + (densidadePopulacionalCarta2 * (-1));

    // Menu de Opções
    int opcao;
    printf("Escolhe Um Atributo Para Comparar!\n\n");
    printf("1. Nome do país (Exibir Informações, não para comparação!)\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográfica\n");

    printf("Opção: ");
    scanf("%i", &opcao);
    printf("\n");

    switch (opcao)
    {
    case 1:
        // Carta 1
        printf("Carta 1:\n\nEstado: %c\nCódigo: %c%s \nNome da Cidade: %s \nPopulação: %lu \nÁrea: %.2fKm² \nPIB: %.2f Bilhões de reais \nPontos Turísticos: %i \nDensidade Populacional: %.2f hab/Km² \nPib per Capita: %.2f reais\n\n", estadoCarta1, estadoCarta1, codigoCarta1, nomeCidadeCarta1, populacaoCarta1, areaCarta1, pibCarta1, pontosTuristicosCarta1, densidadePopulacionalCarta1, pibPerCapitaCarta1);

        // Carta 2
        printf("Carta 2:\n\nEstado: %c\nCódigo: %c%s \nNome da Cidade: %s \nPopulação: %lu \nÁrea: %.2fKm² \nPIB: %.2f Bilhões de reais \nPontos Turísticos: %i \nDensidade Populacional: %.2f hab/Km² \nPib per Capita: %.2f reais\n\n", estadoCarta2, estadoCarta2, codigoCarta2, nomeCidadeCarta2, populacaoCarta2, areaCarta2, pibCarta2, pontosTuristicosCarta2, densidadePopulacionalCarta2, pibPerCapitaCarta2);

        break;

    case 2: // População

        printf("%s - População: %lu\n", nomeCidadeCarta1, populacaoCarta1);
        printf("%s - População: %lu\n\n", nomeCidadeCarta2, populacaoCarta2);

        if (populacaoCarta1 > populacaoCarta2)
        {
            printf("----- Carta 1 (%s) Venceu! -----\n\n", nomeCidadeCarta1);
        }
        else if (populacaoCarta1 < populacaoCarta2)
        {
            printf("----- Carta 2 (%s) Venceu! -----", nomeCidadeCarta2);
        }
        else
        {
            printf("----- Empatou! -----");
        }

        break;

    case 3: // Área

        printf("%s - Área: %.2fKm²\n", nomeCidadeCarta1, areaCarta1);
        printf("%s - Área: %.2fKm²\n\n", nomeCidadeCarta2, areaCarta2);

        if (areaCarta1 > areaCarta2)
        {
            printf("----- Carta 1 (%s) Venceu! -----\n\n", nomeCidadeCarta1);
        }
        else if (areaCarta1 < areaCarta2)
        {
            printf("----- Carta 2 (%s) Venceu! -----", nomeCidadeCarta2);
        }
        else
        {
            printf("----- Empatou! -----");
        }

        break;

    case 4: // PIB

        printf("%s - PIB: %.2f Bilhões de reais\n", nomeCidadeCarta1, pibCarta1);
        printf("%s - PIB: %.2f Bilhões de reais\n\n", nomeCidadeCarta2, pibCarta2);

        if (pibCarta1 > pibCarta2)
        {
            printf("----- Carta 1 (%s) Venceu! -----\n\n", nomeCidadeCarta1);
        }
        else if (pibCarta1 < pibCarta2)
        {
            printf("----- Carta 2 (%s) Venceu! -----", nomeCidadeCarta2);
        }
        else
        {
            printf("----- Empatou! -----");
        }

        break;

    case 5: // Pontos Turísticos

        printf("%s - Pontos Turísticos: %i\n", nomeCidadeCarta1, pontosTuristicosCarta1);
        printf("%s - Pontos Turísticos: %i\n\n", nomeCidadeCarta2, pontosTuristicosCarta2);

        if (pontosTuristicosCarta1 > pontosTuristicosCarta2)
        {
            printf("----- Carta 1 (%s) Venceu! -----\n\n", nomeCidadeCarta1);
        }
        else if (pontosTuristicosCarta1 < pontosTuristicosCarta2)
        {
            printf("----- Carta 2 (%s) Venceu! -----", nomeCidadeCarta2);
        }
        else
        {
            printf("----- Empatou! -----");
        }

        break;

    case 6: // Densidade Populacional

        printf("%s - Densidade: %.2f hab/Km²\n", nomeCidadeCarta1, densidadePopulacionalCarta1);
        printf("%s - Densidade: %.2f hab/Km²\n\n", nomeCidadeCarta2, densidadePopulacionalCarta2);

        if (densidadePopulacionalCarta1 < densidadePopulacionalCarta2)
        {
            printf("----- Carta 1 (%s) Venceu! -----\n\n", nomeCidadeCarta1);
        }
        else if (densidadePopulacionalCarta1 > densidadePopulacionalCarta2)
        {
            printf("----- Carta 2 (%s) Venceu! -----", nomeCidadeCarta2);
        }
        else
        {
            printf("----- Empatou! -----");
        }

        break;
    default:

        printf("Opção Inválida!\n\n");

        break;
    }
}