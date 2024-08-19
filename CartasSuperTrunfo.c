#include <stdio.h>

int main(){
    char estado; 
    char codigoCarta[4]; 
    char nomeCidade[30];
    int populacao;
    float area;
    float pib;
    int numeroPontosTuristicos;

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
   
    printf(" --- \n");
    printf("CONFIRMACAO!\n");
    printf(" --- \n");
    printf("Estado: %c\n",estado);
    printf("Codigo da Carta: %s\n",codigoCarta);
    printf("Nome da Cidade: %s\n",nomeCidade);
    printf("Populacao: %d\n",populacao);
    printf("Area: %f\n",area);
    printf("PIB: %f\n",pib);
    printf("Numero de Pontos Turisticos: %d",numeroPontosTuristicos);
    
    return 0;
}
