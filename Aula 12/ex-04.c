/*Faça um programa para ler um valor inteiro e positivo N. Em seguida, deve-se
exibir todos os números de 3 a N que são múltiplos de 3 ou 5.*/

#include <stdio.h>
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    printf("Numeros de 3 a %d que sao divisiveis por 3 e 5:\n", num);
    for(int i=3; i <= num; i++){
        if(i % 3 == 0 || i % 5 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}
