/*Faça um programa para calcular o valor final de um produto a partir de seu valor inicial,
considerando que há um desconto de 12%.*/

#include <stdio.h>

int main(){
    float vInicial, vFinal;
    printf("Valor inicial do produto: ");
    scanf("%f",&vInicial);

    vFinal = vInicial - (vInicial * 0.12);

    printf("Valor final do produto: %.2f\n", vFinal);

    return 0;
}
