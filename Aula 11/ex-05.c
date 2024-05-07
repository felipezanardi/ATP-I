/*Faça um programa para ler os valores de a, b e c de uma equação do
2o grau. Em seguida, ele deverá calcular as raízes da equação.*/

#include <stdio.h>
#include <math.h>
int main(){
    double a, b, c, delta, x1, x2;
    printf("Valor de A (deve ser diferente de 0): ");
    scanf("%lf",&a);
    if(a == 0){
        printf("Valor de A deve ser diferente de 0, se nao, nao e funcao de segundo grau");
    }else{
        printf("Valor de B: ");
        scanf("%lf",&b);
        printf("Valor de C: ");
        scanf("%lf",&c);

        delta = pow(b, 2) - 4 * a * c;

        if(delta < 0){
            printf("Nao existe raiz");
        }else if(delta == 0){
            x1 = (-b + sqrt(delta)) / 2 * a;
            printf("Raiz unica -> (%lf)", x1);
        }else if(delta > 0){
            x1 = (-b + sqrt(delta)) / 2 * a;
            x2 = (-b - sqrt(delta)) / 2 * a;
            printf("Duas raizes -> (%lf) e (%lf)", x1, x2);
        }
    }
    return 0;
}
