/*Faça um programa para ler um ângulo em graus e
apresentar o seno e cosseno desse ângulo*/

#include <stdio.h>
#include <math.h>
int main(){
    double angulo, rad, pi=3.14159265;
    printf("Informe um angulo (em graus): ");
    scanf("%lf",&angulo);
    rad = angulo * pi / 180; //converte graus para radianos
    printf("Seno: %lf\nCosseno: %lf", sin(rad), cos(rad));
    return 0;
}
