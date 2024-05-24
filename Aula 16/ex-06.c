/*
Faça uma função denominada tamanho receber uma string e devolver a
quantidade de caracteres da frase
*/

#include <stdio.h>
#include <string.h>
int tamanho(char a[200]){
    return strlen(a);
}

int main(){
    char str[200];
    printf("Digite uma string: ");
    gets(str);

    printf("Tamanho da string: %d\n", tamanho(str));
    return 0;
}
