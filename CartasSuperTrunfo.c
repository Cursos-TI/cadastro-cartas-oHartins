#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigo da carta[3];
  char nome da cidade[50];
  int populacao;
  float area;
  float pib per capita;
  int numero de pontos turisticos;
  
  // Área para entrada de dados
  printf("Digite o estado: ");
  scanf("%s", &estado);
  printf("Digite o código da carta: ");
  scanf("%s", &codigo da carta);
  printf("Digite o nome da cidade: ");
  scanf("%s", &nome da cidade);
  printf("Digite a população: ");
  scanf("%d", &populacao);
  printf("Digite a área (em km²): ");
  scanf("%f", &area);
  printf("Digite o PIB per capita: ");
  scanf("%f", &pib per capita);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &numero de pontos turisticos);

  // Área para exibição dos dados da cidade
  printf("\n--- Carta da Cidade ---\n");
  printf("Estado: %s\n", estado);
  printf("Código da Carta: %s\n", codigo da carta);
  printf("Nome da Cidade: %s\n", nome da cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB per capita: %.2f\n", pib per capita);
  printf("Número de Pontos Turísticos: %d\n", numero de pontos turisticos);
return 0;
} 
