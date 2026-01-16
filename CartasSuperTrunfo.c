#include <stdio.h>

int main() {
    // Carta 1 
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;
    float superpoder1;


    //carta 2 
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;


    // Entrada de dados da carta 1
    printf("===Cadastro da Carta 1===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf(" Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a aerea em Km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    densidadepopulacional1 = (float) populacao1 / area1; 

    pibpercapita1 = (pib1*1000000000.0) / populacao1;

    superpoder1 = (float)populacao1 + area1 + pib1+ (float)pontosturisticos1 + pibpercapita1 +(1.0f / densidadepopulacional1);

    //Entrada dos dados da carta 2
    printf("===Cadastro da Carta 2===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf(" Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a aerea em Km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    
    densidadepopulacional2 = (float) populacao2 / area2; 

    pibpercapita2 = (pib2*1000000000.0) / populacao2;

     superpoder2 = (float)populacao2 + area2 + pib2+ (float)pontosturisticos2 + pibpercapita2 +(1.0 / densidadepopulacional2);


    //Exiição de dados
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: %.2f reais\n",pibpercapita1);
    printf("Super Poder: %.2F\n", superpoder1);


    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n",pibpercapita2);
    printf("Super Poder: %.2F\n", superpoder2); 


    // Comparação das cartas
    printf("\n=== Comparação das cartas ===\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    printf(" Pontos turisticos: Carta %d venceu (%d)\n", (pontosturisticos1 > pontosturisticos2) ? 1 : 2, (pontosturisticos1 > pontosturisticos2));
    printf("densidade populacional: Carta %d venceu (%d)\n", (densidadepopulacional1 < densidadepopulacional2) ? 1 : 2, (densidadepopulacional1 < densidadepopulacional2));
    printf("PIB per capita: Carta %d venceu (%d)\n", (pibpercapita1 > pibpercapita2) ? 1 : 2, (pibpercapita1 > pibpercapita2));
    printf("Super poder: Carta %d venceu (%d)\n", (superpoder1 > superpoder2) ? 1 : 2, (superpoder1 > superpoder2)); 

    return 0;

}
