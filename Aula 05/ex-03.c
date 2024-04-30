/*Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que
leia quanto cada apostador investiu, o valor do prêmio e imprima quanto cada um ganharia do
prêmio com base no valor investido.*/

#include <stdio.h>

int main(){
    float a, b, c, total, pA, pB, pC, premio;
    int cupom;
    printf("Investimento da primeira pessoa: R$");
    scanf("%f",&a);
    printf("Investimento da segunda pessoa: R$");
    scanf("%f",&b);
    printf("Investimento da terceira pessoa: R$");
    scanf("%f",&c);
    printf("Premio: R$");
    scanf("%f",&premio);

    total = a + b + c;
    pA = a / total;
    pB = b / total;
    pC = c / total;

    printf("Primeira pessoa: R$%.2f\n", premio * pA);
    printf("Segunda pessoa: R$%.2f\n", premio * pB);
    printf("Terceira pessoa: R$%.2f\n", premio * pC);

    return 0;
}
