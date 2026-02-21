#include <stdio.h>

// Constante para conversão de bilhões para unidades base
#define BILHAO 1000000000.0

// ===============================================
// NÍVEL AVENTUREIRO - Super Trunfo
// ===============================================
// Objetivo: Cadastrar UMA carta, exibir dados E propriedades calculadas
// Propriedades básicas: População, Área, PIB, Pontos Turísticos
// Propriedades calculadas: Densidade Populacional, PIB per Capita
// ===============================================

int main() {

    // ===== DECLARAÇÃO DAS VARIÁVEIS =====
    char estado[50], codigo[20], nome[50];
    unsigned long int populacao;
    float area, pib;
    int pontosTuristicos;
    
    // Variáveis calculadas
    float densidadePopulacional, pibPerCapita;

    // =============================
    // ENTRADA DE DADOS
    // =============================
    printf("=== Cadastro de Carta - Super Trunfo ===\n\n");
    
    printf("Estado: ");
    scanf(" %[^\n]", estado);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome);

    printf("Populacao: ");
    scanf("%lu", &populacao);

    printf("Area (km2): ");
    scanf("%f", &area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos);

    // =============================
    // CÁLCULO DAS PROPRIEDADES
    // =============================
    
    // Densidade Populacional = População / Área
    densidadePopulacional = (float) populacao / area;
    
    // PIB per Capita = (PIB em bilhões * 1 bilhão) / População
    // Convertemos bilhões para unidades base para obter valor em unidades monetárias por habitante
    pibPerCapita = (pib * BILHAO) / (float) populacao;

    // =============================
    // EXIBIÇÃO DOS DADOS
    // =============================
    printf("\n=== Dados da Carta Cadastrada ===\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("Populacao: %lu habitantes\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);
    
    // Propriedades calculadas
    printf("\n=== Propriedades Calculadas ===\n");
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidadePopulacional);
    printf("PIB per Capita: %.2f\n", pibPerCapita);

    return 0;
}
