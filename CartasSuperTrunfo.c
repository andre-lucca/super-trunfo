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

    int atributo_escolhido1 = 0;
    int atributo_escolhido2 = 0;

    printf("Escolha o primeiro atributo de comparação:\n");
    printf("1. População\n");
    printf("2. Pontos turísticos\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    scanf("%d", &atributo_escolhido1);
    
    printf("Escolha o segundo atributo de comparação:\n");
    (atributo_escolhido1 != 1) ? printf("1. População\n") : 0;
    (atributo_escolhido1 != 2) ? printf("2. Pontos turísticos\n") : 0;
    (atributo_escolhido1 != 3) ? printf("3. Área\n") : 0;
    (atributo_escolhido1 != 4) ? printf("4. PIB\n") : 0;
    scanf("%d", &atributo_escolhido2);

    if (atributo_escolhido1 < 1 || atributo_escolhido1 > 4) {
      printf("Atributo inválido");

      return 0;
    }

    if (atributo_escolhido2 < 1 || atributo_escolhido2 > 4) {
      printf("Atributo inválido");

      return 0;
    }

    int pontos_carta1 = 0;
    int pontos_carta2 = 0;

    printf("Cidade da carta 1: %s\n", cidade1);
    printf("Cidade da carta 2: %s\n", cidade2);
    printf("Atributos escolhidos: %d e %d\n", atributo_escolhido1, atributo_escolhido2);

    switch (atributo_escolhido1) {
      case 1:
	if (populacao1 == populacao2) {
	  break;
	}

	populacao1 > populacao2 ? pontos_carta1++ : pontos_carta2++;
	break;

      case 2:
	if (pontos_turisticos1 == pontos_turisticos2) {
	  break;
	}

	pontos_turisticos1 > pontos_turisticos2 ? pontos_carta1++ : pontos_carta2++;
	break;

      case 3:
	if (area1 == area2) {
	  break;
	}

	area1 > area2 ? pontos_carta1++ : pontos_carta2++;
	break;

      case 4:
	if (pib1 == pib2) {
	  break;
	}

	pib1 > pib2 ? pontos_carta1++ : pontos_carta2++;
	break;
    }

    switch (atributo_escolhido2) {
      case 1:
	if (populacao1 == populacao2) {
	  break;
	}

	populacao1 > populacao2 ? pontos_carta1++ : pontos_carta2++;
	break;

      case 2:
	if (pontos_turisticos1 == pontos_turisticos2) {
	  break;
	}

	pontos_turisticos1 > pontos_turisticos2 ? pontos_carta1++ : pontos_carta2++;
	break;

      case 3:
	if (area1 == area2) {
	  break;
	}

	area1 > area2 ? pontos_carta1++ : pontos_carta2++;
	break;

      case 4:
	if (pib1 == pib2) {
	  break;
	}

	pib1 > pib2 ? pontos_carta1++ : pontos_carta2++;
	break;
    }

    printf("Pontos da Carta 1: %d\n", pontos_carta1);
    printf("Pontos da Carta 2: %d\n", pontos_carta2);

    if (pontos_carta1 > pontos_carta2) {
      printf("Carta 1 venceu!\n");
    } else if (pontos_carta2 > pontos_carta1) {
      printf("Carta 2 venceu!\n");
    } else {
      printf("Empate!\n");
    }

    return 0;
}
