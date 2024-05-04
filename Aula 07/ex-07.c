/*Faça um programa para ler os valores dos lados (A, B e C) de um triângulo e
verificar se podem formar um triângulo. Nessa verificação, considere que o
comprimento de cada lado de um triângulo é menor do que a soma dos outros dois
lados.*/

#include <stdio.h>

int main(){
    float a, b, c;
    printf("Valor do lado A: ");
    scanf("%f",&a);
    printf("Valor do lado B: ");
    scanf("%f",&b);
    printf("Valor do lado C: ");
    scanf("%f",&c);

    if(a < b+c && b < a+c && c < a+b){
        printf("Pode formar um triangulo");
    }else{
        printf("Nao e possivel formar um triangulo");
    }

    return 0;
}
