/*
Faça uma função para calcular o fatorial de um número e retornar por parâmetro
o valor do fatorial. Por exemplo: void fatorial (int n, int *fat);
*/

#include <stdio.h>
void fatorial(int n, int *fat){
    for(int i=2; i<=n; i++){
        *fat *= i;
    }
}

int main (){
    int n, fat=1;
    printf("Digite um numero: ");
    scanf("%d",&n);
    fatorial(n, &fat);
    printf("Fatorial: %d\n", fat);
    return 0;
}
