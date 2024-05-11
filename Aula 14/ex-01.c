/*
Faça um programa que leia uma string e a imprima o seu conteúdo.
*/

#include <stdio.h>
int main(){
    char str[100];
    printf("Digite uma string: ");
    gets(str);
    printf("String: %s", str);
    return 0;
}
