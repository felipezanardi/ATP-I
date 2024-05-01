/*Faça um programa para ler dois números e o símbolo de uma operação aritmética. Em
seguida, o programa apresenta o resultado da operação. Para tanto, utilize os seguintes
símbolos:
- Soma: +
- Subtração: -
- Divisão: /
- Multiplicação: *

Exemplo:
Digite primeiro número: 5
Digite segundo número: 4
Digite operação: +
Resultado 5 + 4 = 9

Para ler caractere você deve usar o tipo char e %c no scanf. Para comparar um tipo caractere
você deve usar aspas simples, por exemplo: if (símbolo == ‘+’).*/

#include <stdio.h>
int main(){
    float n1, n2;
    char op;
    printf("Digite o primeiro numero: ");
    scanf("%f",&n1);
    printf("Digite o segundo numero: ");
    scanf("%f",&n2);
    fflush(stdin);
    printf("Digite a operacao: ");
    scanf("%c",&op);

    if(op == '+'){
        printf("%f %c %f = %f", n1, op, n2, n1+n2);
    }else if(op == '-'){
        printf("%f %c %f = %f", n1, op, n2, n1-n2);
    }else if(op == '/'){
        printf("%f %c %f = %f", n1, op, n2, n1/n2);
    }else if(op == '*'){
        printf("%f %c %f = %f", n1, op, n2, n1*n2);
    }else{
        printf("Dados invalidos");
    }

    return 0;
}
