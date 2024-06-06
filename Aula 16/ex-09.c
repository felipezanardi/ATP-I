/*
Faça uma função denominada remover_espacos para receber uma string e
remover espaços desnecessários, ou seja, considerar somente um espaço entre as
palavras da string.
*/

#include <stdio.h>
#include <string.h>
void remover_espacos(char a[]){
    for(int i=0; a[0] == ' '; i++){
        for(int m=0; m<strlen(a); m++){
            a[m] = a[m+1];
        }
    }
    for(int i=0; i<strlen(a); i++){
        if(a[i] == ' ' && a[i+1] == ' '){
            for(int m=i; m<strlen(a); m++){
                a[m] = a[m+1];
            }
            i--;
        }
    }
}

int main(){
    char str[200];
    printf("Digite uma frase: ");
    gets(str);
    remover_espacos(str);

    printf("Frase alterada: %s\n", str);
    return 0;
}
