/*Faça um programa para ler um número inteiro e imprimir o seu antecessor e o seu sucessor.*/

#include <stdio.h>

int main(){
    int num, ant, suc;
    printf("Digite um numero: ");
    scanf("%d",&num);

    ant = num - 1;
    suc = num + 1;

    printf("Antessor do numero %d: %d\n", num, ant);
    printf("Sucessor do numero %d: %d\n", num, suc);

    return 0;
}
