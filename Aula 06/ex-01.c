/*Fazer um programa para ler a idade de uma pessoa e verificar se ela é menor ou maior.*/

#include <stdio.h>
int main(){
    int idade;
    printf("Digite a idade: ");
    scanf("%d",&idade);
    if(idade >= 18){
        printf("Maior de idade.\n");
    }else{
        printf("Menor de idade.\n");
    }
    return 0;
}
