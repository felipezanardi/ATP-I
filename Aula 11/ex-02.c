/*Faça um programa para ler um número e apresentar o
resultado das funções: ceil, floor, round e trunc*/

#include <stdio.h>
#include <math.h>
int main(){
    double num;
    printf("Digite um numero qualquer: ");
    scanf("%lf",&num);
    printf("Funcao 'ceil': %lf\n"
           "Funcao 'floor': %lf\n"
           "Funcao 'round': %lf\n"
           "Funcao 'trunc': %lf", ceil(num), floor(num), round(num), trunc(num));
    return 0;
}
