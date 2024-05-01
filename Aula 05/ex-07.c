/*Faça um programa para ler um número inteiro de 3 dígitos (de 100 a 999). Em seguida, o
programa deverá gerar outro número formado pelos dígitos invertidos do número lido. Lembre
que o operador % calcula o resto da divisão.

Exemplo:
Digite um número inteiro entre 100 e 999:
Número lido: 123
Número gerado: 321*/

#include <stdio.h>

int main(){
    int num, d1, d2, d3;
    printf("Digite um numero de 100 a 999: ");
    scanf("%d",&num);

    d1 = num / 100;
    d2 = (num - (d1 * 100)) / 10;
    d3 = num - ((d1 * 100) + (d2 * 10));

    printf("Numero gerado: %d%d%d\n", d3, d2, d1);

    return 0;
}
