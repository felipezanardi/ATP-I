/*Ler cinco valores fornecidos pelo usuário e calcular a média dos valores.*/

#include <stdio.h>
int main(){
    int i=0;
    float valor, soma;
    while(i < 5){
        printf("Informe o %do valor: ", i+1);
        scanf("%f",&valor);
        soma = soma + valor;
        i++;
    }
    printf("Media dos valores: %f", soma/5);

    return 0;
}
