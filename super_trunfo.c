#include <stdio.h>
int main() {

    //Desafio: nível novato
    //Criando as Cartas do Super Trunfo

    //Carta 1
    int codigo = 1;
    char estado[50] = "RIO DE JANEIRO"; 
    char inicial[3] = "A0";
    char nome[50] = "Rio de Janeiro";
    float populacao = 6.21;
    char populacaovalor[20] = "milhões";
    float area = 1.26;
    char extensaoarea[10]= "K km2";
    float pib = 350;
    char pib2 [15]= "bilhões";
    int turismo = 40;

  
    //Carta2
    int codigo2 = 1;
    char estado2[50] = "RIO GRANDE DO SUL"; 
    char inicial2[3] = "B0";
    char nome2[50] = "Gramado";
    float populacao2 = 40.134;
    char populacaovalor2[20] = "mil";
    float area2 = 236.83;
    char extensaoarea2[10]= "K km2";
    float pib3 = 2.7;
    char pib4 [15]= "bilhões";
    int turismo2 = 40;
    
    //Comparando Cartas do Super Trunfo

    float densidadeCarta1, pibPerCapitaCarta1, densidadeCarta2, pibPerCapitaCarta2;
    int atributo;
  
    densidadeCarta1 = populacao/area;
    pibPerCapitaCarta1 = pib/populacao;
    densidadeCarta2 = populacao2/area2;
    pibPerCapitaCarta2 = pib3/populacao2;

    //Nível Aventureiro

    printf("Super Trunfo \n");
    printf("Escolha o número de um atributo entre as opções abaixo:\n");
    printf("1-Populaçao\n");
    printf("2-Area\n");
    printf("3- Densidade\n");
    printf("4-número de pontos turisticos\n");
    printf("5-Pib\n");

    scanf("%d", &atributo);

        if(atributo >= 1 && atributo <=5){
            printf(" O nome do Estado da carta 1 é: %s\n", estado);
            printf(" O nome do Estado da carta 2 é: %s\n", estado2);
        }
       
    switch (atributo)
    {
    case 1:
       printf("O atributo escolhido foi populacao\n");
       printf(" A população da carta 1 é : %f\n", populacao);
       printf(" A população da carta 2 é: %f\n", populacao2);
       if(populacao==populacao2){
        printf("empate");
    }else{
        if(populacao>populacao2){
            printf("o vencedor é a carta 1");
        }else{
            printf("o vencedor é a carta 2");
        }
    }
        break;

    case 2:
        printf(" o atributo escolhido foi area\n");
        printf(" A area da carta 1 é : %f\n", area);
        printf(" A area da carta 2 e: %f\n", area2);
        if(area==area2){
            printf("empate");
        }else{
            if(area>area2){
                printf("o vencedor é a carta 1");
            }else{
                printf("o vencedor é a carta 2");
            }
        }
        break;

    case 3:
    printf(" O atributo escolhido foi densidade\n");
        printf("A densidade da carta 1 é: %f\n", densidadeCarta1);
        printf(" A densidade da carta 2 é : %f\n", densidadeCarta2);
        if(densidadeCarta1==densidadeCarta2){
            printf("empate");
        }else{
            if(densidadeCarta1<densidadeCarta2){
                printf("o vencedor é a carta 1");
            }else{
                printf("o vencedor é a carta 2");
            }
        }
         break;

    case 4:
        printf(" O atributo escolhido foi turismo\n");
        printf(" A quantidade de pontos turisticos da carta 1 é: %d\n", turismo);
        printf(" A quantidade de pontos turisticos da carta 2 é: %d\n", turismo2);

        if(turismo==turismo2){
            printf("empate");
        }else{
            if(turismo>turismo2){
                printf("o vencedor é a carta 1");
            }else{
                printf("o vencedor é a carta 2");
            }
        }
        break;

    case 5:
        printf(" o atributo escolhido foi Pib Per Capita\n");
        printf(" O valor do PIB per capita da carta 1 é: %f\n", pibPerCapitaCarta1);
        printf(" O valor do PIB per capita da carta 2 é: %f\n", pibPerCapitaCarta2);
        if(pibPerCapitaCarta1==pibPerCapitaCarta2){
            printf("empate");
        }else{
            if(pibPerCapitaCarta1>pibPerCapitaCarta2){
                printf("o vencedor é a carta 1");
            }else{
                printf("o vencedor é a carta 2");
            }
        }
        break;

    default:
        printf("Este numero não é válido\n");
        break;
    }
    
    return 0;

}
