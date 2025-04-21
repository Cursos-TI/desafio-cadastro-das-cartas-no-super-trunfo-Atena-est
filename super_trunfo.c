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
    int turismo = 39;

  
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
  
    densidadeCarta1 = populacao/area;
    pibPerCapitaCarta1 = pib/populacao;
    densidadeCarta2 = populacao2/area2;
    pibPerCapitaCarta2 = pib3/populacao2;

    printf(" o pib per capita da carta1 é : %f\n", pibPerCapitaCarta1);
    printf(" o pib per capita da carta2 é : %f\n", pibPerCapitaCarta2);

    if(pibPerCapitaCarta1 > pibPerCapitaCarta2){
        printf ("carta 1 Rio de Janeiro venceu");
       
    }else {
        printf ("carta 2 Rio Grande do Sul venceu");

    }

    
    return 0;

}
