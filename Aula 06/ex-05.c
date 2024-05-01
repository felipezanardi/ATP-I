/*Fazer um programa para ler dois números e apresentar em ordem crescente. Se forem iguais, indicar
que são iguais.*/

#include <stdio.h>
int main(){
    float num1, num2;
    printf("Primeiro numero: ");
    scanf("%f",&num1);
    printf("Segundo numero: ");
    scanf("%f",&num2);

    if(num1 > num2){
        printf("Ordem crescente: %f, %f", num2, num1);
    }else if(num1 < num2){
        printf("Ordem crescente: %f, %f", num1, num2);
    }else{
        printf("Os numeros sao iguais");
    }
    return 0;
}
