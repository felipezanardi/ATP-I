/*Elabore um programa que faça leitura de vários números inteiros até que se
digite um número negativo. Por fim, o programa tem que retornar o maior e o
menor número lido.*/

#include <stdio.h>
int main(){
    int num, maior, menor;
    printf("Digite um numero (numero negativo = parar): ");
    scanf("%d",&num);
    if(num >= 0){
        maior = num;
        menor = num;
        do{
            printf("Digite um numero (numero negativo = parar): ");
            scanf("%d",&num);
            if(num > maior && num >= 0){
                maior = num;
            }else if(num < menor && num >= 0){
                menor = num;
            }
        }while(num >=0);
        printf("Maior: %d\nMenor: %d", maior, menor);
    }
    return 0;
}
