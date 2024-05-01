/*Fazer um programa para ler um número inteiro e verificar se ele é positivo ou negativo.*/

#include <stdio.h>
int main(){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);
    if(num > 0){
        printf("Numero positivo\n");
    }else{
        if(num < 0){
            printf("Numero negativo\n");
        }else{
            printf("Numero neutro\n");
        }
    }
    return 0;
}
