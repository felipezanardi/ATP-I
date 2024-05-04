/*Ler um número e apresentar o seu fatorial. Lembrando que:
n! = 1 x 2 x 3 x 4 x ... x n-1 x n
0! = 1
Exemplo: 5! = 1 x 2 x 3 x 4 x 5 = 120*/

#include <stdio.h>
int main(){
    int num, i=2, fat=1;
    printf("Digite um numero: ");
    scanf("%d",&num);
    while(i <= num){
        fat = fat * i;
        i++;
    }
    printf("%d! = %d", num, fat);
    return 0;
}
