/*Faça um programa para ler o salário de um funcionário. Em seguida, deve-se calcular e
imprimir o valor do novo salário, sabendo que ele recebeu um aumento de 25%.*/

#include <stdio.h>

int main(){
    float sInicial, sFinal;
    printf("Salario do funcionario: ");
    scanf("%f",&sInicial);

    sFinal = sInicial + (sInicial * 0.25);

    printf("Novo salario: %.2f\n", sFinal);

    return 0;
}
