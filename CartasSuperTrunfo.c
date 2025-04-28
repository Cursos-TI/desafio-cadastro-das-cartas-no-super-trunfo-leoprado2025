#include <stdio.h>
int main(){
	
//Declaração de variáveis da primeira carta
char estado1[10], codigo1[10], cidade1[50] ;
float populacao1, area1, pib1;
int pontoTuristico1;

//Adicionando declaração de variáveis da primeira carta do desafio aventureiro
float densidadePopulacional1, pibPerCapita1;

//Entrada dos dodos para a primeira carta
printf("Digite o estado da primeira carta ( A até H): \n");
scanf("%s", estado1);

printf("Digite o código da primeira carta (Ex A01 até A04): \n");
scanf("%s", codigo1);

printf("Digite o nome cidade da primeira carta: \n");
scanf("%s", cidade1);

printf("Digite a população da primeira carta: \n");
scanf("%f", &populacao1);

printf("Digite a área da primeira carta em km2: \n");
scanf("%f", &area1);

printf("Digite o PIB da primeira carta (em bilhões de reais): \n");
scanf("%f", &pib1);

printf("Digite o número de pontos turisticos da primeira carta: \n");
scanf("%d", &pontoTuristico1);

printf("\n");

//Declaração de variáveis da segunda carta
char estado2[10], codigo2[10], cidade2[50] ;
float populacao2, area2, pib2;
int pontoTuristico2;

//Adicionando declaração de variáveis da segunda carta do desafio aventureiro
float densidadePopulacional2;
float pibPerCapita2;

//Entrada dos dodos para a segunda carta
printf("Digite o estado da segunda carta ( A até H): \n");
scanf("%s", estado2);

printf("Digite o código da segunda carta (Ex A01 até A04): \n");
scanf("%s", codigo2);

printf("Digite o nome cidade da segunda carta: \n");
scanf("%s", cidade2);

printf("Digite a população da segunda carta: \n");
scanf("%f", &populacao2);

printf("Digite a área da segunda carta em km2: \n");
scanf("%f", &area2);

printf("Digite o PIB da segunda carta (em bilhões de reais): \n");
scanf("%f", &pib2);

printf("Digite o número de pontos turisticos da segunda carta: \n");
scanf("%d", &pontoTuristico2);

//Inclusão do calculo do segundo desafio da primeira carta
densidadePopulacional1 = populacao1 / area1;
pibPerCapita1 = pib1 / populacao1;

//Inclusão do calculo do segundo desafio da primeira carta
densidadePopulacional2 = populacao2 / area2;
pibPerCapita2 = pib2 / populacao2;

printf("============================================== \n\n");
printf("Carta 1: \n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %f\n", populacao1);
printf("Área: %.2f km2 \n", area1);
printf("PIB: %.2f bilhões de reais \n", pib1);
printf("Números de Pontos Turísticos: %d\n", pontoTuristico1);
printf("Densidade Populacional: %.2f hab/km2 \n", densidadePopulacional1);
printf("PIB per Capita: %.2f reais \n", pibPerCapita1);


printf("============================================== \n\n");
printf("Carta 2: \n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %f\n", populacao2);
printf("Área: %.2f km2 \n", area2);
printf("PIB: %.2f bilhões de reais \n", pib2);
printf("Números de Pontos Turísticos: %d\n", pontoTuristico2);
printf("Densidade Populacional: %.2f hab/km2 \n", densidadePopulacional2);
printf("PIB per Capita: %.2f reais \n", pibPerCapita2);


return 0;
}
