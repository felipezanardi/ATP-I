/*
Faça um programa para ler 5 números e armazena-los em um vetor. Em
seguida, o seu programa deverá exibir os números lidos.
*/

#include <stdio.h>
int main(){
    float valor[5];
    for(int i=0; i<5; i++){
        printf("Digite o %do valor: ", i+1);
        scanf("%f",&valor[i]);
    }
    printf("\nValores lidos:\n");
    for(int i=0; i<5; i++){
        printf("%f\n", valor[i]);
    }
    return 0;
}
