#include <stdio.h>

int main() {

    printf("Infomações da CARTA 1\n");

    char  estado[5];
    char  codigo[10];
    char  cidade[10];
    unsigned long int   populacao_A, populacao_B; // (%lu) é usado no printf para exibir valores unsigned long int.
    float area_A, area_B;
    float pib_A, pib_B;
    int   pontosturisticos_A, pontosturisticos_B ;
    float densidadepopulacional_A, densidadepopulacional_B;
    float pibpercapita_A, pibpercapita_B;
    float superPoder_A, superPoder_B;

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
    scanf("%lu", &populacao_A);
    printf("Populacao: %lu\n", populacao_A);


    printf("Insira a área:\n");
    scanf("%f", &area_A);
    printf("Área: %.2f km²\n", area_A);


    printf("Insira o PIB:\n");
    scanf("%f", &pib_A);
    printf("PIB: %.2f bilhoes de reais\n", pib_A);

    
    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &pontosturisticos_A);
    printf("Pontos turisticos: %d  \n", pontosturisticos_A);

    densidadepopulacional_A = populacao_A / area_A;
    printf("A densidade populacional é: %f\n", densidadepopulacional_A);


    pibpercapita_A = pib_A / populacao_A;
    printf("Pib per Capita é: %.2f reais\n", pibpercapita_A);

    //Super Poder A
    superPoder_A = (int)(populacao_A + area_A + pib_A + pontosturisticos_A + pibpercapita_A + (densidadepopulacional_A / 1));
    printf("Super Poder (A): %.1f\n", superPoder_A);


                                          //     INFORMAÇÕES DA CARTA 02    //


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
    scanf("%lu", &populacao_B);
    printf("Populacao: %lu\n", populacao_B);


    printf("Insira a área:\n");
    scanf("%f", &area_B);
    printf("Área: %.2f km²\n", area_B);


    printf("Insira o PIB:\n");
    scanf("%f", &pib_B);
    printf("PIB: %.2f bilhoes de reais\n", pib_B);


    printf("Insira o numero de pontos turisticos:\n");
    scanf("%d", &pontosturisticos_B);
    printf("Pontos turisticos: %d\n", pontosturisticos_B);

    densidadepopulacional_B = populacao_B / area_B;
    printf("A densidade populacional é: %f\n", densidadepopulacional_B);


    pibpercapita_B = pib_B / populacao_B;
    printf("Pib per Capita é: %.2f reais\n", pibpercapita_B);

    //Super Poder B
    superPoder_B = (int)(populacao_B + area_B + pib_B + pontosturisticos_B + pibpercapita_B + (densidadepopulacional_B / 1));
    printf("Super Poder (B): %.1f\n", superPoder_B);


    
// Comparações das cartas 

printf("populacao_A > populacao_B: %d\n", populacao_A > populacao_B);
printf("area_A > area_B: %d\n", area_A > area_B);
printf("pib_A > pib_B: %d\n", pib_A > pib_B);
printf("pontosturisticos_A > pontosturisticos_B: %d\n", pontosturisticos_A > pontosturisticos_B);
printf("densidadepopulacional_A < densidadepopulacional_B: %d\n", populacao_A > populacao_B);
printf("pibpercapita_A > pibpercapita_B: %d\n", pibpercapita_A > pibpercapita_B);
printf("superPoder_A > superPoder_B: %d\n", superPoder_A > superPoder_B);


    return 0;



}
