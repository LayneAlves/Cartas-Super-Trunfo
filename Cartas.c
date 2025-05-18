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
    // Declaração das variáveis para as duas cartas
    struct Carta carta1;
    struct Carta carta2;

    float densidade1, pibPerCapita1;
    float densidade2, pibPerCapita2;

    printf("Estado (A a H) : ");
    scanf(" %c", &carta1.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.cidade);
    
    printf("População: ");
    scanf("%d", &carta1.populacao);
    while (getchar() != '\n');

    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    while (getchar() != '\n');

    printf("PIB (bilhões de reais): ");
    scanf("%f", &carta1.pib);
    while (getchar() != '\n');

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    while (getchar() != '\n');

    // Cálculos para carta 1
    densidade1 = carta1.populacao / carta1.area;
    pibPerCapita1 = carta1.pib / carta1.populacao;

    printf("\nDensidade Populacional (carta 1): %.2f hab/km²\n", densidade1);
    printf("PIB per capita (carta 1): %.2f bilhões/hab\n\n", pibPerCapita1);


    // Entrada de dados para a segunda carta
    printf("--- Carta 2 ---\n");
    
    printf("Estado (A a H) : ");
    scanf(" %c", &carta2.estado);

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

    // Cálculos para carta 2
    densidade2 = carta2.populacao / carta2.area;
    pibPerCapita2 = carta2.pib / carta2.populacao;

    printf("\nDensidade Populacional (carta 2): %.2f hab/km²\n", densidade2);
    printf("PIB per capita (carta 2): %.2f bilhões/hab\n", pibPerCapita2);

    return 0;
}
