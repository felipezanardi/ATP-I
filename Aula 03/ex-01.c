/*Faça um programa que receba três valores inteiros e imprima a soma deles.*/

#include <stdio.h>

int main(){
    int num1, num2, num3, soma;
    printf("Digite o primeiro valor: ");
    scanf("%d",&num1);
    printf("Digite o segundo valor: ");
    scanf("%d",&num2);
    printf("Digite o terceiro valor: ");
    scanf("%d",&num3);

    soma = num1 + num2 + num3;

    printf("Soma: %d\n", soma);

    return 0;
}
