/*
Faça um programa para ler uma string e transferir o conteúdo para uma outra
varíavel string (char []).
*/

#include <stdio.h>
int main(){
    char str1[100], str2[100];
    printf("Digite algo: ");
    gets(str1);

    for(int i=0; i<100; i++){
        str2[i] = str1[i];
    }
    printf("Outra string: %s", str2);
    return 0;
}
