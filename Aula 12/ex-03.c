/*Faça um programa que apresente um menu de opções de operações para serem
realizadas entre dois números fornecidos pelo usuário, conforme abaixo. O
programa é finalizado quando o usuário digitar a Opção 5.
MENU
1 - Adição
2 - Subtração
3 - Multiplicação
4 - Divisão
5 - Sair*/

#include <stdio.h>
int main(){
    int op;
    float num1, num2;
    do{
        printf("MENU\n"
               "[1] Adicao\n"
               "[2] Subtracao\n"
               "[3] Multiplicacao\n"
               "[4] Divisao\n"
               "[5] Sair\n");
        printf("Selecione uma das opcoes: ");
        scanf("%d",&op);
        if(op >= 1 && op <= 4){
            printf("\nInforme o primeiro numero: ");
            scanf("%f",&num1);
            printf("Informe o segundo numero: ");
            scanf("%f",&num2);
            switch(op){
                case 1:
                    printf("Resultado: %f + %f = %f\n\n", num1, num2, num1+num2);
                    break;
                case 2:
                    printf("Resultado: %f - %f = %f\n\n", num1, num2, num1-num2);
                    break;
                case 3:
                    printf("Resultado: %f x %f = %f\n\n", num1, num2, num1*num2);
                    break;
                case 4:
                    printf("Resultado: %f / %f = %f\n\n", num1, num2, num1/num2);
                    break;
            }
        }else if(op < 1 || op > 5){
            printf("Opcao invalida, tente novamente.\n\n");
        }
    }while(op != 5);
    return 0;
}
