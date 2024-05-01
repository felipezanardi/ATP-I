/*Fazer um programa para ler dois números e verificar se são iguais ou diferentes.*/

#include <stdio.h>
int main(){
    float num1, num2;
    printf("Primeiro numero: ");
    scanf("%f",&num1);
    printf("Segundo numero: ");
    scanf("%f",&num2);

    if(num1 == num2){
        printf("Os numeros sao iguais");
    }else{
        printf("Os numeros sao diferentes");
    }

    return 0;
}
