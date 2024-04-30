/*Faça um programa para calcular a quantidade de cupons que um cliente recebe ao realizar
uma compra em um supermercado. A partir do valor gasto na compra o programa exibe a
quantidade de cupons, considerando que o cliente recebe um cupom a cada R$ 20,00 em
compras.*/

#include <stdio.h>

int main(){
    float gasto;
    int cupom;
    printf("Valor gasto: R$");
    scanf("%f",&gasto);

    cupom = gasto / 20;

    printf("Cliente recebeu %d cupom/cupons.\n", cupom);

    return 0;
}
