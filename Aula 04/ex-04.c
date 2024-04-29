/*Faça um programa para ler quatro notas, calcular a média aritmética e imprimir o resultado.*/

#include <stdio.h>

int main(){
    int num, nota;
    float media;
    for(int i=0; i<4; i++){
        printf("Digite a nota da %da prova: ", i+1);
        scanf("%d",&num);
        nota = nota + num;
    }

    media = (float) nota / 4;

    printf("Media: %f", media);

    return 0;
}
