/*Faça um programa para ler um inteiro positivo e verificar se ele é primo.
Sabendo que um número primo é aquele que é dividido apenas por um e por ele
mesmo.*/

#include <stdio.h>
int main(){
    int num, check=0;
    printf("Digite um numero: ");
    scanf("%d",&num);
    for(int i=2; i<num && check == 0; i++){
        if(num % i == 0){
            check = 1;
        }
    }
    if(check == 1 || num <= 1){
        printf("O numero %d nao e primo.", num);
    }else{
        printf("O numero %d e primo.", num);
    }
    return 0;
}
