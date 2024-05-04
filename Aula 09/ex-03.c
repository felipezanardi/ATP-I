/*Ler 5 valores do usuário e apresentar o maior valor.*/

#include <stdio.h>
int main(){
    int valor, i=0, maior;
    while(i < 5){
        printf("Digite o %do valor: ", i+1);
        scanf("%d",&valor);
        if(valor > maior || i == 0){
            maior = valor;
        }
        i++;
    }
    printf("\nMaior valor: %d\n", maior);

    return 0;
}
