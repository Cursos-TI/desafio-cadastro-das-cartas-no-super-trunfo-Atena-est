#include <stdio.h>
int main() {
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

    printf("Código da Carta: %s%d\n", inicial,codigo);
    printf("Estado: %s\n",estado);
    printf("Cidade: %s\n", nome);
    printf("População: %f %s\n", populacao,populacaovalor);
    printf("Área: %f%s\n",area, extensaoarea);
    printf("PIB: %f %s\n",pib, pib2);
    printf("Pontos Turisticos:%d\n",turismo);

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
    
    printf("Código da Carta: %s%d\n", inicial2,codigo2);
    printf("Estado: %s\n",estado2);
    printf("Cidade: %s\n", nome2);
    printf("População: %f %s\n", populacao2,populacaovalor2);
    printf("Área2: %f%s\n",area2, extensaoarea2);
    printf("PIB: %f %s\n",pib3, pib4);
    printf("Pontos Turisticos:%d\n",turismo2);
    return 0;

}
