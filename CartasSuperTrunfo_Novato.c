#include <stdio.h>

// ===============================================
// NÍVEL NOVATO - Super Trunfo
// ===============================================
// Objetivo: Cadastrar UMA carta e exibir seus dados
// Propriedades: População, Área, PIB, Pontos Turísticos
// ===============================================

int main() {

    // ===== DECLARAÇÃO DAS VARIÁVEIS =====
    char estado[50], codigo[20], nome[50];
    unsigned long int populacao;
    float area, pib;
    int pontosTuristicos;

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

    return 0;
}
