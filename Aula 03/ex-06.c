/*Faça um programa para calcular o salário de um funcionário, considerando que ele teve
aumento de 25% sobre o salário base.*/

#include <stdio.h>

int main(){
    float sInicial, sFinal;
    printf("Salario do funcionario: ");
    scanf("%f",&sInicial);

    sFinal = sInicial + (sInicial * 0.25);

    printf("Salario com aumento: %.2f\n", sFinal);

    return 0;
}
