#include <stdio.h>

int main() {
    char
      codigo1[3] = "A01",
      codigo2[3] = "A02",
      cidade1[50] = "Sao Paulo",
      cidade2[50] = "Curitiba";

    unsigned long int
      populacao1 = 1000,
      populacao2 = 2000;

    int
      pontos_turisticos1 = 10,
      pontos_turisticos2 = 8;

    float
      area1 = 13000.0,
      area2 = 14000.0,
      pib1 = 50000.0,
      pib2 = 10000.0,
      densidade_populacional1 = 0.0,
      densidade_populacional2 = 0.0,
      pib_per_capita1 = 0.0,
      pib_per_capita2 = 0.0;
      //super_poder1 = 0.0,
      //super_poder2 = 0.0;

    densidade_populacional1 = (float) populacao1 / area1;
    densidade_populacional2 = (float) populacao2 / area2;

    pib_per_capita1 = (float) pib1 / populacao1;
    pib_per_capita2 = (float) pib2 / populacao2;

    //super_poder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);
    //super_poder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    int opcao = 0;
    float valor1, valor2;

    printf("Bem vindo a Super Trunfo!\n");
    printf("Escolha qual atributo você quer comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    scanf("%d", &opcao);

    switch (opcao) {
	case 1:
	  valor1 = (float) populacao1;
	  valor2 = (float) populacao2;
	  break;

	case 2:
	   valor1 = area1;
	   valor2 = area2;
	  break;

	case 3:
	   valor1 = pib1;
	   valor2 = pib2;
	  break;

	default:
	  printf("Opção inválida.");
	  opcao = 0;
    }

    if (opcao == 0) {
	return 0;
    }

    printf("%s\n", cidade1);
    printf("%s\n", cidade2);
    printf("Atribudo escolhido: %d\n", opcao);
    printf("Carta1: %d\n", (int) valor1);
    printf("Carta2: %d\n", (int) valor2);

    if (valor1 > valor2) {
      printf("Carta 1 venceu!");
    } else if (valor2 > valor1) {
      printf("Carta 2 venceu!");
    } else {
      printf("Empate!");
    }

    return 0;
}
