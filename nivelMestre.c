//tema 2 - nivel Mestre
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    //declarando as variáveis
    char estado[50],estado2[50],codigoCarta[4],codigoCarta2[4],cidade[50],cidade2[50];
    int populacao,populacao2,turistico,turistico2, opcao, opcao2, resultado,resultado2;
    float area,area2,densidade,densidade2,pibPerCapita,pibPerCapita2;
    // alteração de float para double pois o float não esta suportando o numero digitado
    double pib,pib2,superPoder,superPoder2;
    float carta1Rodada1 = 0, carta2Rodada1 = 0;
    float carta1Rodada2 = 0, carta2Rodada2 = 0;

    printf("Digite os Dados da Primeira Carta: \n");
    printf("Digite o Estado: ");
    scanf("%s", estado);
    printf("Digite o Codigo da Carta: ");
    scanf("%s", codigoCarta);
    printf("Digite o Nome da Cidade: ");
    getchar();
    fgets(cidade , sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';
    printf("Digite a População: ");
    scanf("%d", &populacao);
    printf("Digite a Área (KM²): ");
    scanf("%f",&area);    
    printf("Digite o PIB: ");
    scanf("%lf", &pib);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &turistico);

    // fazendo os calculos da carta 1:
    densidade = (float) (populacao / area);
    pibPerCapita = (float) (pib / populacao);
    superPoder = (float)populacao + area + pib + turistico + pibPerCapita + (1.0 / densidade);

    // Mostrando os dados da primeira carta:
    printf("Carta 1\n");
    printf("Estado: %s\n",estado);
    printf("Codigo do estado %s\n",codigoCarta);
    printf("Nome da cidade: %s \n",cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$%.2lf de reais\n",pib);
    printf("Numero de pontos turisticos: %d\n",turistico);
    printf("Densidade Populacional: %.2f \n", densidade);
    printf("PIB per Capita: %.2f reais\n",pibPerCapita);
    
    // entrando com os dados da segunda carta:
    printf("Digite os Dados da Segunda Carta: \n");
    printf("Digite o Estado: ");
    scanf("%s", estado2);
    printf("Digite o Codigo da Carta: ");
    scanf("%s", codigoCarta2);
    printf("Digite o Nome da Cidade: ");
    getchar();
    fgets(cidade2 , sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    printf("Digite a Área (KM²): ");
    scanf("%f",&area2);    
    printf("Digite o PIB: ");
    scanf("%lf", &pib2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &turistico2);

    // fazendo os calculos da carta 2:
    densidade2 = (float) (populacao2 / area2);
    pibPerCapita2 = (float) (pib2 / populacao2);  
    superPoder2 = (float)populacao2 + area2 + pib2 + turistico2 + pibPerCapita2 + (1.0 / densidade2);  

    //Mostrando os dados da segunda carta:
    printf("Carta 2\n");
    printf("Estado: %s\n",estado2);
    printf("Codigo do estado %s\n",codigoCarta2);
    printf("Nome da cidade: %s \n",cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f (km²)\n", area2);
    printf("PIB: R$%.2lf de reais\n",pib2);
    printf("Numero de pontos turisticos: %d\n",turistico2);
    printf("Densidade Populacional: %.2f \n", densidade2);
    printf("PIB per Capita: %.2f reais\n",pibPerCapita2);


    printf("\n########################### MENU ############################\n");
    printf("########## Escolha um dos atributos para comparar: ##########\n");
    printf("###################### 1. População #########################\n");
    printf("###################### 2. Área ##############################\n");
    printf("###################### 3. PIB ###############################\n");
    printf("###################### 4. Numero de Pontos Turisticos #######\n");
    printf("###################### 5. Densidade Demográfica (menor vence)\n");
    printf("###################### 6. PIB Per Capita ####################\n");
    printf("###################### 7. Super Poder #######################\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);



    switch (opcao)
    {
    case 1:
        printf("Você Escolheu a Opção População \n");
        printf("Carta 1: %s, População: %d \n", cidade , populacao);
        printf("Carta 2: %s, População: %d \n", cidade2, populacao2);
        resultado = populacao > populacao2 ? 1 : 0;
        carta1Rodada1 = (float) populacao;
        carta2Rodada1 = (float) populacao2;
        break;
    case 2:
        printf("Você Escolheu a Opção Área \n");
        printf("Carta 1: %s, Área (km²): %.2f \n", cidade , area);
        printf("Carta 2: %s, Área (km²): %.2f \n", cidade2, area2);
        resultado = area > area2 ? 1 : 0;
        carta1Rodada1 =  area;
        carta2Rodada1 =  area2;
        break;
    case 3:
        printf("Você Escolheu a Opção PIB \n");
        printf("Carta 1: %s, PIB: %lf \n", cidade , pib);
        printf("Carta 2: %s, PIB: %lf \n", cidade2, pib2);
        resultado = pib > pib2 ? 1 : 0;
        carta1Rodada1 =  pib;
        carta2Rodada1 =  pib2;
        break;
    case 4:
        printf("Você Escolheu a Opção Pontos Turísticos \n");
        printf("Carta 1: %s, Pontos Turísticos: %d \n", cidade , turistico);
        printf("Carta 2: %s, Pontos Turísticos: %d \n", cidade2, turistico2);
        resultado = turistico > turistico2 ? 1 : 0;
        carta1Rodada1 = (float) turistico;
        carta2Rodada1 = (float) turistico2;
        break;
    case 5:
        printf("Você Escolheu a Opção Densidade Populacional \n");
        printf("Carta 1: %s, População: %.2f \n", cidade , densidade);
        printf("Carta 2: %s, População: %.2f \n", cidade2, densidade2);
        resultado = densidade < densidade2 ? 1 : 0;
        carta1Rodada1 =  densidade;
        carta2Rodada1 =  densidade2;
        break;
    case 6:
        printf("Você Escolheu a Opção População \n");
        printf("Carta 1: %s, População: %.2f \n", cidade , pibPerCapita);
        printf("Carta 2: %s, População: %.2f \n", cidade2, pibPerCapita2);
        resultado = pibPerCapita > pibPerCapita2 ? 1 : 0;
        carta1Rodada1 =  pibPerCapita;
        carta2Rodada1 =  pibPerCapita2;
        break;

    case 7:
        printf("Você Escolheu a Opção População \n");
        printf("Carta 1: %s, Super Poder: %.2f \n", cidade , superPoder);
        printf("Carta 2: %s, Super Poder: %.2f \n", cidade2, superPoder2);
        resultado = superPoder > superPoder2 ? 1 : 0;
        carta1Rodada1 =  superPoder;
        carta2Rodada1 =  superPoder2;
        break;    

    default:
            if (opcao == 0 || opcao > 7)
        {
            printf("OPÇÂO INVALIDA!, Reinicie Para Jogar Novamente!");
            exit(1);
        }
        break;
    }

    printf("\n########################### MENU ##########################\n");
    printf("########## Escolha um dos atributos para comparar: ##########\n");
    printf("############ Difrente do ja escolhido: ######################\n");
    printf("###################### 1. População #########################\n");
    printf("###################### 2. Área ##############################\n");
    printf("###################### 3. PIB ###############################\n");
    printf("###################### 4. Numero de Pontos Turisticos #######\n");
    printf("###################### 5. Densidade Demográfica (menor vence)\n");
    printf("###################### 6. PIB Per Capita ####################\n");
    printf("###################### 7. Super Poder #######################\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao2);

    if (opcao == opcao2)
    {
        printf("Você Escolheu o Mesmo Atributo da Rodada 1, Jogo finalizado, Reinicie Para Jogar Novamente! ");
        exit(1);
    }else {
            switch (opcao2)
    {
    case 1:
        printf("Você Escolheu a Opção População \n");
        printf("Carta 1: %s, População: %d \n", cidade , populacao);
        printf("Carta 2: %s, População: %d \n", cidade2, populacao2);
        resultado2 = populacao > populacao2 ? 1 : 0;
        carta1Rodada2 = (float) populacao;
        carta2Rodada2 = (float) populacao2;
        break;
    case 2:
        printf("Você Escolheu a Opção Área \n");
        printf("Carta 1: %s, Área (km²): %.2f \n", cidade , area);
        printf("Carta 2: %s, Área (km²): %.2f \n", cidade2, area2);
        resultado2 = area > area2 ? 1 : 0;
        carta1Rodada2 =  area;
        carta2Rodada2 =  area2;
        break;
    case 3:
        printf("Você Escolheu a Opção PIB \n");
        printf("Carta 1: %s, PIB: %lf \n", cidade , pib);
        printf("Carta 2: %s, PIB: %lf \n", cidade2, pib2);
        resultado2 = pib > pib2 ? 1 : 0;
        carta1Rodada2 =  pib;
        carta2Rodada2 =  pib2;
        break;
    case 4:
        printf("Você Escolheu a Opção Pontos Turísticos \n");
        printf("Carta 1: %s, Pontos Turísticos: %d \n", cidade , turistico);
        printf("Carta 2: %s, Pontos Turísticos: %d \n", cidade2, turistico2);
        resultado2 = turistico > turistico2 ? 1 : 0;
        carta1Rodada2 = (float) turistico;
        carta2Rodada2 = (float) turistico2;
        break;
    case 5:
        printf("Você Escolheu a Opção Densidade Populacional \n");
        printf("Carta 1: %s, População: %.2f \n", cidade , densidade);
        printf("Carta 2: %s, População: %.2f \n", cidade2, densidade2);
        resultado2 = densidade < densidade2 ? 1 : 0;
        carta1Rodada2 =  densidade;
        carta2Rodada2 =  densidade2;
        break;
    case 6:
        printf("Você Escolheu a Opção População \n");
        printf("Carta 1: %s, População: %.2f \n", cidade , pibPerCapita);
        printf("Carta 2: %s, População: %.2f \n", cidade2, pibPerCapita2);
        resultado2 = pibPerCapita > pibPerCapita2 ? 1 : 0;
        carta1Rodada2 =  pibPerCapita;
        carta2Rodada2 =  pibPerCapita2;
        break;
    case 7:
        printf("Você Escolheu a Opção População \n");
        printf("Carta 1: %s, Super Poder: %.2f \n", cidade , superPoder);
        printf("Carta 2: %s, Super Poder: %.2f \n", cidade2, superPoder2);
        resultado = superPoder > superPoder2 ? 1 : 0;
        carta1Rodada1 =  superPoder;
        carta2Rodada1 =  superPoder2;
        break; 
    
    default:
        if (opcao == 0 || opcao > 7)
    {
        printf("OPÇÂO INVALIDA!, Reinicie Para Jogar Novamente!");
        exit(1);
    }
        break;
    }
    }
    

    printf("Resultado das Comparações: \n");

    if (resultado == 1 && resultado2 == 1)
    {
        printf("A carta 1 %s Venceu! \n",cidade);

    }else if (resultado == 0 && resultado2 == 0)
    {
        printf("A Carta 2 %s Venceu! \n", cidade2);
        
    }else {
        printf("Empate!\n");
    }
    printf("Resultado da Soma dos Atributos:\n ");
    // soma dos atributos escolhidos:
    float somaCarta1 = carta1Rodada1 + carta1Rodada2;
    float somaCarta2 = carta2Rodada1 + carta2Rodada2;

    printf("Carta 1 (%.2f + %.2f) = %.2f\n", carta1Rodada1 , carta1Rodada2, somaCarta1);
    printf("Carta 2 (%.2f + %.2f) = %.2f\n", carta2Rodada1 , carta2Rodada2, somaCarta2);

    if (somaCarta1 > somaCarta2)
    {
        printf("Carta 1 Venceu na Somatória das Duas Rodadas\n");

    }else if (somaCarta1 < somaCarta2)
    {
        printf("Carta 2 Venceu na Somatória das Duas Rodadas\n");

    }else{
        printf("Empate na Somatória das Duas rodadas\n");
    } 




    return 0;
}
