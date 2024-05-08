/*Faça um programa que leia um conjunto não determinado de valores. A cada
número lido, o programa deverá exibir o quadrado, o cubo e a raiz quadrada.
Finalize a entrada de dados quando o usuário digitar um valor negativo ou zero.*/

#include <stdio.h>
#include <math.h>
int main(){
    double num;
    printf("Informe um numero (numero < 1 = parar): ");
    scanf("%lf",&num);
    while(num > 0){
        printf("Quadrado: %lf\n"
               "Cubo: %lf\n"
               "Raiz quadrada: %lf\n", num*num, pow(num,3), sqrt(num));
        printf("\nInforme um numero (numero < 1 = parar): ");
        scanf("%lf",&num);
    }
    return 0;
}
