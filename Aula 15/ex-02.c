/*
Faça um programa para ler uma string e apresentar o seu tamanho (quantidade
caracteres da frase).
*/

#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Digite algo: ");
    gets(str);
    printf("Tamanho da string: %d", strlen(str));
    return 0;
}
