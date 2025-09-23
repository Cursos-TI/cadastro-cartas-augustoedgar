#include <stdio.h>

int main() {
  // Carta 1
   char estado1;
   char codigo1[4];
   char cidade1[50];
   int pontosT1;
   unsigned long int populacao1;
   float area1, pib1, calcDen1, calcPib1;
   float superPoder1;

   // Carta 2
   char estado2;
   char codigo2[4];
   char cidade2[50];
   int pontosT2;
   unsigned long int populacao2;
   float area2, pib2, calcDen2, calcPib2;
   float superPoder2;

   // Cadastro Carta 1
  printf("Cadastro da Carta 1\n");
  printf("Digite a letra do estado (A - H):");
  scanf(" %c", &estado1);

  printf("Digite o codigo da carta (ex: A01): ");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);

  printf("Digite a populacao: ");
  scanf("%lu", &populacao1);

  printf("Digite a area (em km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosT1);

// Cadastro Carta 2
  printf("\nCadastro da Carta 2\n");
  printf("Digite a letra do estado (A - H):");
  scanf(" %c", &estado2);

  printf("Digite o codigo da carta (ex: B02): ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Digite a populacao: ");
  scanf("%lu", &populacao2);

  printf("Digite a area (em km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosT2);

  // Calculos
  calcPib1 = (pib1 * 1000000000)  / (float)populacao1;
  calcPib2 = (pib2 * 1000000000) / (float)populacao2;
  calcDen1 = populacao1 / area1;
  calcDen2 = populacao2 / area2;
  superPoder1 = populacao1 + area1 + pib1 + pontosT1 + calcPib1 + (1.0f / calcDen1);
  superPoder2 = populacao2 + area2 + pib2 + pontosT2 + calcPib2 + (1.0f / calcDen2);

  // Exibir Resultados:
  printf("\nComparação de Cartas: \n");
  printf("População: (%d) \n", populacao1 > populacao2);
  printf("Area: (%d) \n", area1 > area2);
  printf("Pib: (%d) \n", pib1 > pib2);
  printf("Pontos Turisticos: (%d)\n", pontosT1 > pontosT2);
  printf("Densidade Populacional: (%d)\n", calcDen1 < calcDen2);
  printf("PIB per Capita: (%d)\n", calcPib1 > calcPib2);
  printf("Super Poder: (%d)\n", superPoder1 > superPoder2);
  
return 0;
} 
