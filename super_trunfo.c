#include <stdio.h>
#include <string.h>

int main()
{

    // Desafio: Super Trunfo
    // Criando as Cartas do Super Trunfo

    // Carta 1
    char estado[1];
    char codigo[1];
    char cidade[15];
    float populacao;
    float area;
    float pib;
    int turismo;

    // Carta2
    char estado2[1];
    char codigo2[1];
    char cidade2[15];
    float populacao2;
    float area2;
    float pib2;
    int turismo2;
   
    int itemMenu1, atributo1;
    int atributo2;
    float somaCarta1, somaCarta2, valorAtributo1Carta1, valorAtributo2Carta1, valorAtributo1Carta2, valorAtributo2Carta2;

    // cadastro das cartas
    printf("Super Trunfo 14 15\n");
    printf("Precisamos cadastrar duas cartas para o jogo. Vamos lá!\n");
    // carta 1
    printf("Cadastro da primeira carta:\n");
    printf("Escolha uma letra entre A e H para representar o Estado:\n");
    scanf("%c", &estado);

    for(int i=0; *estado > 'H' && *estado > 'h'; i++){
        printf("Escolha uma letra entre A e H para representar o Estado:\n");
        scanf("%c", &estado);
        scanf("%c", &estado);
    }
 
    printf("Digite um número de 1 a 4:\n");
    scanf(" %c", &codigo);

    for(int i=0; *codigo != '1' && *codigo != '2' && *codigo != '3' && *codigo != 4; i++){
        printf("Digite um número de 1 a 4:\n");
        scanf(" %c", &codigo);
    }
    
    printf("Escreva o nome da cidade:\n");
    scanf("%s", &cidade);
    printf("Insira o valor correspondente a população:\n");
    scanf("%f", &populacao);
    printf("Insira o valor correspondente a area:\n");
    scanf("%f", &area);
    printf("Insira o valor correspondente ao Pib:\n");
    scanf("%f", &pib);
    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &turismo);

    // Carta 2
    printf("\n");
    printf("Cadastro da Segunda carta:\n");
    printf("Escolha uma letra entre A e H para representar o Estado:\n");
    scanf("%c", &estado2);
    scanf("%c", &estado2);
    for(int i=0; *estado2 > 'H' && *estado2 > 'h'; i++){
        printf("Escolha uma letra entre A e H para representar o Estado:\n");
        scanf("%c", &estado2);
        scanf("%c", &estado2);
    }
    printf("Digite um número de 01 a 10:\n");
    scanf("%s", &codigo2);

    for(int i=0; *codigo2 != '1' && *codigo2 != '2' && *codigo2 != '3' && *codigo2 != 4; i++){
        printf("Digite um número de 1 a 4:\n");
        scanf(" %c", &codigo2);
    }

    printf("Escreva o nome da cidade:\n");
    scanf("%s", &cidade2);
    printf("Insira o valor correspondente a população:\n");
    scanf("%f", &populacao2);
    printf("Insira o valor correspondente a area:\n");
    scanf("%f", &area2);
    printf("Insira o valor correspondente ao Pib:\n");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos:\n");
    scanf("%d", &turismo2);
    printf("\n");

    // Exibição das cartas:

    printf("Dados da Carta 1:\n");
    printf("Letra do Estado: %s\n", estado);   
    printf("codigo: %.*s%s \n", 1, estado,codigo);
    printf("cidade: %s\n", cidade);
    printf("populacao: %f\n", populacao);
    printf("area: %f km²\n", area);
    printf("pib: %f bilhões de Reais\n", pib);
    printf("turismo: %d\n", turismo);
    printf("Densidade Populacional: %f hab/km²\n", (populacao/area));
    printf("Pib Per Capita: %f reais\n", (pib/populacao));

    printf("\n");

    printf("Dados da Carta 2:\n");
    printf("Letra do Estado: %s\n", estado2);
    printf("codigo: %.*s%s \n", 1, estado2,codigo2);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %f\n", populacao2);
    printf("area: %f Km²\n", area2);
    printf("pib: %f bilhões de Reais\n", pib2);
    printf("turismo: %d\n", turismo2);
    printf("Densidade Populacional: %f hab/km²\n", (populacao2/area2));
    printf("Pib Per Capita: %f reais\n", (pib2/populacao2));

    printf("\n");
    printf("Agora vamos iniciar o jogo!!!!");
    printf("\n");

    // jogo
    printf("Escolha o número do primeiro atributo entre as opções abaixo:\n");
    printf("1 - Populaçao\n");
    printf("2 - Area\n");
    printf("3 - Densidade\n");
    printf("4 - Número de Pontos Turisticos\n");
    printf("5 - PIB\n");

    scanf("%d", &itemMenu1);

    if (itemMenu1 >= 1 && itemMenu1 <= 5)
    {
        printf("Escolha o número do segundo atributo entre as opções abaixo:\n");

        switch (itemMenu1)
        {
        case 1:
            printf("2-Area\n");
            printf("3- Densidade\n");
            printf("4-número de pontos turisticos\n");
            printf("5-Pib\n");
            scanf("%d", &atributo2);
            break;
        case 2:
            printf("1-Populaçao\n");
            printf("3- Densidade\n");
            printf("4-número de pontos turisticos\n");
            printf("5-Pib\n");
            scanf("%d", &atributo2);
            break;
        case 3:
            printf("1-Populaçao\n");
            printf("2-Area\n");
            printf("4-número de pontos turisticos\n");
            printf("5-Pib\n");
            scanf("%d", &atributo2);
            break;
        case 4:
            printf("1-Populaçao\n");
            printf("2-Area\n");
            printf("3- Densidade\n");
            printf("5-Pib\n");
            scanf("%d", &atributo2);
            break;
        case 5:
            printf("1-Populaçao\n");
            printf("2-Area\n");
            printf("3- Densidade\n");
            printf("4-número de pontos turisticos\n");
            scanf("%d", &atributo2);
            break;
        }

        if (atributo2 >= 1 && atributo2 <= 5)
        {
            atributo1 = itemMenu1;

            printf("O nome do Estado da carta 1 é: %s\n", estado);
            printf("O nome do Estado da carta 2 é: %s\n", estado2);

            printf("\n");

            if (atributo1 == 1)
                printf("O primeiro atributo escolhido foi População\n");
            else if (atributo1 == 2)
                printf("O primeiro atributo escolhido foi Area\n");
            else if (atributo1 == 3)
                printf("O primeiro atributo escolhido foi Densidade\n");
            else if (atributo1 == 4)
                printf("O primeiro atributo escolhido foi Pontos Turísticos\n");
            else if (atributo1 == 5)
                printf("O primeiro atributo escolhido foi PIB\n");

            if (atributo2 == 1)
                printf("O segundo atributo escolhido foi População\n");
            else if (atributo2 == 2)
                printf("O segundo atributo escolhido foi Area\n");
            else if (atributo2 == 3)
                printf("O segundo atributo escolhido foi Densidade\n");
            else if (atributo2 == 4)
                printf("O segundo atributo escolhido foi Pontos Turísticos\n");
            else if (atributo2 == 5)
                printf("O segundo atributo escolhido foi PIB\n");

            printf("\n");

            switch (atributo1)
            {
            case 1:
                printf("A população da carta 1 é : %f\n", populacao);
                printf("A população da carta 2 é: %f\n", populacao2);
                (populacao == populacao2) ? printf("A Rodada 1 Empatou!!!\n") : (populacao > populacao2) ? printf("O vencedor da rodada 1 é a carta 1\n")
                                                                                                         : printf("O vencedor da rodada 1 é a carta 2\n");
                valorAtributo1Carta1 = populacao;
                valorAtributo1Carta2 = populacao2;
                break;

            case 2:
                printf("A area da carta 1 é : %f\n", area);
                printf("A area da carta 2 e: %f\n", area2);
                (area == area2) ? printf("A Rodada 1 Empatou!!!\n") : (area > area2) ? printf("O vencedor da rodada 1 é a carta 1\n")
                                                                                     : printf("O vencedor da rodada 1 é a carta 2\n");
                valorAtributo1Carta1 = area;
                valorAtributo1Carta2 = area2;
                break;

            case 3:
                printf("A densidade da carta 1 é: %f\n",  (populacao/area));
                printf("A densidade da carta 2 é : %f\n",  (populacao2/area2));
                ( (populacao/area) ==  (populacao2/area2)) ? printf("A Rodada 1 Empatou!!!\n") : ( (populacao/area) <  (populacao2/area2)) ? printf("O vencedor da rodada 1 é a carta 1\n")
                                                                                                                               : printf("O vencedor da rodada 1 é a carta 2\n");
                valorAtributo1Carta1 =  (populacao/area);
                valorAtributo1Carta2 =  (populacao2/area2);
                break;

            case 4:
                printf("A quantidade de pontos turisticos da carta 1 é: %d\n", turismo);
                printf("A quantidade de pontos turisticos da carta 2 é: %d\n", turismo2);
                (turismo == turismo2) ? printf("A Rodada 1 Empatou!!!\n") : (turismo > turismo2) ? printf("O vencedor da rodada 1 é a carta 1\n")
                                                                                                 : printf("O vencedor da rodada 1 é a carta 2\n");
                valorAtributo1Carta1 = turismo;
                valorAtributo1Carta2 = turismo2;
                break;

            case 5:
                printf("O valor do PIB per capita da carta 1 é: %f\n", (pib/populacao));
                printf("O valor do PIB per capita da carta 2 é: %f\n", (pib2/populacao2));
                ((pib/populacao) == (pib2/populacao2)) ? printf("A Rodada 1 Empatou!!!\n") : ((pib/populacao) > (pib2/populacao2)) ? printf("O vencedor da rodada 1 é a carta 1\n")
                                                                                                                                           : printf("O vencedor da rodada 1 é a carta 2\n");
                valorAtributo1Carta1 = (pib/populacao);
                valorAtributo1Carta2 = (pib2/populacao2);
                break;

            default:
                printf("Este numero não é válido\n");
                break;
            }

            // Comparativo do segundo atributo da carta 2
            printf("\n");

            switch (atributo2)
            {
            case 1:
                printf("A população da carta 1 é : %f\n", populacao);
                printf("A população da carta 2 é: %f\n", populacao2);
                (populacao == populacao2) ? printf("A Rodada 2 Empatou!!!\n") : (populacao > populacao2) ? printf("O vencedor da rodada 2 é a carta 1\n")
                                                                                                         : printf("O vencedor da rodada 2 é a carta 2\n");
                valorAtributo2Carta1 = populacao;
                valorAtributo2Carta2 = populacao2;
                break;

            case 2:
                printf("A area da carta 1 é : %f\n", area);
                printf("A area da carta 2 é : %f\n", area2);
                (area == area2) ? printf("A Rodada 2 Empatou!!!\n") : (area > area2) ? printf("O vencedor da rodada 2 é a carta 1\n")
                                                                                     : printf("O vencedor da rodada 2 é a carta 2\n");
                valorAtributo2Carta1 = area;
                valorAtributo2Carta2 = area2;
                break;

            case 3:
                printf("A densidade da carta 1 é: %f\n", (populacao/area));
                printf("A densidade da carta 2 é : %f\n", (populacao2/area2));
                ((populacao/area) == (populacao2/area2)) ? printf("A Rodada 3 Empatou!!!\n") : ((populacao/area) < (populacao2/area2)) ? printf("O vencedor da rodada 3 é a carta 1\n")
                                                                                                                               : printf("O vencedor da rodada 3 é a carta 2\n");
                valorAtributo2Carta1 = (populacao/area);
                valorAtributo2Carta2 = (populacao2/area2);
                break;

            case 4:
                printf("A quantidade de pontos turisticos da carta 1 é: %d\n", turismo);
                printf("A quantidade de pontos turisticos da carta 2 é: %d\n", turismo2);
                (turismo == turismo2) ? printf("A Rodada 4 Empatou!!!\n") : (turismo > turismo2) ? printf("O vencedor da rodada 4 é a carta 1\n")
                                                                                                 : printf("O vencedor da rodada 4 é a carta 2\n");
                valorAtributo2Carta1 = turismo;
                valorAtributo2Carta2 = turismo2;
                break;

            case 5:
                printf("O valor do PIB per capita da carta 1 é: %f\n", (pib/populacao));
                printf("O valor do PIB per capita da carta 2 é: %f\n", (pib2/populacao2));
                ((pib/populacao) == (pib2/populacao2)) ? printf("A Rodada 2 Empatou!!!\n") : ((pib/populacao) > (pib2/populacao2)) ? printf("O vencedor da rodada 2 é a carta 1\n")
                                                                                                                                           : printf("O vencedor da rodada 2 é a carta 2\n");
                valorAtributo2Carta1 = (pib/populacao);
                valorAtributo2Carta2 = (pib2/populacao2);
                break;

            default:
                printf("Este numero não é válido\n");
                break;
            }

            printf("\n");

            somaCarta1 = valorAtributo1Carta1 + valorAtributo2Carta1;
            somaCarta2 = valorAtributo1Carta2 + valorAtributo2Carta2;
            printf("O resultado da soma dos atributos da carta 1 é: %f\n", somaCarta1);
            printf("O resultado da soma dos atributos da carta 2 é: %f\n", somaCarta2);
            printf("O vencedor final do jogo é %s\n", (somaCarta1 > somaCarta2) ? "a Carta 1! Parabéns!" : "a Carta 2! Parabéns!");
        }
        else
        {
            printf("Segunda opção Inválida, rode o programa novamente!");
        }
    }
    else
    {
        printf("Primeira opção Inválida, rode o programa novamente!");
    }
    return 0;
}
