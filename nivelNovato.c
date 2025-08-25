#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

//declarando as variáveis
    char estado[50],estado2[50],codigoCarta[10],codigoCarta2[10],cidade[50],cidade2[50];
    int populacao,populacao2,turistico,turistico2;
    float area,area2,densidade,densidade2,pibPerCapita,pibPerCapita2;
    // alteração de float para double pois o float não esta suportando o numero digitado
    double pib,pib2;

    //dando as boas vindas
    printf("Seja Bem vindo ao jogo de cartas Super Trunfo 2.0 \n");

    //coletando os dados da primeira carta
    printf("\nDigite os dados da primeira carta: \n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigoCarta);
    getchar();
    fgets(cidade2 , sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("digite área da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    // alteração de float para double pois o float não esta suportando o numero digitado
    scanf("%lf", &pib);
    printf("Digite o numero de pontos turísticos da cidade: ");
    scanf("%d", &turistico);

    // fazendo os calculos  de densidade e pib per capita
    densidade = (float) populacao / area;
    pibPerCapita = (float) pib / populacao;

    // Mostrando os dados da carta 1:
    printf("Carta 1\n");
    printf("Estado: %s\n",estado);
    printf("Codigo do estado %s\n",codigoCarta);
    printf("Nome da cidade: %s \n",cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$%.2f de reais\n",pib);
    printf("Numero de pontos turisticos: %d\n",turistico);
    printf("Densidade Populacional: %.2f \n", densidade);
    printf("PIB per Capita: %.2f reais\n",pibPerCapita);


    //coletando os dados da segunda carta
    printf("\nDigite os dados da segunda carta: \n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado2);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigoCarta2);
    getchar();
    fgets(cidade2 , sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("digite área da cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    // alteração de float para double pois o float não esta suportando o numero digitado
    scanf("%lf", &pib2);
    printf("Digite o numero de pontos turísticos da cidade: ");
    scanf("%d", &turistico2);

    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) pib2 / populacao2;
    //mostrando os dados da carta 2:
    printf("Carta 2\n");
    printf("Estado: %s\n",estado2);
    printf("Codigo do estado %s\n",codigoCarta2);
    printf("Nome da cidade: %s \n",cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f de reais\n",pib2);
    printf("Numero de pontos turisticos: %d\n",turistico2);
    printf("Densidade Populacional: %.2f \n", densidade2);
    printf("PIB per Capita: %.2f reais\n",pibPerCapita2);


    // fazendo a comparação de atributos das cartas
    if (pib > pib2)
    {
        //mostrando quem ganhou
        printf("\nCarta 1 %s : %.2f\n",cidade,pib);
        printf("Carta 2 %s : %.2f\n",cidade2,pib2);
        printf("Carta 1 (%s) venceu!\n",cidade);
    } else if (pib < pib2)
    {
         //mostrando quem ganhou
        printf("\nCarta 1 %s : %.2f\n",cidade,pib);
        printf("Carta 2 %s : %.2f\n",cidade2,pib2);
        printf("Carta 2 (%s) venceu!",cidade2);
    }else {
        printf("Houve um empate! \n");
        printf("\nCarta 1 %s : %.2f\n",cidade,pib);
        printf("Carta 2 %s : %.2f\n",cidade2,pib2);
    }

    return 0;
}
