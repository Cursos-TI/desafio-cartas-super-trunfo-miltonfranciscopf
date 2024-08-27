#include <stdio.h>
float calcularDensidadePopulacional(int populacao,float area){
    return (populacao/area);
}
float calcularPIBPerCapita(float pib,int populacao){
    pib *= 1000000000; //transformar de fato em pib em bilhoes
    return (pib/populacao);
}
int main(){
    //iniciando variaveis da primeira carta
    char estadoA;//uma letra
    char codigoCartaA[3];//letra + numero de dois digitos(ex. 01)
    char nomeCidadeA[70];
    int populacaoA;
    float areaA;
    float pibA; 
    int numeroPontosTuristicosA;
    float densidadePopulacionalA;
    float pibPerCapitaA;
    float superPoderA;
    //iniciando variaveis da segunda carta
    char estadoB;//uma letra
    char codigoCartaB[3];//letra + numero de dois digitos(ex. 01)
    char nomeCidadeB[70];
    int populacaoB;
    float areaB;
    float pibB; 
    int numeroPontosTuristicosB;
    float densidadePopulacionalB;
    float pibPerCapitaB;
    float superPoderB;

    printf("Desafio Cartas Super Trunfos\n");
    
    printf("--CADASTRAR PRIMEIRA CARTA--\n");
    //digitando a primeira carta
    printf("Digite o NOME do Estado da primeira carta:");
    scanf("%s",&estadoA);

    printf("Digite o CODIGO da primeira carta:");
    scanf("%s",&codigoCartaA);

    printf("Digite o NOME da Cidade da primeira carta:");
    scanf(" %s", &nomeCidadeA);

    printf("Digite o NUMERO da Populacao da primeira carta:");
    scanf("%d",&populacaoA);

    printf("Digite a AREA da primeira carta:");
    scanf("%f",&areaA);

    printf("Digite o PIB da primeira carta:");
    scanf("%f",&pibA);

    printf("Digite o NUMERO de Pontos Turisticos da primeira carta:");
    scanf("%d",&numeroPontosTuristicosA);
    
    densidadePopulacionalA=calcularDensidadePopulacional(populacaoA,areaA);
    pibPerCapitaA=calcularPIBPerCapita(pibA,populacaoA);
    superPoderA+=(float)populacaoA+areaA+pibA+pibPerCapitaA+densidadePopulacionalA+numeroPontosTuristicosA;

    printf("--CADASTRAR SEGUNDA CARTA--\n");
    //digitando a segunda carta
    printf("Digite o NOME do Estado da segunda carta:");
    scanf("%s",&estadoB);

    printf("Digite o CODIGO da segunda carta:");
    scanf("%s",&codigoCartaB);

    printf("Digite o NOME da Cidade da segunda carta:");
    scanf(" %s",&nomeCidadeB);

    printf("Digite o NUMERO da Populacao da segunda carta:");
    scanf("%d",&populacaoB);

    printf("Digite a AREA da segunda carta:");
    scanf("%f",&areaB);

    printf("Digite o PIB da segunda carta:");
    scanf("%f",&pibB);

    printf("Digite o NUMERO de Pontos Turisticos da segunda carta:");
    scanf("%d",&numeroPontosTuristicosB);
    
    densidadePopulacionalB=calcularDensidadePopulacional(populacaoB,areaB);
    pibPerCapitaB=calcularPIBPerCapita(pibB,populacaoB);
    superPoderB+=(float)populacaoB+areaB+pibB+pibPerCapitaB+densidadePopulacionalB+numeroPontosTuristicosB;

    //imprimindo resultado
    printf(" --- \n");
    printf("PRIMEIRA CARTA CADASTRADA COM SUCESSO!\n");
    printf(" --- \n");
    printf("Estado: %c\n",estadoA);
    printf("Codigo da Carta: %s\n",codigoCartaA);
    printf("Nome da Cidade: %s\n",nomeCidadeA);
    printf("Populacao: %d\n",populacaoA);
    printf("Area: %.2f km²\n",areaA);
    printf("Densidade Populacional: %.2f km²\n",densidadePopulacionalA);
    printf("PIB: %.2f bilhões de reais\n",pibA);
    printf("PIB per Capita: %.0f reais\n",pibPerCapitaA);
    printf("Numero de Pontos Turisticos: %d\n",numeroPontosTuristicosA);
    
    printf(" --- \n");
    printf("SEGUNDA CARTA CADASTRADA COM SUCESSO!\n");
    printf(" --- \n");
    printf("Estado: %c\n",estadoB);
    printf("Codigo da Carta: %s\n",codigoCartaB);
    printf("Nome da Cidade: %s\n",nomeCidadeB);
    printf("Populacao: %d\n",populacaoB);
    printf("Area: %.2f km²\n",areaB);
    printf("Densidade Populacional: %.2f km²\n",densidadePopulacionalB);
    printf("PIB: %.2f bilhões de reais\n",pibB);
    printf("PIB per Capita: %.0f reais\n",pibPerCapitaB);
    printf("Numero de Pontos Turisticos: %d\n",numeroPontosTuristicosB);
    printf(" --- \n");
    printf("--RESULTADO DA COMPARACAO--\n");
    printf("Populacao: %d\n",populacaoA>populacaoB);
    printf("Area: %d\n",areaA>areaB);
    printf("Densidade Populacional: %d\n",densidadePopulacionalA<densidadePopulacionalB);
    printf("PIB: %d\n",pibA>pibB);
    printf("PIB per Capita: %d\n",pibPerCapitaA>pibPerCapitaB);
    printf("Numero de Pontos Turisticos: %d\n",numeroPontosTuristicosA>numeroPontosTuristicosB);
    printf("Super Poder: %d\n",superPoderA>superPoderB);

    return 0;
}

