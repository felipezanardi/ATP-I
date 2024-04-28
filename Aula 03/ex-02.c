/*Faça um programa para ler quatro notas, calcular a média aritmética e imprimir o resultado.*/

#include <stdio.h>

int main(){
    float n1, n2, n3, n4, media;
    printf("Digite a primeira nota: ");
    scanf("%f",&n1);
    printf("Digite a segunda nota: ");
    scanf("%f",&n2);
    printf("Digite a terceira nota: ");
    scanf("%f",&n3);
    printf("Digite a quarta nota: ");
    scanf("%f",&n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("Media: %f\n", media);

    return 0;
}
