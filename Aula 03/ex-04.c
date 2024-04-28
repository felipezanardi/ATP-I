/*Faça um programa para ler um número inteiro e imprimir a sua tabuada.*/

#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);

    printf("%d x 0 = %d\n", num, num*0);
    printf("%d x 1 = %d\n", num, num*1);
    printf("%d x 2 = %d\n", num, num*2);
    printf("%d x 3 = %d\n", num, num*3);
    printf("%d x 4 = %d\n", num, num*4);
    printf("%d x 5 = %d\n", num, num*5);
    printf("%d x 6 = %d\n", num, num*6);
    printf("%d x 7 = %d\n", num, num*7);
    printf("%d x 8 = %d\n", num, num*8);
    printf("%d x 9 = %d\n", num, num*9);
    printf("%d x 10 = %d\n", num, num*10);

    return 0;
}
