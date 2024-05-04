/*Ler 5 valores do usuário e apresentar o maior valor, o menor valor, a
soma e a média dos valores.*/

#include <stdio.h>
int main(){
    int valor, i=0, menor, maior, soma=0;
    while(i < 5){
        printf("Digite o %do valor: ", i+1);
        scanf("%d",&valor);
        if(i == 0){
            menor = valor;
            maior = valor;
        }else if(valor < menor){
            menor = valor;
        }else if(valor > maior){
            maior = valor;
        }
        soma = soma + valor;
        i++;
    }
    printf("\nMaior valor: %d\n"
           "Menor valor: %d\n"
           "Soma dos valores: %d\n"
           "Media dos valores: %f\n", maior, menor, soma, (float) soma/5);
    return 0;
}
