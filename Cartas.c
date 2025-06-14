//Projeto final

#include <stdio.h>

struct Carta {
    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main(){
    struct Carta carta1;
    struct Carta carta2;

    float densidade1, pibPerCapita1;
    float densidade2, pibPerCapita2;
    float superPoder;
    int resultado;

    // ----- Carta 1 -----
    printf("Estado (A a H) : ");
    scanf(" %c", &carta1.estado);
    while (getchar() != '\n');

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);
    while (getchar() != '\n');

    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    while (getchar() != '\n');

    printf("PIB (bilhões de reais): ");
    scanf("%f", &carta2.pib);
    while (getchar() != '\n');

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    while (getchar() != '\n');
   

    // Cálculo carta 1
    densidade1 = carta1.populacao / carta1.area;
    pibPerCapita1 = carta1.pib / carta1.populacao;

    printf("\nDensidade Populacional (carta 1): %.2f hab/km²\n", densidade1);
    printf("PIB per capita (carta 1): %.6f bilhões/hab\n\n", pibPerCapita1);

    // ----- Carta 2 -----
    printf("--- Carta 2 ---\n");

    printf("Estado (A a H) : ");
scanf(" %c", &carta2.estado);
while (getchar() != '\n');

    printf("Código da Carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);
    while (getchar() != '\n');

    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    while (getchar() != '\n');

    printf("PIB (bilhões de reais): ");
    scanf("%f", &carta2.pib);
    while (getchar() != '\n');

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    while (getchar() != '\n');

    // Cálculo carta 2
    densidade2 = carta2.populacao / carta2.area;
    pibPerCapita2 = carta2.pib / carta2.populacao;

    printf("\nDensidade Populacional (carta 2): %.2f hab/km²\n", densidade2);
    printf("PIB per capita (carta 2): %.6f bilhões/hab\n\n", pibPerCapita2);

    // ----- Comparando por PIB per capita ----
    printf("Comparando as cartas com base no PIB per capita...\n");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 venceu com maior PIB per capita!\n");
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 venceu com maior PIB per capita!\n");
    }

    // ----- Comparação baseada em Densidade Populacional -----
    printf("Comparação de cartas (Atributo: Densidade Populacional):\n\n");

    printf("Carta 1 - %s (%c): %.2f hab/km²\n", carta1.cidade, carta1.estado, densidade1);
    printf("Carta 2 - %s (%c): %.2f hab/km²\n", carta2.cidade, carta2.estado, densidade2);

    if (densidade1 < densidade2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (densidade2 < densidade1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("\nResultado: Empate! Ambas têm a mesma densidade populacional.\n");
    }


    // ----- Super Poder -----
    // Critério: maior densidade populacional vence
    superPoder = (densidade1 > densidade2) ? 1.0 : 0.0;
    resultado = superPoder;

    if (resultado == 1) {
        printf("Resultado da maior densidade populacional: Carta 1 venceu!\n");
    } else {
        printf("Resultado da maior densidade populacional: Carta 2 venceu!\n");
    }

    return 0;
}
