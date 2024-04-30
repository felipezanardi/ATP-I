/*Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de 12%*/

#include <stdio.h>

int main(){
    float vInicial, vFinal;
    printf("Valor do produto: ");
    scanf("%f",&vInicial);

    vFinal = vInicial - (vInicial * 0.12);

    printf("Valor com desconto: %.2f\n", vFinal);

    return 0;
}
