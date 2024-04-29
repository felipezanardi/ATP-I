/*Faça um programa que pela ao usuário para digitar três valores inteiros e imprima a soma
deles.*/

#include <stdio.h>

int main(){
    int v1, v2, v3;
    printf("Digite o primeiro valor: ");
    scanf("%d",&v1);
    printf("Digite o segundo valor: ");
    scanf("%d",&v2);
    printf("Digite o terceiro valor: ");
    scanf("%d",&v3);

    printf("Soma: %d\n", v1 + v2 + v3);

    return 0;
}
