/*
Faça uma função denominada digito que recebe uma string e verificar se ela
contém somente dígitos. Se a string for composta somente por dígitos a função
retorna 1 (verdadeiro), caso contrário, a função retorna 0 (falso).
*/

#include <stdio.h>
#include <string.h>
int digito(char a[]){
    int c=0;
    for(int i=0; i<strlen(a); i++){
        if(a[i] < '0' || a[i] > '9'){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str[100];
    printf("Digite: ");
    gets(str);

    printf("Verificacao: %d\n", digito(str));
    return 0;
}
