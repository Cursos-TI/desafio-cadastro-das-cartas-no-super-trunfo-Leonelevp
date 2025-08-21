#include <stdio.h>

int main(){ //Cidade 1 Sao Paulo
  char estado[50] = A;
  char codigo[4] = A01;
  char nome[50] = Sao Paulo;
  int populacao = 12.325.000;
  float area = 1521.11;               //Em km2
  float pib = 699.28;             // Em Bilhoes de reais
  int turist = 50;                 //Quantidade de Pontos Turisticos

  printf("Insira o Codigo da Cidade: /n");
  scanf("%s", codigo);

  printf("Codigo da Carta: %s\n", codigo);
  printf("Estado: %s\n", estado);
  printf("Nome da Cidade: %s\n", nome);
  printf("Populacao: %d habitantes\n", populacao);
  printf("Area: %f Km2\n, area");
  printf("PIB: %f Bilhoes de Reais\n", pib);
  printf("Quantidade de Pontos Turisticos: %d\n", turist);

return 0; 

}
