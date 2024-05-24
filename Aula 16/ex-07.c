/*
Faça uma função denominada maiusculo para receber uma string e converter
seus caracteres para maiúsculo.
*/

#include <stdio.h>
#include <string.h>
int maiusculo(char str[]){
    for(int i=0; i<strlen(str); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }
    return str;
}

int main(){
    char str[100];
    printf("Digite um string: ");
    gets(str);

    printf("String modificada: %s\n", maiusculo(str));
    return 0;
}
