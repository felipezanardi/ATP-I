/*Faça um programa para ler dois números e o símbolo de uma operação
aritmética. Em seguida, o programa apresenta o resultado da operação. Para tanto,
utilize os seguintes símbolos:
- Soma: +
- Subtração: -
- Divisão: /
- Multiplicação: **/

#include <stdio.h>
int main(){
    float n1, n2;
    char op;
    printf("Digite um numero: ");
    scanf("%f",&n1);
    printf("Digite outro numero: ");
    scanf("%f",&n2);
    fflush(stdin);
    printf("Informe a operacao: ");
    scanf("%c",&op);

    switch(op){
        case '+':
            printf("%f + %f = %f", n1, n2, n1+n2);
            break;
        case '-':
            printf("%f - %f = %f", n1, n2, n1-n2);
            break;
        case '/':
            printf("%f / %f = %f", n1, n2, n1/n2);
            break;
        case '*':
            printf("%f * %f = %f", n1, n2, n1*n2);
            break;
        default:
            printf("Dados invalidos");
            break;
    }
    return 0;
}
