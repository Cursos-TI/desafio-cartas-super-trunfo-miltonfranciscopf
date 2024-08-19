#include <stdio.h>
float calcularDensidadePopulacional(int populacao,float area){
    return (populacao/area);
}
float calcularPIBPerCapita(float pib,int populacao){
    pib *= 1000000000; //transformar de fato pib em bilhoes
    return (pib/populacao);
}
int main(){
    char estado; 
    char codigoCarta[4]; 
    char nomeCidade[30];
    int populacao;
    float area;
    float pib;
    int numeroPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;

    printf("Desafio Cartas Super Trunfos\n");
    
    printf("Digite o NOME do Estado:");
    scanf("%s",&estado);

    printf("Digite o CODIGO da Carta:");
    scanf("%s",&codigoCarta);

    printf("Digite o NOME da Cidade:");
    scanf("%s",&nomeCidade);

    printf("Digite o NUMERO da Populacao:");
    scanf("%d",&populacao);

    printf("Digite a AREA do estado:");
    scanf("%f",&area);

    printf("Digite o PIB:");
    scanf(" %f",&pib);

    printf("Digite o NUMERO de Pontos Turisticos:");
    scanf("%d",&numeroPontosTuristicos);
    
    densidadePopulacional=calcularDensidadePopulacional(populacao,area);
    pibPerCapita=calcularPIBPerCapita(pib,populacao);

    printf(" --- \n");
    printf("CARTA CADASTRADA COM SUCESSO!\n");
    printf(" --- \n");
    printf("Estado: %c\n",estado);
    printf("Codigo da Carta: %s\n",codigoCarta);
    printf("Nome da Cidade: %s\n",nomeCidade);
    printf("Populacao: %d\n",populacao);
    printf("Area: %.2f km²\n",area);
    printf("Densidade Populacional: %.2f km²\n",densidadePopulacional);
    printf("PIB: %.2f bilhões de reais\n",pib);
    printf("PIB per Capita: %.0f reais\n",pibPerCapita);
    printf("Numero de Pontos Turisticos: %d",numeroPontosTuristicos);
    
    return 0;
}

