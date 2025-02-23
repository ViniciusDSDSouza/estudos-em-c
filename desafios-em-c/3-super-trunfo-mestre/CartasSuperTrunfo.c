#include <stdio.h>

int main() {
    char estadoCarta1, estadoCarta2;
    char codigoCarta1[3], codigoCarta2[3];
    char nomeCidadeCarta1[20], nomeCidadeCarta2[20];
    unsigned long int populacaoCarta1, populacaoCarta2;
    int pontosTuristicosCarta1, pontosTuristicosCarta2;
    float areaCarta1, areaCarta2;
    float pibCarta1, pibCarta2;
    
    // Cadastro 1° carta
    printf("Digite os dados da Primeira Carta:\n");
    
    printf("Estado ('A' a 'H'): ");
    scanf(" %c", &estadoCarta1);
    
    printf("Código (número de 01 a 04): ");
    scanf("%s", codigoCarta1);
    
    printf("Digite o nome da cidade (Sem espaços em branco)");
    scanf("%s", nomeCidadeCarta1);
    
    printf("População (Número inteiro): ");
    scanf("%lu", &populacaoCarta1);
    
    printf("Área (Km², Número Decimal): ");
    scanf("%f", &areaCarta1);
    
    printf("PIB (Bilhões): ");
    scanf("%f", &pibCarta1);
    
    printf("Pontos Turísticos: ");
    scanf("%i", &pontosTuristicosCarta1);
    
    // // Cadastro 2° carta
    printf("Digite os dados da Segunda Carta:\n");
    
    printf("Estado ('A' a 'H'): ");
    scanf(" %c", &estadoCarta2); // Deixar um espaço antes de '%c' para o scanf ignorar a quebra de linha no buffer
    
    printf("Código (número de 01 a 04): ");
    scanf("%s", codigoCarta2);
    
    printf("Digite o nome da cidade (Sem espaços em branco)");
    scanf("%s", nomeCidadeCarta2);
    
    printf("População (Número inteiro): ");
    scanf("%lu", &populacaoCarta2);
    
    printf("Área (Km², Número Decimal): ");
    scanf("%f", &areaCarta2);
    
    printf("PIB (Bilhões): ");
    scanf("%f", &pibCarta2);
    
    printf("Pontos Turísticos: ");
    scanf("%i", &pontosTuristicosCarta2);
    
    // Densidade Populacional
    float densidadePopulacionalCarta1, densidadePopulacionalCarta2;
    
    densidadePopulacionalCarta1 = populacaoCarta1 / areaCarta1;
    densidadePopulacionalCarta2 = populacaoCarta2 / areaCarta2;
    
    //  PIB Per Capita
    float pibPerCapitaCarta1, pibPerCapitaCarta2;
    
    pibPerCapitaCarta1 = (pibCarta1 * 1000000000) / populacaoCarta1;
    pibPerCapitaCarta2 = (pibCarta2 * 1000000000) / populacaoCarta2;
    
    // Super Poder
    float poderCarta1, poderCarta2;

    poderCarta1 = populacaoCarta1 + pibCarta1 + pontosTuristicosCarta1 + pibPerCapitaCarta1 + (densidadePopulacionalCarta1 * (-1));
    poderCarta2 = populacaoCarta2 + pibCarta2 + pontosTuristicosCarta2 + pibPerCapitaCarta2 + (densidadePopulacionalCarta2 * (-1));
    
    
    // Carta 1
    printf("Carta 1:\n\nEstado: %c\nCódigo: %c%s \nNome da Cidade: %s \nPopulação: %lu \nÁrea: %.2fKm² \nPIB: %.2f Bilhões de reais \nPontos Turísticos: %i \nDensidade Populacional: %.2f hab/Km² \nPib per Capita: %.2f reais\n\n", estadoCarta1, estadoCarta1, codigoCarta1, nomeCidadeCarta1, populacaoCarta1, areaCarta1, pibCarta1, pontosTuristicosCarta1,densidadePopulacionalCarta1,pibPerCapitaCarta1);

    // Carta 2
    printf("Carta 2:\n\nEstado: %c\nCódigo: %c%s \nNome da Cidade: %s \nPopulação: %lu \nÁrea: %.2fKm² \nPIB: %.2f Bilhões de reais \nPontos Turísticos: %i \nDensidade Populacional: %.2f hab/Km² \nPib per Capita: %.2f reais\n\n", estadoCarta2, estadoCarta2, codigoCarta2, nomeCidadeCarta2, populacaoCarta2, areaCarta2, pibCarta2, pontosTuristicosCarta2, densidadePopulacionalCarta2, pibPerCapitaCarta2);

    printf("Comparação de Cartas:\n\n");
    printf("População: Carta %i venceu\n", (populacaoCarta1 < populacaoCarta2) + 1);
    printf("Área: Carta %i venceu\n", (areaCarta1 < areaCarta2) + 1);
    printf("PIB: Carta %i venceu\n", (pibCarta1 < pibCarta2) + 1);
    printf("Pontos Turísticos: Carta %i venceu\n", (pontosTuristicosCarta1 < pontosTuristicosCarta2) + 1);
    printf("Densidade Populacional: Carta %i venceu\n", (densidadePopulacionalCarta1 > densidadePopulacionalCarta2) + 1);
    printf("PIB per Capta: Carta %i venceu\n", (pibPerCapitaCarta1 < pibPerCapitaCarta2) + 1);
    printf("Super Poder: Carta %i venceu\n", (poderCarta1 < poderCarta2) + 1);

    return 0;
}