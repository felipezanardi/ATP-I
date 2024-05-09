/*
Faça um programa para ler N números e armazena-los em um vetor. O valor
de N é fornecido pelo usuário. Em seguida, imprima o vetor na ordem inversa.
*/

#include <stdio.h>
int main(){
    int n;
    printf("Quantidade de valores que deseja armazenar: ");
    scanf("%d",&n);
    float valor[n];
    for(int i=0; i<n; i++){
        printf("Digite o %do valor: ", i+1);
        scanf("%f",&valor[i]);
    }
    printf("\nValores na ordem inversa:\n");
    for(int i=n; i>0; i--){
        printf("%f\n", valor[i-1]);
    }
    return 0;
}
