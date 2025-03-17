#include <stdio.h>
int main() {
    
    int codigo = 1;
    char estado[50] = "RIO DE JANEIRO"; 
    char inicial[3] = "A";
    char nome[50] = "Rio de Janeiro";
    float populacao = 6.21;
    char populacaovalor[20] = "milhões";
    float area = 1.26;
    char extensaoarea[10]= "K km2";
    float pib = 3.6;
    int turismo = 39;

    
    printf("Código da Carta: %s %d\n",codigo, inicial);
    printf("Estado do: %s cidade: %s\n",estado, nome);
    printf("População: %f %s\n",populacaovalor, populacao);
    printf("Área:%f %s\n",extensaoarea, area);
    printf("PIB:%f\n",pib);
    printf("Pontos Turisticos:%d\n",turismo);

    return 0;
}
