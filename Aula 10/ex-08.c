/*(Utilize o comando 'for') Ler 5 valores do usuário e apresentar o maior valor, o menor valor, a
soma e a média dos valores.*/

#include <stdio.h>

int main(){
    float valor, soma, maior, menor;
    for(int i=0; i<5; i++){
        printf("Informe o %do valor: ", i+1);
        scanf("%f",&valor);
        if(i == 0){
            maior = valor;
            menor = valor;
        }else if(valor > maior){
            maior = valor;
        }else if(valor < menor){
            menor = valor;
        }
        soma = soma + valor;
    }
    printf("\nMaior: %f\n"
           "Menor: %f\n"
           "Soma: %f\n"
           "Media: %f", maior, menor, soma, soma/5);
    return 0;
}
