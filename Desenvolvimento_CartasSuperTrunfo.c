#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // -------------------- NÍVEL NOVATO --------------------
    // Cadastro e exibição básica de duas cartas

    // Carta 1
    char codigo1[4];
    char nome1[30];
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;

    // Carta 2
    char codigo2[4];
    char nome2[30];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n--- Cartas Cadastradas ---\n");
    printf("Carta 1 - %s (%s)\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n\n",
           codigo1, nome1, populacao1, area1, pib1, pontos_turisticos1);

    printf("Carta 2 - %s (%s)\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n\n",
           codigo2, nome2, populacao2, area2, pib2, pontos_turisticos2);

    // -------------------- NÍVEL AVENTUREIRO --------------------
    // Cálculo de densidade populacional e PIB per capita

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    printf("--- Atributos Calculados ---\n");
    printf("Carta 1 - Densidade Populacional: %.2f hab/km² | PIB per Capita: %.6f bilhões/hab\n",
           densidade1, pib_per_capita1);
    printf("Carta 2 - Densidade Populacional: %.2f hab/km² | PIB per Capita: %.6f bilhões/hab\n\n",
           densidade2, pib_per_capita2);

    // -------------------- NÍVEL MESTRE --------------------
    // Comparação das cartas + cálculo do Super Poder

    // Super Poder = população + área + PIB + pontos turísticos + PIB per capita + 1/densidade
    float super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);
    float super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);

    printf("--- Comparação de Atributos ---\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional (menor vence): %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: %d\n\n", super_poder1 > super_poder2);

    printf("--- Super Poder ---\n");
    printf("Carta 1: %.2f\n", super_poder1);
    printf("Carta 2: %.2f\n", super_poder2);

    return 0;
}
