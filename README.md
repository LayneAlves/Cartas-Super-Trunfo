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
    //Declaração das variáveis para as duas cartas
    struct Carta carta1;
    struct Carta carta2;

    printf("Estado (A a H) : ");
    scanf("%c", &carta1.estado);

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

    
    printf("\n");
    

    
    // Entrada de dados para a segunda carta
    printf("--- Carta 2 ---\n");
    
    printf("Estado (A a H) : ");
    scanf("%c", &carta1.estado);

    printf("Código da Carta (ex: B02): ");
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

    
    printf("\n");
 
    return 0;
}
