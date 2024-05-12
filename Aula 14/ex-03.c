/*
Faça um programa para ler uma string e apresentar quantas letras ‘a’, ‘e’, ‘i’,
‘o’ e ‘u’ estão presentes na frase.
*/

#include <stdio.h>
int main(){
    int cont=0;
    char str[200];
    printf("Digite algo: ");
    gets(str);
    for(int i=0; str[i]!='\0'; i++){
        switch(str[i]){
            case 'a':case 'e':case 'i':case 'o':case 'u':
                cont++;
                break;
        }
    }
    printf("As letras 'a', 'e', 'i', 'o' e 'u' foram digitas %d vez(es).\n", cont);
    return 0;
}
