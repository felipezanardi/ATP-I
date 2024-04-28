/*Faça um programa para ler duas notas e dois pesos. Em seguida, apresente a média ponderada
dessas notas.*/

#include <stdio.h>

int main(){
    float n1, n2, p1, p2, mediaf;
    printf("Primeira nota: ");
    scanf("%f",&n1);
    printf("Peso da primeira nota: ");
    scanf("%f",&p1);
    printf("Segunda nota: ");
    scanf("%f",&n2);
    printf("Peso da segunda nota: ");
    scanf("%f",&p2);

    mediaf = ((n1 * p1) + (n2 * p2)) / (p1 + p2);

    printf("Media final: %.2f\n", mediaf);

    return 0;
}
