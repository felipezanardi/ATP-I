/*
Faça um programa para gerar N números aleatórios entre 0 e 5, os quais
representam os lançamentos de um dado não viciado. Em seguida, o seu programa
deverá apresentar um relatório sobre a quantidade de ocorrências de cada face do
dado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int num, quant, face[6];
    for(int i=0; i<6; i++){
        face[i] = 0;
    }
    printf("Quantidade de lancamentos: ");
    scanf("%d",&quant);
  
    srand(time(NULL)); //gerar semente(seed)
    for(int i=0; i<quant; i++){
        num = rand() % 6;
        face[num] = face[num] + 1;
    }
  
    printf("\nRelatorio dos lancamentos:\n");
    for(int i=0; i<6; i++){
        printf("Face %d -> %d (%.2f%%)\n",i, face[i], (float)face[i]/quant*100);
    }
    return 0;
}
