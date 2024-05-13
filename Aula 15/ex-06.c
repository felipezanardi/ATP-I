/*
Faça uma programa para ler uma palavra a exibi-la com todos os caracteres em
maiúsculo. Note que alguns caracteres podem estar em maiúsculo, quando
digitada pelo usuário. Exemplo:
Digite frase: Papagaio
Frase alterada: PAPAGAIO
*/

#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Digite algo: ");
    gets(str);
    for(int i=0; i<strlen(str); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
    printf("String alterada: %s", str);
    return 0;
}
