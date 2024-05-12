/*
Faça um programa que receba uma string e substitua as vogais pelo caractere
‘_’. Em seguida, exibe-se o conteúdo da string.
*/

#include <stdio.h>
int main(){
    char str[200];
    printf("Digite algo: ");
    gets(str);
    for(int i=0; str[i]!='\0'; i++){
        switch(str[i]){
            case 'a':case 'e':case 'i':case 'o':case 'u':
                str[i] = '_';
        }
    }
    printf("String alterada: %s", str);
    return 0;
}
