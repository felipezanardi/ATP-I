/*O custo de uma viagem será estimado pela quantidade gasta combustível. Faça um programa
para calcular o gasto da viagem a partir do consumo do carro (Km/L), o preço do combustível
e a distância a ser percorrida.*/

#include <stdio.h>

int main(){
    float cons, comb, km, custo;
    int cupom;
    printf("Consumo do carro (Km/L): ");
    scanf("%f",&cons);
    printf("Preco do combustivel: R$");
    scanf("%f",&comb);
    printf("Distancia a ser percorrida (Km): ");
    scanf("%f",&km);

    custo = km / cons * comb;

    printf("Custo da viagem: R$%.2f\n", custo);

    return 0;
}
