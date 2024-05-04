/*Usando switch, faça um programa para ler dois valores e apresentar para o
usuário o menu de opções conforme abaixo. Em seguida, o programa deverá ler a
opção indicada pelo usuário e efetuar a operação desejada. Adicionalmente, o
programa deve apresentar uma mensagem de erro caso a opção digitada for
inválida.
MENU
1- Somar os dois números
2- Subtrair os dois números
3- Multiplicar os dois números
4- Dividir os dois números (o denominador não pode ser zero)
5- Sair
Digite uma opção:*/

#include <stdio.h>
int main(){
    int op;
    float n1, n2;
    printf("Digite um numero: ");
    scanf("%f",&n1);
    printf("Digite outro numero: ");
    scanf("%f",&n2);
    printf("MENU\n"
           "1 - Somar os dois numeros\n"
           "2 - Subtrair os dois numeros\n"
           "3 - Multiplicar os dois numeros\n"
           "4 - Dividir os dois numeros (o denominador nao pode ser zero)\n"
           "5 - Sair\n"
           "Digite uma opcao: ");
    scanf("%d",&op);

    switch(op){
        case 1:
            printf("%f + %f = %f", n1, n2, n1+n2);
            break;
        case 2:
            printf("%f - %f = %f", n1, n2, n1-n2);
            break;
        case 3:
            printf("%f * %f = %f", n1, n2, n1*n2);
            break;
        case 4:
            if(n2 == 0){
                printf("Erro -> O denominador nao pode ser zero");
            }else{
                printf("%f / %f = %f", n1, n2, n1/n2);
                break;
            }
        case 5:
            break;
        default:
            printf("Opcao invalida");
            break;
    }
    return 0;
}
