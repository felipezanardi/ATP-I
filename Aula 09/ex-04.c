/*Ler 5 valores do usuário e apresentar o menor valor.*/

#include <stdio.h>
int main(){
    int valor, i=0, menor;
    while(i < 5){
        printf("Digite o %do valor: ", i+1);
        scanf("%d",&valor);
        if(valor < menor || i == 0){
            menor = valor;
        }
        i++;
    }
    printf("\nMenor valor: %d\n", menor);
    return 0;
}
