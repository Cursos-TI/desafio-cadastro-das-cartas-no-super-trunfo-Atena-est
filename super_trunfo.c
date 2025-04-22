#include <stdio.h>
int main()
{

    // Desafio: Super Trunfo
    // Criando as Cartas do Super Trunfo

    // Carta 1
    int codigo = 1;
    char estado[50] = "RIO DE JANEIRO";
    char inicial[3] = "A0";
    char nome[50] = "Rio de Janeiro";
    float populacao = 6.21;
    char populacaovalor[20] = "milhões";
    float area = 1.26;
    char extensaoarea[10] = "K km2";
    float pib = 350;
    char pib2[15] = "bilhões";
    int turismo = 40;

    // Carta2
    int codigo2 = 1;
    char estado2[50] = "RIO GRANDE DO SUL";
    char inicial2[3] = "B0";
    char nome2[50] = "Gramado";
    float populacao2 = 40.134;
    char populacaovalor2[20] = "mil";
    float area2 = 236.83;
    char extensaoarea2[10] = "K km2";
    float pib3 = 2.7;
    char pib4[15] = "bilhões";
    int turismo2 = 40;

    // Comparando Cartas do Super Trunfo

    float densidadeCarta1, pibPerCapitaCarta1, densidadeCarta2, pibPerCapitaCarta2;
    int itemMenu1, atributo1;
    int atributo2;
    float somaCarta1, somaCarta2, valorAtributo1Carta1, valorAtributo2Carta1, valorAtributo1Carta2, valorAtributo2Carta2;

    densidadeCarta1 = populacao / area;
    pibPerCapitaCarta1 = pib / populacao;
    densidadeCarta2 = populacao2 / area2;
    pibPerCapitaCarta2 = pib3 / populacao2;

    printf("Super Trunfo \n");
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
                printf("A densidade da carta 1 é: %f\n", densidadeCarta1);
                printf("A densidade da carta 2 é : %f\n", densidadeCarta2);
                (densidadeCarta1 == densidadeCarta2) ? printf("A Rodada 1 Empatou!!!\n") : (densidadeCarta1 < densidadeCarta2) ? printf("O vencedor da rodada 1 é a carta 1\n")
                                                                                                                               : printf("O vencedor da rodada 1 é a carta 2\n");
                valorAtributo1Carta1 = densidadeCarta1;
                valorAtributo1Carta2 = densidadeCarta2;
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
                printf("O valor do PIB per capita da carta 1 é: %f\n", pibPerCapitaCarta1);
                printf("O valor do PIB per capita da carta 2 é: %f\n", pibPerCapitaCarta2);
                (pibPerCapitaCarta1 == pibPerCapitaCarta2) ? printf("A Rodada 1 Empatou!!!\n") : (pibPerCapitaCarta1 > pibPerCapitaCarta2) ? printf("O vencedor da rodada 1 é a carta 1\n")
                                                                                                                                           : printf("O vencedor da rodada 1 é a carta 2\n");
                valorAtributo1Carta1 = pibPerCapitaCarta1;
                valorAtributo1Carta2 = pibPerCapitaCarta2;
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
                printf("A densidade da carta 1 é: %f\n", densidadeCarta1);
                printf("A densidade da carta 2 é : %f\n", densidadeCarta2);
                (densidadeCarta1 == densidadeCarta2) ? printf("A Rodada 3 Empatou!!!\n") : (densidadeCarta1 < densidadeCarta2) ? printf("O vencedor da rodada 3 é a carta 1\n")
                                                                                                                               : printf("O vencedor da rodada 3 é a carta 2\n");
                valorAtributo2Carta1 = densidadeCarta1;
                valorAtributo2Carta2 = densidadeCarta2;
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
                printf("O valor do PIB per capita da carta 1 é: %f\n", pibPerCapitaCarta1);
                printf("O valor do PIB per capita da carta 2 é: %f\n", pibPerCapitaCarta2);
                (pibPerCapitaCarta1 == pibPerCapitaCarta2) ? printf("A Rodada 2 Empatou!!!\n") : (pibPerCapitaCarta1 > pibPerCapitaCarta2) ? printf("O vencedor da rodada 2 é a carta 1\n")
                                                                                                                                           : printf("O vencedor da rodada 2 é a carta 2\n");
                valorAtributo2Carta1 = pibPerCapitaCarta1;
                valorAtributo2Carta2 = pibPerCapitaCarta2;
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
