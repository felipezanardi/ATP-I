/*Ler 5 valores do usuário e apresentar o maior valor.*/

#include <stdio.h>
int main(){
    int valor, i=0, maior;
    printf("Digite o 1o valor: ");
    scanf("%d",&maior);
    i++;

    while(i < 5){
        printf("Digite o %do valor: ", i+1);
        scanf("%d",&valor);
        if(valor > maior){
            maior = valor;
        }
        i++;
    }
    printf("\nMaior valor: %d\n", maior);

    return 0;
}
