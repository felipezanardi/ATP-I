/*
Faça um programa para ler uma string que represente um padrão binário (0s e
1s). Em seguida, deve-se substituir as ocorrências de um caractere ‘0’ pelo
caractere ‘1’. Por fim, exibir a nova string.
*/

#include <stdio.h>
int main(){
    char bin[100];
    printf("Digite um padrao binario: ");
    gets(bin);
    for(int i=0; bin[i]!='\0'; i++){
        if(bin[i] == '0'){
            bin[i] = '1';
        }
    }
    printf("Padrao binario alterado: %s", bin);
    return 0;
}
