/*Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador, sabendo-se que são descontados 8% para imposto
de renda. O programa deverá exibir o valor bruto, o valor do desconto e o valor líquido.*/

#include <stdio.h>

int main(){
    int dias, bruto;
    float descon;
    printf("Numero de dias trabalhados pelo encanador: ");
    scanf("%d",&dias);

    bruto = dias * 30;
    descon = bruto * 0.08;

    printf("Valor bruto: R$%.2d\n", bruto);
    printf("Valor do desconto: R$%.2f\n", descon);
    printf("Valor liquido: %.2f\n", bruto - descon);

    return 0;
}
