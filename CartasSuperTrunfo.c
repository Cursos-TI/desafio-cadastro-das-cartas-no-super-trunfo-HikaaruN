#include <stdio.h>

int main () {
    
    char inicial1, inicial2;
    char codigo1[10], codigo2[10]; 
    char cidade1[20], cidade2[20];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

// Informações para a carta 1:

    printf("Informar uma letra de A a H para a primeira carta: \n");
    scanf("%c", &inicial1);

    printf("Infomrar a letra informada acima com uma numeração de 01 a 04 junto (Ex: A01): \n");
    scanf("%s", &codigo1);

    printf("Infomrar o nome de uma cidade: \n");
    scanf("%s", &cidade1);

    printf("Infomrar o número de habitantes dessa cidade: \n");
    scanf("%d", &populacao1);

    printf("Infomrar a área da cidade em quilometros quadrados: \n");
    scanf("%f", &area1);

    printf("Infomrar o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Infomrar a quantidade de pontos turisticos nessa cidade: \n");
    scanf("%d", &pontos1);

// Informações para a carta 2:

    printf("Informar uma letra de A a H para a segunda carta: \n");
    scanf(" %c", &inicial2);

    printf("Infomrar a letra informada acima com uma numeração de 01 a 04 junto (Ex: A01): \n");
    scanf("%s", &codigo2);

    printf("Infomrar o nome de uma cidade: \n");
    scanf("%s", &cidade2);

    printf("Infomrar o número de habitantes dessa cidade: \n");
    scanf("%d", &populacao2);

    printf("Infomrar a área da cidade em quilometros quadrados: \n");
    scanf("%f", &area2);

    printf("Infomrar o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Infomrar a quantidade de pontos turisticos nessa cidade: \n");
    scanf("%d", &pontos2);

// Jogando as informações para a pessoa:

    printf("Segue as informações da primeira carta: \n\n Carta 1: \n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Número de Pontos Turisticos: %d\n\n", inicial1, codigo1, cidade1, populacao1, area1, pib1, pontos1);
    printf("Segue as informações da segunda carta: \n\n Carta 2: \n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Número de Pontos Turisticos: %d\n", inicial2, codigo2, cidade2, populacao2, area2, pib2, pontos2);

    return 0;
}
