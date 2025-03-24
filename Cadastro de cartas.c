#include <stdio.h>

int main() {

    printf("CARTA1 \n");

    char estado;
    char codigo[4];
    char cidade[10];
    int  populacao;
    float area;
    float pib;
    int pontosturisticos;
    
    printf("Insira o estado:\n ");
    scanf("%c", &estado);
    printf("Estado: %c\n", estado);
    

    printf("Insira o código:\n ");
    scanf("%s", &codigo);
    printf("Código: %s\n", codigo);


    printf("Insira a cidade:\n ");
    scanf("%s", &cidade);
    printf("Cidade: %s\n", cidade);


    printf("Insira o numero da população:\n ");
    scanf("%d", &populacao);
    printf("Populacao: %d\n", populacao);


    printf("Insira a área:\n ");
    scanf("%f", &area);
    printf("Área: %.2f km²\n", area);


    printf("Insira o PIB:\n ");
    scanf("%f", &pib);
    printf("PIB: %.2f bilhoes de reais\n", pib);

    
    printf("Insira o numero de pontos turisticos:\n ");
    scanf("%d", &pontosturisticos);
    printf("Pontos turisticos: %d \n", pontosturisticos);


//INFORMAÇÕES DA CARTA 02//


    printf("CARTA2 \n");

    
    printf("Insira o estado:\n ");
    scanf("%c", &estado);
    printf("Estado:%c\n", estado);


    printf("Insira o código: ");
    scanf("%s", &codigo);
    printf("Código: %s\n", codigo);


    printf("Insira a cidade:\n ");
    scanf("%s", &cidade);
    printf("Cidade: %s\n", cidade);


    printf("Insira o numero da populacao:\n ");
    scanf("%d", &populacao);
    printf("Populacao: %d\n", populacao);


    printf("Insira a área:\n ");
    scanf("%f", &area);
    printf("Área: %.2f km²\n", area);


    printf("Insira o PIB:\n ");
    scanf("%f", &pib);
    printf("PIB: %.2f bilhoes de reais\n", pib);


    printf("Insira o numero de pontos turisticos:\n ");
    scanf("%d", &pontosturisticos);
    printf("Pontos turisticos: %d\n", pontosturisticos);





    return 0;



}
