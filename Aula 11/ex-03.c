/*Faça um programa para ler um número e apresentar a raiz
quadrada do número*/

#include <stdio.h>
#include <math.h>
int main(){
    double num;
    printf("Digite um numero: ");
    scanf("%lf",&num);
    printf("Raiz quadrada do numero: %lf", sqrt(num));
    return 0;
}
