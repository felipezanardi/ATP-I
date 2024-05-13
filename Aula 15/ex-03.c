/*
Faça um programa para ler duas strings e verificar se elas são iguais, ou seja,
verificar se o conteúdo é o mesmo nas duas frases informadas.
*/

#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    int cmp;
    printf("Digite algo: ");
    gets(str1);
    printf("Digite algo novamente: ");
    gets(str2);
    cmp = strcmp(str1, str2);

    if(cmp == 0){
        printf("As strings sao iguais");
    }else{
        printf("As strings sao diferentes");
    }
    return 0;
}
