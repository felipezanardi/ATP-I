/*
Faça uma função para calcular o fatorial de um número e retornar o valor do
fatorial.
*/

#include <stdio.h>
int fat(int a){
    int f=1, i;
    for(i=2; i<=a; i++){
        f *= i;
    }
    return f;
}

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    printf("Fatorial: %d\n", fat(num));
    return 0;
}
