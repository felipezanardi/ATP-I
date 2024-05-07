/*(Utilize o comando 'for') Ler valores inteiros positivos do usuário até que o número 0 seja
fornecido. Ao final, apresentar a quantidade de números pares e ímpares.*/

#include <stdio.h>

int main(){
    int par=0, impar=0;
    for(int valor=1; valor!=0;){
        printf("Informe um valor inteiro positivo (0 = parar): ");
        scanf("%d",&valor);
        if(valor % 2 == 0 && valor != 0){
            par++;
        }else if(valor % 2 == 1){
            impar++;
        }
    }
    printf("\nNumeros pares: %d\nNumeros Impares: %d", par, impar);
    return 0;
}
