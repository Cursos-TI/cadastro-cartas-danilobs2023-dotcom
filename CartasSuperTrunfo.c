#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char estado1[50], codigo1[20], nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // ===== CARTA 2 =====
    char estado2[50], codigo2[20], nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // ===== VARIÁVEIS CALCULADAS =====
    float densidade1, pibPerCapita1, superPoder1;
    float densidade2, pibPerCapita2, superPoder2;

    // =============================
    // LEITURA DOS DADOS - CARTA 1
    // =============================
    printf("=== Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // =============================
    // LEITURA DOS DADOS - CARTA 2
    // =============================
    printf("\n=== Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // =============================
    // CÁLCULOS
    // =============================

    // Densidade Populacional
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    // PIB per capita
    pibPerCapita1 = pib1 / (float) populacao1;
    pibPerCapita2 = pib2 / (float) populacao2;

    // Super Poder
    superPoder1 = (float)populacao1 +
                  area1 +
                  pib1 +
                  pontosTuristicos1 +
                  pibPerCapita1 +
                  (1.0 / densidade1);

    superPoder2 = (float)populacao2 +
                  area2 +
                  pib2 +
                  pontosTuristicos2 +
                  pibPerCapita2 +
                  (1.0 / densidade2);

    // =============================
    // EXIBIÇÃO DOS DADOS
    // =============================
    printf("\n=============================\n");
    printf("DADOS DAS CARTAS CADASTRADAS\n");
    printf("=============================\n\n");

    printf("=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais por habitante\n", pibPerCapita1 * 1000000000);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais por habitante\n", pibPerCapita2 * 1000000000);

    // =============================
    // COMPARAÇÕES
    // =============================
    int compPopulacao = populacao1 > populacao2;
    int compArea = area1 > area2;
    int compPIB = pib1 > pib2;
    int compPontos = pontosTuristicos1 > pontosTuristicos2;
    int compDensidade = densidade1 < densidade2; // menor vence
    int compPIBperCapita = pibPerCapita1 > pibPerCapita2;
    int compSuperPoder = superPoder1 > superPoder2;

    // =============================
    // RESULTADO
    // =============================
    printf("\nComparacao de Cartas:\n\n");

    printf("Populacao: Carta %d venceu (%d)\n",
           compPopulacao ? 1 : 2, compPopulacao);

    printf("Area: Carta %d venceu (%d)\n",
           compArea ? 1 : 2, compArea);

    printf("PIB: Carta %d venceu (%d)\n",
           compPIB ? 1 : 2, compPIB);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
           compPontos ? 1 : 2, compPontos);

    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           compDensidade ? 1 : 2, compDensidade);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           compPIBperCapita ? 1 : 2, compPIBperCapita);

    printf("Super Poder: Carta %d venceu (%d)\n",
           compSuperPoder ? 1 : 2, compSuperPoder);

    return 0;
}