/*(Utilize o comando 'do while') Ler valores inteiros positivos do usuário até que o número 0 seja
fornecido. Ao final, apresentar a quantidade de números pares e ímpares.*/

#include <stdio.h>

int main(){
    int valor, par=0, impar=0;
    do{
        printf("Informe um valor inteiro positivo (0 = parar): ");
        scanf("%d",&valor);
        if(valor % 2 == 0 && valor != 0){
            par++;
        }else if(valor % 2 == 1 && valor != 0){
            impar++;
        }
    }while(valor != 0);
    printf("\nNumeros pares: %d\nNumeros Impares: %d", par, impar);
    return 0;
}
