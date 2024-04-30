/*Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de
um cilindro circular e calculado por meio da seguinte equação: V = pi * raio2 * altura,
onde pi = 3.141592.*/

#include <stdio.h>

int main(){
    float v, alt, raio, pi=3.141592;
    printf("Altura: ");
    scanf("%f",&alt);
    printf("Raio: ");
    scanf("%f",&raio);

    v = pi * (raio * raio) * alt;

    printf("Volume: %f m2\n", v);

    return 0;
}
