/*Faça um programa para ler um número inteiro e verificar se este número é par ou ímpar.*/

#include <stdio.h>
int main(){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("Numero par");
    }else{
        printf("Numero impar");
    }

    return 0;
}
