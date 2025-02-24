#include <stdio.h>

int main() {

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
    
    // Carta 1
    printf("Carta 1:\n\nEstado: %c\nCódigo: %c%s \nNome da Cidade: %s \nPopulação: %lu \nÁrea: %.2fKm² \nPIB: %.2f Bilhões de reais \nPontos Turísticos: %i \nDensidade Populacional: %.2f hab/Km² \nPib per Capita: %.2f reais\n\n", estadoCarta1, estadoCarta1, codigoCarta1, nomeCidadeCarta1, populacaoCarta1, areaCarta1, pibCarta1, pontosTuristicosCarta1,densidadePopulacionalCarta1,pibPerCapitaCarta1);

    // Carta 2
    printf("Carta 2:\n\nEstado: %c\nCódigo: %c%s \nNome da Cidade: %s \nPopulação: %lu \nÁrea: %.2fKm² \nPIB: %.2f Bilhões de reais \nPontos Turísticos: %i \nDensidade Populacional: %.2f hab/Km² \nPib per Capita: %.2f reais\n\n", estadoCarta2, estadoCarta2, codigoCarta2, nomeCidadeCarta2, populacaoCarta2, areaCarta2, pibCarta2, pontosTuristicosCarta2, densidadePopulacionalCarta2, pibPerCapitaCarta2);

    // Comparar Carta --> Poder
    printf("Comparando Poder das Cartas!\n\n");

    printf("Carta 1 - %s (%c): %i\n", nomeCidadeCarta1, estadoCarta1, poderCarta1);
    printf("Carta 2 - %s (%c): %i\n", nomeCidadeCarta2, estadoCarta2, poderCarta2);

    if(poderCarta1 > poderCarta2) {
        printf("Carta 1 (%s) Venceu!\n", nomeCidadeCarta1);
    } else if(poderCarta2 > poderCarta1) {
        printf("Carta 2 (%s) Venceu!\n", nomeCidadeCarta2);
    } else {
        printf("Empate!");
    }

    return 0;
}