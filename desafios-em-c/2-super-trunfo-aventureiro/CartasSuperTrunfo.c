#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estadoCarta1, estadoCarta2, codigoCarta1[3], codigoCarta2[3], nomeCidadeCarta1[20], nomeCidadeCarta2[20];
    int populacaoCarta1, populacaoCarta2, pontosTuristicosCarta1, pontosTuristicosCarta2;
    float areaCarta1, areaCarta2, pibCarta1, pibCarta2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastro primeira carta
    printf("Digite os dados da Primeira Carta:");

    printf("Estado ('A' a 'H'): ");
    scanf("%c", &estadoCarta1);

    printf("Código (número de 01 a 04): ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade (Sem espaços em branco)");
    scanf("%s", nomeCidadeCarta1);

    printf("População (Número inteiro): ");
    scanf("%i", &populacaoCarta1);

    printf("Área (Km², Número Decimal): ");
    scanf("%f", &areaCarta1);

    printf("PIB (Bilhões): ");
    scanf("%f", &pibCarta1);

    printf("Pontos Turísticos: ");
    scanf("%i", &pontosTuristicosCarta1);

    // Cadastro segunda carta
    printf("Digite os dados da Segunda Carta:");
    
    printf("Estado ('A' a 'H'): ");
    // Deixar um espaço antes de '%c' para o scanf ignorar a quebra de linha no buffer
    scanf(" %c", &estadoCarta2);
    
    printf("Código (número de 01 a 04): ");
    scanf("%s", codigoCarta2);
    
    printf("Digite o nome da cidade (Sem espaços em branco)");
    scanf("%s", nomeCidadeCarta2);
    
    printf("População (Número inteiro): ");
    scanf("%i", &populacaoCarta2);
    
    printf("Área (Km², Número Decimal): ");
    scanf("%f", &areaCarta2);
    
    printf("PIB (Bilhões): ");
    scanf("%f", &pibCarta2);
    
    printf("Pontos Turísticos: ");
    scanf("%i", &pontosTuristicosCarta2);

    // Calculando Densidade Populacional e PIB Per Capita

    float densidadePopulacionalCarta1, densidadePopulacionalCarta2, pibPerCapitaCarta1, pibPerCapitaCarta2;

    densidadePopulacionalCarta1 = populacaoCarta1 / areaCarta1;
    densidadePopulacionalCarta2 = populacaoCarta2 / areaCarta2;

    pibPerCapitaCarta1 = (pibCarta1 * 1000000000) / populacaoCarta1;
    pibPerCapitaCarta2 = (pibCarta2 * 1000000000) / populacaoCarta2;
    
    // Saída de dados
    // Carta 1
    printf("Carta 1:\n\nEstado: %c\nCódigo: %c%s \nNome da Cidade: %s \nPopulação: %i \nÁrea: %.2fKm² \nPIB: %.2f Bilhões de reais \nPontos Turísticos: %i \nDensidade Populacional: %.2f hab/Km² \nPib per Capita: %.2f reais\n\n", estadoCarta1, estadoCarta1, codigoCarta1, nomeCidadeCarta1, populacaoCarta1, areaCarta1, pibCarta1, pontosTuristicosCarta1,densidadePopulacionalCarta1,pibPerCapitaCarta1);

    // Carta 2
    printf("Carta 2:\n\nEstado: %c\nCódigo: %c%s \nNome da Cidade: %s \nPopulação: %i \nÁrea: %.2fKm² \nPIB: %.2f Bilhões de reais \nPontos Turísticos: %i \nDensidade Populacional: %.2f hab/Km² \nPib per Capita: %.2f reais\n\n", estadoCarta2, estadoCarta2, codigoCarta2, nomeCidadeCarta2, populacaoCarta2, areaCarta2, pibCarta2, pontosTuristicosCarta2, densidadePopulacionalCarta2, pibPerCapitaCarta2);

    return 0;
}