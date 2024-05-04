/*Faça um programa para identificar se um determinado ano fornecido pelo
usuário é bissexto. Para tanto, verifique com a seguintes regras:
- Um ano é bissexto se for divisível por 400 ou
- Um ano é bissexto se for divisível por 4 e não for divisível por 100.
Exemplos: 1600, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016.*/

#include <stdio.h>

int main(){
    int ano;
    printf("Informe um ano: ");
    scanf("%d",&ano);

    if(ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)){
        printf("Ano bissexto");
    }else{
        printf("Ano nao bissexto");
    }

    return 0;
}
