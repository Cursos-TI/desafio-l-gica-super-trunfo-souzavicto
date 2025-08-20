#include <stdio.h>
#include <stdlib.h>


// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
int main() {


    //declarando as variáveis
    char estado[50],estado2[50],codigoCarta[10],codigoCarta2[10],cidade[50],cidade2[50];
    int populacao,populacao2,turistico,turistico2, opcao;
    float area,area2,densidade,densidade2,pibPerCapita,pibPerCapita2;
    // alteração de float para double pois o float não esta suportando o numero digitado
    double pib,pib2;

    //dando as boas vindas
    printf("Seja Bem vindo ao jogo de cartas Super Trunfo 2.0 \n");
    //Menu para decisão de qual atributo comparar
    printf("\n########################### MENU ############################\n");
    printf("########## Escolha um dos atributos para comparar: ##########\n");
    printf("############ Logo após digite os dados das cartas: ##########\n");
    printf("###################### 1. População #########################\n");
    printf("###################### 2. Área ##############################\n");
    printf("###################### 3. PIB ###############################\n");
    printf("###################### 4. Numero de Pontos Turisticos #######\n");
    printf("###################### 5. Densidade Demográfica #############\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);

    //caso o usuario digite um numero diferente o programa é encerrado
    if (opcao == 0 || opcao > 5)
    {
        printf("OPÇÃO INVALIDA, O JOGO TERMINOU!");
        exit(1);
    } 
    

    //coletando os dados da primeira carta
    printf("\nDigite os dados da primeira carta: \n");
    printf("Digite o nome do estado: ");
    scanf("%s", &estado);
    printf("Digite o codigo da carta: ");
    scanf("%s", &codigoCarta);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);
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
    printf("População: %.2d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$%.2f de reais\n",pib);
    printf("Numero de pontos turisticos: %d\n",turistico);
    printf("Densidade Populacional: %.2f \n", densidade);
    printf("PIB per Capita: %.2f reais\n",pibPerCapita);


    //coletando os dados da segunda carta
    printf("\nDigite os dados da segunda carta: \n");
    printf("Digite o nome do estado: ");
    scanf("%s", &estado2);
    printf("Digite o codigo da carta: ");
    scanf("%s", &codigoCarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);
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
    printf("População: %.2d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f de reais\n",pib2);
    printf("Numero de pontos turisticos: %d\n",turistico2);
    printf("Densidade Populacional: %.2f \n", densidade2);
    printf("PIB per Capita: %.2f reais\n",pibPerCapita2);


    // switch para fazer as comparações entre as cartas
    switch (opcao)
    {
        // fazendo a comparação da população
    case 1:
        if (populacao > populacao2)
        {
        printf("\nA comparação entre as duas cidades foi: \n");
        printf("Carta 1 %s : %d\n",cidade,populacao);
        printf("Carta 2 %s : %d\n",cidade2,populacao2);
        printf("Carta 1 (%s) venceu!\n",cidade);
        }else if (populacao < populacao2)
        {
        //mostrando quem ganhou
        printf("\nA comparação entre as duas cidades foi: \n");
        printf("Carta 1 %s : %d\n",cidade,populacao);
        printf("Carta 2 %s : %d\n",cidade2,populacao2);
        printf("Carta 2 (%s) venceu!",cidade2);
        }else{
        printf("\nA comparação entre as duas cidades foi: \n");
        printf("Carta 1 %s : %d\n",cidade,populacao);
        printf("Carta 2 %s : %d\n",cidade2,populacao2);
        printf("Houve empate!  ");            
        }        
        break;
        // fazendo a comparação da Área
    case 2:
        if (area > area2)
        {
        printf("\nA comparação entre as duas cidades foi: \n");
        printf("Carta 1 %s : %.2f\n",cidade,area);
        printf("Carta 2 %s : %.2f\n",cidade2,area2);
        printf("Carta 1 (%s) venceu!\n",cidade);
        } else if (area < area2)
        {
        printf("\nA comparação entre as duas cidades foi: \n");
        printf("Carta 1 %s : %.2f\n",cidade,area);
        printf("Carta 2 %s : %.2f\n",cidade2,area2);
        printf("Carta 2 (%s) venceu!",cidade2);
        } else {
        printf("\nA comparação entre as duas cidades foi: \n");    
        printf("Carta 1 %s : %.2f\n",cidade,area);
        printf("Carta 2 %s : %.2f\n",cidade2,area2);
        printf("Houve empate!");        
        }
        break;
        // fazendo a comparação do PIB
    case 3:
        if (pib > pib2)
        {
        printf("\nA comparação entre as duas cidades foi: \n");    
        printf("Carta 1 %s : R$%.2f\n",cidade,pib);
        printf("Carta 2 %s : R$%.2f\n",cidade2,pib2);
        printf("Carta 1 (%s) venceu!\n",cidade);
        } else if (pib < pib2)
        {
        printf("\nA comparação entre as duas cidades foi: \n");
        printf("Carta 1 %s : R$%.2f\n",cidade,pib);
        printf("Carta 2 %s : R$%.2f\n",cidade2,pib2);
        printf("Carta 2 (%s) venceu!",cidade2);
        } else {
        printf("\nA comparação entre as duas cidades foi: \n");    
        printf("Carta 1 %s : R$%.2f\n",cidade,pib);
        printf("Carta 2 %s : R$%.2f\n",cidade2,pib2);
        printf("Houve empate!");        
        }
        break;
        // fazendo a comparação do ponto turistico
    case 4:
        if (turistico > turistico2)
        {
        printf("\nA comparação entre as duas cidades foi: \n");    
        printf("Carta 1 %s : %d\n",cidade,turistico);
        printf("Carta 2 %s : %d\n",cidade2,turistico2);
        printf("Carta 1 (%s) venceu!\n",cidade);
        } else if (turistico < turistico2)
        {  
        printf("\nA comparação entre as duas cidades foi: \n");          
        printf("Carta 1 %s : %d\n",cidade,turistico);
        printf("Carta 2 %s : %d\n",cidade2,turistico2);
        printf("Carta 2 (%s) venceu!",cidade2);
        } else {
        printf("\nA comparação entre as duas cidades foi: \n");    
        printf("Carta 1 %s : %d\n",cidade,turistico);
        printf("Carta 2 %s : %d\n",cidade2,turistico2);
        printf("Houve empate!");        
        }
        break;
        // fazendo a comparação da densidade
    case 5:
        if (densidade < densidade2)
        {
        printf("\nA comparação entre as duas cidades foi: \n");    
        printf("Carta 1 %s : %f\n",cidade,densidade);
        printf("Carta 2 %s : %f\n",cidade2,densidade2);
        printf("Carta 1 (%s) venceu!\n",cidade);
        } else if (densidade > densidade2)
        { 
        printf("\nA comparação entre as duas cidades foi: \n");           
        printf("Carta 1 %s : %f\n",cidade,densidade);
        printf("Carta 2 %s : %f\n",cidade2,densidade2);
        printf("Carta 2 (%s) venceu!",cidade2);
        } else {
        printf("\nA comparação entre as duas cidades foi: \n");    
        printf("Carta 1 %s : %f\n",cidade,densidade);
        printf("Carta 2 %s : %f\n",cidade2,densidade2);
        printf("Houve empate!");        
        }
        break;

    }





    return 0;
}
    


    return 0;
}

