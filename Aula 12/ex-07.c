/*Faça um programa para ler um valor inteiro e positivo N. Em seguida, deve-se
calcular e exibir o valor de E, que é calculado conforme a seguinte equação:

E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!*/

#include <stdio.h>
int main(){
    int n, fat=1;
    float e=1;
    printf("Digite um valor n inteiro e positivo: ");
    scanf("%d",&n);
    printf("E = 1 ", n);
    for(int i=1; i<=n; i++){
        printf("+ 1/%d! ", i);
    }
    printf("\nE = 1 ", n);
    for(int i=1; i<=n; i++){
        for(int ii=2; ii<=i; ii++){
            fat = fat * ii;
        }
        printf("+ 1/%d ", fat);
        e = e + (float)1/fat;
        fat = 1;
    }
    printf("\nE = %f", e);
    return 0;
}
