/*(Utilize o comando 'for') Ler cinco valores fornecidos pelo usuário e calcular a média dos valores.*/

#include <stdio.h>

int main(){
    float valor, soma;
    for(int i=0; i<5; i++){
        printf("Informe o %do valor: ", i+1);
        scanf("%f",&valor);
        soma = soma + valor;
    }
    printf("Media: %f", soma/5);
    return 0;
}
