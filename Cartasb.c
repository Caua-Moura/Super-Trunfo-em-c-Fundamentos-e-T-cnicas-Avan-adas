#include <stdio.h>

int main (){

    char nome[40], estado[40], cidade[40], codigocarta[40];
    int populacao, pontosTuristicos;
    float aKm², pib;

    printf("Digite o nome do seu estado: ");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = '\0'; // remove o \n

    printf("Digite o código da carta: ");
    fgets(codigocarta, sizeof(codigocarta), stdin);
    codigocarta[strcspn(codigocarta, "\n")] = '\0';

    printf("Digite o nome da cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    getchar(); // limpa o \n do buffer

    printf("Digite a área em Km²: ");
    scanf("%f", &aKm²);
    getchar();

    printf("Digite o PIB: ");
    scanf("%f", &pib);
    getchar();

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);
    getchar();

    printf("Carta 1 \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigocarta);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área em Km²: %.2f \n", aKm²);
    printf("PIB: %.2f \n", pib);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos);
}