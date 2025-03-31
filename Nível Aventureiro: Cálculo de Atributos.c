#include <stdio.h>

int main() {

    printf("Infomações da CARTA 1\n");

    char estado[5];
    char codigo[10];
    char cidade[10];
    int  populacao_A, populacao_B;
    float area_A, area_B;
    float pib_A, pib_B;
    int pontosturisticos;
    float densidadepopulacional;
    float pibpercapita;

    printf("Insira o estado:\n");
    scanf("%s", &estado);
    printf("Estado: %s\n", estado);
    

    printf("Insira o código:\n");
    scanf("%s", &codigo);
    printf("Código: %s\n", codigo);


    printf("Insira a cidade:\n");
    scanf("%s", &cidade);
    printf("Cidade: %s\n", cidade);


    printf("Insira o numero da população:\n");
    scanf("%d", &populacao_A);
    printf("Populacao: %d\n", populacao_A);


    printf("Insira a área:\n");
    scanf("%f", &area_A);
    printf("Área: %.2f km²\n", area_A);


    printf("Insira o PIB:\n");
    scanf("%f", &pib_A);
    printf("PIB: %.2f bilhoes de reais\n", pib_A);

    
    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &pontosturisticos);
    printf("Pontos turisticos: %d  \n", pontosturisticos);

    densidadepopulacional = populacao_A / area_A;
    printf("A densidade populacional é: %f\n", densidadepopulacional);


    pibpercapita = pib_A / populacao_A;
    printf("Pib per Capita é: %.2f reais\n", pibpercapita);


//****INFORMAÇÕES DA CARTA 02***//


    printf("Infomações da CARTA 2\n");

    printf("Insira o estado:\n");
    scanf("%s", &estado);
    printf("Estado: %s\n", estado);


    printf("Insira o código:\n");
    scanf("%s", &codigo);
    printf("Código: %s\n", codigo);


    printf("Insira a cidade:\n");
    scanf("%s", &cidade);
    printf("Cidade: %s\n", cidade);


    printf("Insira o numero da populacao:\n");
    scanf("%d", &populacao_B);
    printf("Populacao: %d\n", populacao_B);


    printf("Insira a área:\n");
    scanf("%f", &area_B);
    printf("Área: %.2f km²\n", area_B);


    printf("Insira o PIB:\n");
    scanf("%f", &pib_B);
    printf("PIB: %.2f bilhoes de reais\n", pib_B);


    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &pontosturisticos);
    printf("Pontos turisticos: %d\n", pontosturisticos);

    densidadepopulacional = populacao_B / area_B;
    printf("A densidade populacional é: %f\n", densidadepopulacional);


    pibpercapita = pib_B / populacao_B;
    printf("Pib per Capita é: %.2f reais\n", pibpercapita);

    // Valores de DENSIDADE OPERACIONAL E PIB PER CAPITA DAS CARTAS

      //operação divisao
//divisao = numero1 / numero2;

//Densidade Populacional: População / Área = x
//PIB per Capita: PIB / População =  x







    return 0;



}
