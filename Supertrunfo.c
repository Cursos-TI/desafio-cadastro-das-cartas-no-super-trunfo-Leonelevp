#include <stdio.h>

int main()
{
    // Cidade 1 Sao Paulo
    char estado[50];
    char codigo[4];
    char nome[50];
    int populacao;
    float area; // Em km2
    float pib;   // Em Bilhoes de reais
    int turist;      // Quantidade de Pontos Turisticos
    

printf("Insira o Codigo da Cidade: \n");
scanf("%s", codigo);

printf("Insira o Codigo do Estado da Cidade: \n");
scanf("%s", estado);

printf("Insira o Nome da Cidade: \n");
scanf("%s", nome);

printf("Insira a Populacao da Cidade: \n");
scanf("%d", &populacao);

printf("Insira a Area da Cidade: \n");
scanf("%f", &area);

printf("Insira o PIB da Cidade: \n");
scanf("%f", &pib);

printf("Insira a Quantidade de Pontos Turisticos da Cidade: \n");
scanf("%d", &turist);


printf("Carta da Cidade 1\n");
printf("Codigo da Carta: %s\n", codigo);
printf("Estado: %s\n", estado);
printf("Nome da Cidade: %s\n", nome);
printf("Populacao: %d habitantes\n", populacao);
printf("Area: %.2f Km2\n", area);
printf("PIB: %.2f Bilhoes de Reais\n", pib);
printf("Quantidade de Pontos Turisticos: %d\n", turist);
printf("Densidade Populacional: %.2f h/Km2\n", populacao / area);
printf("PIB per capta: %.2f reais\n", (pib * 1000000000) / populacao);

// Cidade 2 Rio de Janeiro

    char estado2[50];
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2; // Em km2
    float pib2;   // Em Bilhoes de reais
    int turist2;      // Quantidade de Pontos Turisticos

printf("Insira o Codigo da Cidade: \n");
scanf("%s", codigo2);

printf("Insira o Codigo do Estado da Cidade: \n");
scanf("%s", estado2);

printf("Insira o Nome da Cidade: \n");
scanf("%s", nome2);

printf("Insira a Populacao da Cidade: \n");
scanf("%d", &populacao2);

printf("Insira a Area da Cidade: \n");
scanf("%f", &area2);

printf("Insira o PIB da Cidade: \n");
scanf("%f", &pib2);

printf("Insira a Quantidade de Pontos Turisticos da Cidade: \n");
scanf("%d", &turist2);


printf("Carta da Cidade 2\n");
printf("Codigo da Carta: %s\n", codigo2);
printf("Estado: %s\n", estado2);
printf("Nome da Cidade: %s\n", nome2);
printf("Populacao: %d habitantes\n", populacao2);
printf("Area: %.2f Km2\n", area2);
printf("PIB: %.2f Bilhoes de Reais\n", pib2);
printf("Quantidade de Pontos Turisticos: %d\n", turist2);
printf("Densidade Populacional: %.2f h/Km2\n", populacao2 / area2);
printf("PIB per capta: %.2f reais\n", (pib2 * 1000000000) / populacao2);










    return 0;



}
