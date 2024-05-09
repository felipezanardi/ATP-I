/*
Faça um programa para ler número inteiros positivos até que um número menor
ou igual a zero seja digitado. Esses valores devem ser armazenados em um vetor.
Após a leitura, seu programa deverá percorrer o vetor para encontrar o maior
elemento, exibir o vetor e o maior elemento.
*/

#include <stdio.h>
int main(){
    int num[200], i1=0, maiorn, maiorv;
    do{
        printf("Digite um numero (numero < 1 = parar): ");
        scanf("%d",&num[i1]);
        i1++;
    }while(num[i1-1] > 0);
    for(int i2=0; i2<i1; i2++){
        if(num[i2] > maiorn || i2 == 0){
            maiorn = num[i2];
            maiorv = i2;
        }
    }
    if(maiorn < 1){
        printf("\nNenhum numero inteiro positivo digitado");
    }else{
        printf("\nMaior: vetor[%d] = %d", maiorv, maiorn);
    }
    return 0;
}
