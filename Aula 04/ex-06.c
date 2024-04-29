/*Faça um programa para ler um número inteiro e imprima o seu antecessor e o seu sucessor.*/

#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);

    printf("Antecessor: %d\n", num - 1);
    printf("Sucessor: %d\n", num + 1);

    return 0;
}
