#include <stdio.h>

int main() {
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    //menu principal
    printf("+++game super trunfo\n");

    //cadastro
    printf("Código da cidade:\n");
    scanf("%d",&codigo);

    printf("Nome da cidade:\n");
    scanf("%c",nome);

    printf("População: ");
    scanf("%d", &populacao);
    
printf("Área (km²): ");
    scanf("%f", &area);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    //final
    printf("++Carta Cadastrada++\n");
    printf("Código: %d\n", codigo);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);
    
    return 0;
}

