/*Faça um programa que, dados dois números inteiros, mostre na tela o maior deles, assim
como a diferença existente entre ambos.
Por exemplo:
Informe o Primeiro Número: 3
Informe o Segundo Número: 5
O maior é o número 5
A diferença entre eles é 2*/

#include <stdio.h>
int main(){
    int n1, n2;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n1);
    printf("Digite outro numero inteiro: ");
    scanf("%d",&n2);

    if(n1 > n2){
        printf("Maior numero: %d\n", n1);
        printf("Diferenca entre eles: %d\n", n1 - n2);
    }else{
        printf("Maior numero: %d\n", n2);
        printf("Diferenca entre eles: %d\n", n2 - n1);
    }

    return 0;
}
