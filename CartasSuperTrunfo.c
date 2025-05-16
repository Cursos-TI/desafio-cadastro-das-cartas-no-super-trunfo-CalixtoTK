#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis
    char estado1[3], estado2[3], codigo1[5], codigo2[5], cidade1[50], cidade2[50];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_per_capita1, pib_per_capita2;

    // Primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (%s01-%s04): ", estado1, estado1);
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (%s01-%s04): ", estado2, estado2);
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Densidades e PIB per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Saída
    printf("\nCarta 1 - %s (%s):\n", cidade1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\nCarta 2 - %s (%s):\n", cidade2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // Comparação
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

    // Se precisar trocar a comparação, só mudar a variável. Mudar também o atributo no trecho anterior
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}