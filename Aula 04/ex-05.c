/*Faça um programa para ler um valor em real e a cotação do dólar. Em seguida, imprima o
valor correspondente em dólares.*/

#include <stdio.h>

int main(){
    float brl, cot, usd;
    printf("Digite um valor em reais: R$");
    scanf("%f",&brl);
    printf("Digite a cotacao do dolar atual: R$");
    scanf("%f",&cot);

    usd = brl / cot;

    printf("R$%.2f em dolar: $%.2f", brl, usd);

    return 0;
}
