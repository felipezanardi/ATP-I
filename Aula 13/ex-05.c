/*
Faça um programa para ler N números e armazena-los em um vetor. O valor
de N é fornecido pelo usuário. Em seguida, o usuário fornecerá um número. Seu
programa deve verificar se esse número está na lista de valores digitados pelo
usuário, ou seja, verificar se esse valor está no vetor.
*/

#include <stdio.h>
int main(){
    int n, check=0;
    printf("Quantidade de valores que deseja armazenar: ");
    scanf("%d",&n);
    float valor[n], nv;
    printf("Informe um valor para ser verificado: ");
    scanf("%f",&nv);
    for(int i=0; i<n; i++){
        printf("Digite o %do valor: ", i+1);
        scanf("%f",&valor[i]);
    }
    printf("\nLista digitada:");
    for(int i=0; i<n; i++){
        printf(" %f", valor[i]);
    }
    printf("\nNumero: %f", nv);
    for(int i=0; i<n; i++){
        if(valor[i] == nv){
            check = 1;
        }
    }
    if(check == 1){
            printf("\nO numero %f esta no vetor", nv);
        }else if(check == 0){
            printf("\nO numero %f nao esta no vetor", nv);
        }
    return 0;
}
