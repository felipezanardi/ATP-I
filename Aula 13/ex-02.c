/*
Faça um programa para ler N números e armazena-los em um vetor. O valor
de N é fornecido pelo usuário. Em seguida, o seu programa deverá exibir os
números lidos.
*/

#include <stdio.h>
int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    float valor[n];
    for(int i=0; i<n; i++){
        printf("Digite o %do valor: ", i+1);
        scanf("%f",&valor[i]);
    }
    printf("\nValores lidos:\n");
    for(int i=0; i<n; i++){
        printf("%f\n", valor[i]);
    }
    return 0;
}
