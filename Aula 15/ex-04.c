/*
Faça um programa para ler uma string e transferir o conteúdo para uma outra
varíavel string (char []).
*/

#include <stdio.h>
#include <string.h>
int main(){
    char str[100], copia[100];
    printf("Digite algo: ");
    gets(str);
    strcpy(copia, str);
    printf("String digitada: %s\n"
           "String em outra variavel: %s\n", str, copia);
    return 0;
}
