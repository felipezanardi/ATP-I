/*
Faça um programa para ler uma string e apresentar o seu tamanho (quantidade
caracteres da frase).
*/

#include <stdio.h>
int main(){
    char str[200];
    int cont=0;
    printf("Digite uma palavra: ");
    gets(str);

    for(int i=0; str[i]!='\0'; i++){
        cont++;
    }
    printf("Tamanho da string: %d", cont);
    return 0;
}
