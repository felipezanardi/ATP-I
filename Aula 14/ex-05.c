/*
Faça um programa para ler uma string e apresentar a quantidade de vogais e
não vogais presentes na frase. Considere que o usuário informará a palavra com
letras minúsculas.
*/

#include <stdio.h>
int main(){
    int vogal=0, nvogal=0;
    char str[100];
    printf("Digite algo (apenas letras minusculas): ");
    gets(str);
    for(int i=0; str[i]!='\0'; i++){
        switch(str[i]){
            case 'a':case 'e':case 'i':case 'o':case 'u':
                vogal++;
                break;
            default:
                nvogal++;
                break;
        }
    }
    printf("Vogal: %d\nNao vogal: %d", vogal, nvogal);
    return 0;
}
