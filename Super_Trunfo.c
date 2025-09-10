#include <stdio.h>

int main() {
    // Estrutura para representar uma carta
    struct Carta {
        char codigo[4];              
        unsigned long int populacao; 
        float area;                  
        float pib;                   
        int pontosTuristicos;        
        float densidadePopulacional; 
        float pibPerCapita;          
    };

    // Declaração das duas cartas
    struct Carta carta1, carta2;

    // Cadastro da carta 1
    printf("Digite o codigo da primeira carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Digite a populacao da cidade: ");
    scanf("%lu", &carta1.populacao);

    printf("Digite a area da cidade: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos da carta 1
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    // Cadastro da carta 2
    printf("\nDigite o codigo da segunda carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Digite a populacao da cidade: ");
    scanf("%lu", &carta2.populacao);

    printf("Digite a area da cidade: ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos da carta 2
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Exibindo os dados cadastrados
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Codigo: %s\n", carta1.codigo);
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.6f bilhoes/habitante\n", carta1.pibPerCapita);

    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Codigo: %s\n", carta2.codigo);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.6f bilhoes/habitante\n", carta2.pibPerCapita);

    return 0;
}
