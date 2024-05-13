/*
Faça um programa para ler uma frase e ajustá-la de modo que a primeira letra
de cada palavra esteja em maiúsculo e as demais em minúsculo. Exemplo:
Digite uma frase: Hoje eu vou Programar muito
Frase alterada: Hoje Eu Vou Programar Muito
*/

#include <stdio.h>
#include <string.h>
int main(){
    char frase[200];
    printf("Digite uma frase: ");
    gets(frase);
    for(int i=0; i<strlen(frase); i++){
        if(frase[0] >= 'a' && frase[0] <= 'z' && i==0){
            frase[0] = frase[0] - 32;
        }else if(frase[i-1] == ' ' && frase[i] >= 'a' && frase[i] <= 'z' && i != 0){
            frase[i] = frase[i] - 32;
        }else if(frase[i-1] != ' ' && frase[i] >= 'A' && frase[i] <= 'Z' && i != 0){
            frase[i] = frase[i] + 32;
        }
    }
    printf("Frase alterada: %s\n", frase);
    return 0;
}
