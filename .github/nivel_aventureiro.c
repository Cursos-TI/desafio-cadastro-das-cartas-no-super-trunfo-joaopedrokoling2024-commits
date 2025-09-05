#include <stdio.h>

int main() {
    // Dados da primeira carta
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1;

    // Dados da segunda carta
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos automáticos da primeira carta
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos automáticos da segunda carta
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição dos dados
    printf("\n===== Dados da Primeira Carta =====\n");
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n===== Dados da Segunda Carta =====\n");
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    return 0;
}
