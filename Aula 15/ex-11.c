/*
Faça um programa para ler uma sequência de caracteres digitados em uma
palavra, sem espaços, e coloca-los em ordem alfabética.
*/

#include <stdio.h>
#include <string.h>
int main(){
    char palavra[50], temp;
    printf("Digite uma palavra (sem espaco): ");
    gets(palavra);
    for(int i=0; i<strlen(palavra); i++){
        if(palavra[i] >= 'A' && palavra[i] <= 'Z'){
            palavra[i] = palavra[i] + 32;
        }
    }
    printf("Caracteres em ordem alfabetica: ");
    for(int i=0; i<strlen(palavra)-1; i++){
        for(int c=0; c<strlen(palavra)-1-i; c++){
            if(palavra[c] > palavra[c+1]){
                temp = palavra[c];
                palavra[c] = palavra[c+1];
                palavra[c+1] = temp;
            }
        }
    }
    printf("%s\n", palavra);
    return 0;
}
