/*
Faça um programa para ler duas strings e verificar se elas são iguais, ou seja,
verificar se o conteúdo é o mesmo nas duas frases informadas.
*/

#include <stdio.h>
int main(){
    char str1[100], str2[100];
    int check=0;
    printf("Digite algo: ");
    gets(str1);
    printf("Digite algo denovo: ");
    gets(str2);

    for(int i=0; str1[i]!='\0'; i++){
        if(str1[i] != str2[i]){
            check = 1;
        }
    }
    if(check == 0){
        printf("As strings sao iguais");
    }else{
        printf("As strings sao diferentes");
    }
    return 0;
}
