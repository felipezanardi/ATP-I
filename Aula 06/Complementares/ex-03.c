/*Faça um programa para ler o salário de um trabalhador e o valor da prestação de um
empréstimo. Se a prestação for maior que 20% do salário, o programa deverá imprimir
“Empréstimo não concedido”; caso contrário imprimirá “Empréstimo concedido”.*/

#include <stdio.h>
int main(){
    float salario, prestacao;
    printf("Digite o salario: R$");
    scanf("%f",&salario);
    printf("Digite o valor da prestacao: R$");
    scanf("%f",&prestacao);

    if(prestacao > salario * 0.2){
        printf("Emprestimo nao concedido");
    }else{
        printf("Emprestimo concedido");
    }

    return 0;
}
