/*
Faça um programa em que troque todas as ocorrências de uma letra L1 pela
letra L2 em uma string. A string e as letras L1 e L2 devem ser fornecidas pelo
usuário.
*/

#include <stdio.h>
int main(){
    char str[200], l1, l2;
    printf("Digite algo: ");
    gets(str);
    printf("L1: ");
    scanf("%c",&l1);
    fflush(stdin);
    printf("L2: ");
    scanf("%c",&l2);

    for(int i=0; str[i]!='\0'; i++){
        if(str[i] == l1){
            str[i] = l2;
        }
    }
    printf("String alterada: %s", str);
    return 0;
}
