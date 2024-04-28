/*Faça um programa que leia o valor de um prêmio de um concurso. Em seguida, considerando
que o prêmio será dividido entre três ganhadores, exiba os valores ganhos para cada colocação:
- Primeiro lugar: 50% do prêmio total;
- Segundo lugar: 30% do prêmio total;
- Terceiro lugar: 20% do prêmio total.*/

#include <stdio.h>

int main(){
    float premio;
    printf("Premio do concurso: ");
    scanf("%f",&premio);

    printf("Primeiro lugar: %.2f\n", premio / 2);
    printf("Segundo lugar: %.2f\n", premio * 0.3);
    printf("Terceiro lugar: %.2f\n", premio * 0.2);

    return 0;
}
