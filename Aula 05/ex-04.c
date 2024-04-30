/*Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.*/

#include <stdio.h>

int main(){
    int seg, min, h;
    printf("Valor inteiro em segundos: ");
    scanf("%d",&seg);

    min = seg / 60;
    h = min / 60;

    printf("Horas: %d\n", h);
    printf("Minutos: %d\n", min);
    printf("Segundos: %d\n", seg);

    return 0;
}
