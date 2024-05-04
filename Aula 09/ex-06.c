/*Ler valores inteiros positivos do usuário até que o número 0 seja
fornecido. Ao final, apresentar a quantidade de números pares e ímpares.*/

#include <stdio.h>
int main(){
    int valor, i=0, par=0, impar=0;
    while(valor != 0){
        printf("Digite o %do valor (0 = parar): ", i+1);
        scanf("%d",&valor);
        if(valor % 2 == 0 && valor != 0){
            par++;
        }else if(valor % 2 != 0){
            impar++;
        }
        i++;
    }
    printf("Numeros pares: %d\nNumeros impares: %d\n", par, impar);
    return 0;
}
