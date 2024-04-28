/*Faça um programa que indique a média final de um aluno, considerando que ele terá uma
prova e um trabalho, sendo que a prova tem peso 7 e o trabalho peso 3. A média final é a média
ponderada das notas.*/

#include <stdio.h>

int main(){
    float prova, trab, mediaf;
    printf("Nota da prova: ");
    scanf("%f",&prova);
    printf("Nota do trabalho: ");
    scanf("%f",&trab);

    mediaf = ((prova * 7) + (trab * 3)) / 10;

    printf("Media final: %.2f\n", mediaf);

    return 0;
}
