#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    /*
      Seção de declaração das variáveis das cartas.
      Criei variáveis somente para duas cartas, seguindo a sugestão do professor.
    */

    char
      estado1,
      estado2,
      codigo1[3] = "",
      codigo2[3] = "",
      cidade1[50] = "",
      cidade2[50] = "";

    int
      populacao1 = 0,
      populacao2 = 0,
      pontos_turisticos1 = 0,
      pontos_turisticos2 = 0;

    float
      area1 = 0.0,
      area2 = 0.0,
      pib1 = 0.0,
      pib2 = 0.0,
      // Novas variáveis para o desafio aventureiro.
      densidade_populacional1 = 0.0,
      densidade_populacional2 = 0.0,
      pib_per_capita1 = 0.0,
      pib_per_capita2 = 0.0;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Introdução do jogo.
    printf("\nBem vindo ao Super Trunfo de Países!\n");
    printf("Vamos começar cadastrando 2 cartas, para que você possa compará-las\n\n");

    // Solicita o estado da carta1.
    printf("O estado da carta é uma letra de A até H\n");
    printf("Informe o estado da carta1: ");
    scanf(" %c", &estado1);
    
    // Solicita o código da carta1.
    printf("\nO código é composto pela letra anterior e dois dígitos numéricos\n");
    printf("Exemplo: A01\n");
    printf("Informe o código da carta1: ");
    scanf("%s", codigo1);

    // Solicita o nome da cidade1.
    printf("\nA cidade segue o seguinte padrão: Fortaleza\n");
    printf("Informe o nome da cidade1: ");
    scanf("%s", cidade1);

    // Solicita a população da cidade1.
    printf("\nInforme o número de habitantes da cidade1: ");
    scanf("%d", &populacao1);

    // Solicita a área da cidade1.
    printf("\nInforme a área em km² da cidade1: ");
    scanf("%f", &area1);

    // Solicita o valor do PIB da cidade1.
    printf("\nInforme o PIB da cidade1: ");
    scanf("%f", &pib1);

    // Solicita o número de pontos turísticos da cidade1.
    printf("\nInforme o número de pontos turísticos da cidade1: ");
    scanf("%d", &pontos_turisticos1);

    printf("\nMuito bem! Agora vamos cadastrar a segunda carta.\n");

    // Solicita o estado da carta2.
    printf("\nO estado da carta é uma letra de A até H\n");
    printf("Informe o estado da carta2: ");
    scanf(" %c", &estado2);

    // Solicita o código da carta2.
    printf("\nO código é composto pela letra anterior e dois dígitos numéricos\n");
    printf("Exemplo: A01\n");
    printf("Informe o código da carta2: ");
    scanf("%s", codigo2);
    
    // Solicita o nome da cidade2.
    printf("\nA cidade segue o seguinte padrão: Curitiba\n");
    printf("Informe o nome da cidade2: ");
    scanf("%s", cidade2);

    // Solicita a população da cidade2.
    printf("\nInforme o número de habitantes da cidade2: ");
    scanf("%d", &populacao2);

    // Solicita a área da cidade2.
    printf("\nInforme a área em km² da cidade2: ");
    scanf("%f", &area2);

    // Solicita o valor do PIB da cidade2.
    printf("\nInforme o PIB da cidade2: ");
    scanf("%f", &pib2);

    // Solicita o número de pontos turísticos da cidade2.
    printf("\nInforme o número de pontos turísticos da cidade2: ");
    scanf("%d", &pontos_turisticos2);

    // Após a leitura dos dados, calcula a densidade populacional e o PIB
    // per capita de cada cidade.

    densidade_populacional1 = (float) populacao1 / area1;
    densidade_populacional2 = (float) populacao2 / area2;

    pib_per_capita1 = (float) pib1 / populacao1;
    pib_per_capita2 = (float) pib2 / populacao2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: R$%.2f\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: R$%.2f\n", pib_per_capita2);

    return 0;
}
