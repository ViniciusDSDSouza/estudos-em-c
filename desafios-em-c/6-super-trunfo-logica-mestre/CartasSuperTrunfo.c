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
    int opcao1, opcao2;

    printf("Escolhe Um Atributo Para Comparar!\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");

    printf("1° Opção: ");
    scanf("%i", &opcao1);
    printf("\n");

    printf("Escolhe Um Atributo Para Comparar!\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");

    printf("2° Opção: ");
    scanf("%i", &opcao2);
    printf("\n");

    if (opcao1 == opcao2)
    {
        printf("Selecione duas opções diferentes!\n");
    }
    else
    {

        float carta1opcao1, carta1opcao2, carta1resultadoTotal;
        float carta2opcao1, carta2opcao2, carta2resultadoTotal;

        printf("1° Opção: \n");

        switch (opcao1)
        {
        case 1: // População

            printf("%s - População: %lu\n", nomeCidadeCarta1, populacaoCarta1);
            carta1opcao1 = populacaoCarta1;

            printf("%s - População: %lu\n\n", nomeCidadeCarta2, populacaoCarta2);
            carta2opcao1 = populacaoCarta2;

            break;

        case 2: // Área

            printf("%s - Área: %.2fKm²\n", nomeCidadeCarta1, areaCarta1);
            carta1opcao1 = areaCarta1;

            printf("%s - Área: %.2fKm²\n\n", nomeCidadeCarta2, areaCarta2);
            carta2opcao1 = areaCarta2;

            break;

        case 3: // PIB

            printf("%s - PIB: %.2f Bilhões de reais\n", nomeCidadeCarta1, pibCarta1);
            carta1opcao1 = pibCarta1;

            printf("%s - PIB: %.2f Bilhões de reais\n\n", nomeCidadeCarta2, pibCarta2);
            carta2opcao1 = pibCarta2;

            break;

        case 4: // Pontos Turísticos

            printf("%s - Pontos Turísticos: %i\n", nomeCidadeCarta1, pontosTuristicosCarta1);
            carta1opcao1 = pontosTuristicosCarta1;

            printf("%s - Pontos Turísticos: %i\n\n", nomeCidadeCarta2, pontosTuristicosCarta2);
            carta2opcao1 = pontosTuristicosCarta2;

            break;

        case 5: // Densidade Populacional

            // Quanto menor, melhor, logo armazeno um valor negativo para manter a lógica de soma de atributos no resultado final

            printf("%s - Densidade: %.2f hab/Km²\n", nomeCidadeCarta1, densidadePopulacionalCarta1);
            carta1opcao1 = (densidadePopulacionalCarta1 * (-1));

            printf("%s - Densidade: %.2f hab/Km²\n\n", nomeCidadeCarta2, densidadePopulacionalCarta2);
            carta2opcao1 = (densidadePopulacionalCarta2 * (-1));

            break;

        default:

            printf("Opção Inválida!\n\n");

            break;
        }

        printf("2° Opção: \n");

        switch (opcao2)
        {
        case 1: // População

            printf("%s - População: %lu\n", nomeCidadeCarta1, populacaoCarta1);
            carta1opcao2 = populacaoCarta1;

            printf("%s - População: %lu\n\n", nomeCidadeCarta2, populacaoCarta2);
            carta2opcao2 = populacaoCarta2;

            break;

        case 2: // Área

            printf("%s - Área: %.2fKm²\n", nomeCidadeCarta1, areaCarta1);
            carta1opcao2 = areaCarta1;

            printf("%s - Área: %.2fKm²\n\n", nomeCidadeCarta2, areaCarta2);
            carta2opcao2 = areaCarta2;

            break;

        case 3: // PIB

            printf("%s - PIB: %.2f Bilhões de reais\n", nomeCidadeCarta1, pibCarta1);
            carta1opcao2 = pibCarta1;

            printf("%s - PIB: %.2f Bilhões de reais\n\n", nomeCidadeCarta2, pibCarta2);
            carta2opcao2 = pibCarta2;

            break;

        case 4: // Pontos Turísticos

            printf("%s - Pontos Turísticos: %i\n", nomeCidadeCarta1, pontosTuristicosCarta1);
            carta1opcao2 = pontosTuristicosCarta1;

            printf("%s - Pontos Turísticos: %i\n\n", nomeCidadeCarta2, pontosTuristicosCarta2);
            carta2opcao2 = pontosTuristicosCarta2;

            break;

        case 5: // Densidade Populacional

            // Quanto menor, melhor, logo armazeno um valor negativo para manter a lógica de soma de atributos no resultado final

            printf("%s - Densidade: %.2f hab/Km²\n", nomeCidadeCarta1, densidadePopulacionalCarta1);
            carta1opcao2 = (densidadePopulacionalCarta1 * (-1));

            printf("%s - Densidade: %.2f hab/Km²\n\n", nomeCidadeCarta2, densidadePopulacionalCarta2);
            carta2opcao2 = (densidadePopulacionalCarta2 * (-1));

            break;
        default:

            printf("Opção Inválida!\n\n");

            break;
        }

        carta1resultadoTotal = carta1opcao1 + carta1opcao2;
        carta2resultadoTotal = carta2opcao1 + carta2opcao2;

        printf("Carta 1 - %.2f pontos!\n", carta1resultadoTotal);
        printf("Carta 2 - %.2f pontos!\n\n", carta2resultadoTotal);

        if (carta1resultadoTotal > carta2resultadoTotal)
        {
            printf("Carta 1 (%s) Venceu!\n", nomeCidadeCarta1);
        }
        else if (carta1resultadoTotal < carta2resultadoTotal)
        {
            printf("Carta 2 (%s) Venceu!\n", nomeCidadeCarta2);
        }
        else if (carta1resultadoTotal == carta2resultadoTotal)
        {
            printf("Empate!\n");
        }
    }
}