/*Faça um programa para ler a base e o expoente. Em
seguida, deverá apresentar o resultado da potenciação.
Para tanto, use a função pow, conforme segue:
– double pow (double base, double exponent);*/

#include <stdio.h>
#include <math.h>
int main(){
    double base, expoente;
    printf("Base: ");
    scanf("%lf",&base);
    printf("Expoente: ");
    scanf("%lf",&expoente);
    printf("Resultado: %lf", pow(base, expoente));
    return 0;
}
