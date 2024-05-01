/*Faça um programa para calcular e mostrar o salário reajustado de um funcionário. Se o salário for
até R$ 1000,00 o reajuste será 20%, se entre R$ 1000,00 e R$ 2000,00 o reajuste será de 10%, caso
contrário, não haverá reajuste.*/

#include <stdio.h>
int main(){
    float salario;
    printf("Digite o salario do funcionario: R$");
    scanf("%f",&salario);

    if(salario <= 1000){
        printf("Salario apos reajuste de 20%%: R$%.2f", salario + (salario * 0.2));
    }else if(salario > 1000 && salario < 2000){
        printf("Salario apos reajuste de 10%%: R$%2.f", salario + (salario * 0.1));
    }else{
        printf("Salario nao teve reajuste");
    }

    return 0;
}
