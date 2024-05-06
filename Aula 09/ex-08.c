/*Faça um programa para ler a média de N alunos. O valor de N será
fornecido pelo usuário e indica a quantidade de alunos. O seu programa
deve considerar médias entre 0 e 10, isto é, se o usuário digitar uma nota
fora desse intervalo, o programa deve avisar o usuário e aguardar a
inserção de uma nota dentro intervalo indicado.*/

#include <stdio.h>
int main(){
    int N, i=0;
    float media;
    printf("Numero de alunos: ");
    scanf("%d",&N);
    while(i < N){
        printf("Media do %do aluno: ", i+1);
        scanf("%f",&media);
        if(media < 0 || media > 10){
            printf("Media invalida, digite novamente\n");
        }else{
            i++;
        }
    }
    return 0;
}
