/*
Faça uma função denominada menu para exibir um menu para o Exercício 1.
A função deverá exibir um menu e retornar o valor da opção escolhida pelo
usuário. A exibição e leitura pode ser realizada dentro da função menu.
*/

#include <stdio.h>
int menu(){
    int opc;
    printf("\nMENU:\n"
           "[1] SOMA\n"
           "[2] SUBTRACAO\n"
           "[3] MULTIPLICACAO\n"
           "[4] DIVISAO\n"
           "[5] SAIR\n"
           "Digite a opcao: ");
    scanf("%d",&opc);
    return opc;
}

int main(){
    float a, b;
    int opc;
    printf("Digite um numero: ");
    scanf("%f",&a);
    printf("Digite outro numero: ");
    scanf("%f",&b);
    do{
        opc = menu();
        switch(opc){
            case 1:
                printf("Resultado: %f\n", a+b);
                break;
            case 2:
                printf("Resultado: %f\n", a-b);
                break;
            case 3:
                printf("Resultado: %f\n", a*b);
                break;
            case 4:
                printf("Resultado: %f\n", a/b);
                break;
            case 5:
                break;
            default:
                printf("Opcao invalida, tente novamente\n");
                break;
        }
    }while(opc != 5);

    return 0;
}
