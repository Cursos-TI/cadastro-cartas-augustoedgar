#include <stdio.h>

int main() {
  // Carta 1
   char estado1;
   char codigo1[4];
   char cidade1[50];
   int populacao1, pontosT1;
   float area1, pib1;

   // Carta 2
   char estado2;
   char codigo2[4];
   char cidade2[50];
   int populacao2, pontosT2;
   float area2, pib2;

  printf("Cadastro da Carta 1\n");
  printf("Digite a letra do estado (A - H):");
  scanf("%c", &estado1);

  printf("Digite o codigo da carta (ex: A01): ");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);

  printf("Digite a populacao: ");
  scanf("%d", &populacao1);

  printf("Digite a area (em km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosT1);

  printf("\nCadastro da Carta 2\n");
  printf("Digite a letra do estado (A - H):");
  scanf(" %c", &estado2);

  printf("Digite o codigo da carta (ex: B02): ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Digite a populacao: ");
  scanf("%d", &populacao2);

  printf("Digite a area (em km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosT2);

  printf("\nCarta 1: \n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontosT1);

  printf("\nCarta 2: \n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosT2);

return 0;
} 
