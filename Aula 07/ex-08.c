/*Escreva um programa para ler três valores inteiros e apresenta-los em ordem
crescente.*/

#include <stdio.h>

int main(){
    int a, b, c;
    printf("Informe o primeiro numero: ");
    scanf("%d",&a);
    printf("Informe o segundo numero: ");
    scanf("%d",&b);
    printf("Informe o terceiro numero: ");
    scanf("%d",&c);

    if(a < b && b < c){
        printf("%d, %d, %d",a, b, c);
    }else if(a < c && c < b){
        printf("%d, %d, %d",a, c, b);
    }else if(b < a && a < c){
        printf("%d, %d, %d",b, a, c);
    }else if(b < c && c < a){
        printf("%d, %d, %d",b, c, a);
    }else if(c < a && a < b){
        printf("%d, %d, %d",c, a, b);
    }else if(c < b && b < a){
        printf("%d, %d, %d",c, b, a);
    }else{
        printf("Dados invalidos ou numeros iguais");
    }

    return 0;
}
