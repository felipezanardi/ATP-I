/*
Faça um programa para ler N números e armazena-los em um vetor. O valor
de N é fornecido pelo usuário. Em seguida, o usuário fornecerá um número N1 e
outro número N2.
*/

#include <stdio.h>
int main(){
    int n, n1, n2;
    printf("Informe a quantidade de numeros: ");
    scanf("%d",&n);
    int num[n];
    for(int i=0; i<n; i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d",&num[i]);
    }
    printf("\nInforme o numero para busca (N1): ");
    scanf("%d",&n1);
    printf("Informe o numero para troca (N2): ");
    scanf("%d",&n2);
    printf("\nLista digitada:");
    for(int i=0; i<n; i++){
        printf(" %d", num[i]);
    }
    for(int i=0; i<n; i++){
        if(num[i] == n1){
            num[i] = n2;
        }
    }
    printf("\nLista alterada:");
    for(int i=0; i<n; i++){
        printf(" %d", num[i]);
    }
    printf("\n");
    return 0;
}
