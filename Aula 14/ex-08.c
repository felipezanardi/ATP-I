/*
Faça um programa que receba uma palavra e a imprima de trás-para-frente.
*/

#include <stdio.h>
int main(){
    char str[50];
    int cont=0;
    printf("Digite uma palavra: ");
    gets(str);

    for(int i=0; str[i]!='\0'; i++){
        cont++;
    }

    printf("Palavra de tras-para-frente: ");
    for(int i=cont-1; i>=0; i--){
        printf("%c", str[i]);
    }
    return 0;
}
