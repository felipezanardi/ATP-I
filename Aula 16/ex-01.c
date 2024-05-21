/*
Faça funções para calcular a soma, subtração, multiplicação e divisão de dois
números. Desenvolva uma função para cada operação. Leia dois valores do
usuário e exiba o resultado das quatro operações na main após chamar funções
desenvolvidas.
*/

#include <stdio.h>
float soma(float a, float b){
    return a+b;
}

float subt(float a, float b){
    return a-b;
}

float mult(float a, float b){
    return a*b;
}

float div(float a, float b){
    return a/b;
}

int main(){
    float a, b;
    printf("Digite um numero: ");
    scanf("%f",&a);
    printf("Digite outro numero: ");
    scanf("%f",&b);
    printf("Soma: %f\n"
           "Subtracao: %f\n"
           "Multiplicacao: %f\n"
           "Divisao: %f\n", soma(a,b), subt(a,b), mult(a,b), div(a,b));
    return 0;
}
