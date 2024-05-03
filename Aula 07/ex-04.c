/*Faça um programa para ler a média de trabalhos e a média de provas de um
aluno. Em seguida, o programa deverá calcular a média final do aluno com base
nas seguintes regras:

- Se o aluno apresentar médias de trabalho e de provas acima de cinco, a
média final será a média aritmética entre as médias de trabalhos e de provas;
- Caso contrário, a média final será a menor das médias obtidas entre
trabalhos e provas.*/

#include <stdio.h>

int main(){
    float mtrab, mprova;
    printf("Media trabalhos: ");
    scanf("%f",&mtrab);
    printf("Media de provas: ");
    scanf("%f",&mprova);

    if(mtrab > 5 && mprova > 5){
        printf("Media final: %.2f", (mtrab + mprova) / 2);
    }else if(mtrab < mprova){
        printf("Media final: %.2f", mtrab);
    }else{
        printf("Media final: %.2f", mprova);
    }

    return 0;
}
