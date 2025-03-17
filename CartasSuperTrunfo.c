#include <stdio.h>
int main() {
    int codigo = 1;
    char estado[50] = "RIO DE JANEIRO"; 
    char inicial[3] = "A0";
    char nome[50] = "Rio de Janeiro";
    float populacao = 6.21;
    char populacaovalor[20] = "milhões";
    float area = 1.26;
    char extensaoarea[10]= "K km2";
    float pib = 3.6;
    int turismo = 39;

    printf("Código da Carta: %s%d\n", inicial,codigo);
    printf("Estado: %s\n",estado);
    printf("Cidade: %s\n", nome);
    printf("População: %f %s\n", populacao,populacaovalor);
    printf("Área: %f%s\n",area, extensaoarea);
    printf("PIB: %f\n",pib);
    printf("Pontos Turisticos:%d\n",turismo);

    return 0;

}
