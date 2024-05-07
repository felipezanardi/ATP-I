/*(Utilize o comando 'do while') Ler cinco valores fornecidos pelo usuário e calcular a média dos valores.*/

#include <stdio.h>

int main(){
    int i=0;
    float valor, soma;
    do{
        printf("Informe o %do valor: ", i+1);
        scanf("%f",&valor);
        soma = soma + valor;
        i++;
    }while(i < 5);
    printf("Media: %f", soma/5);
    return 0;
}
