/*
Faça uma função para receber um número e exibir a tabuada desse número. A
exibição ocorrerá dentro da própria função.
*/

#include <stdio.h>
int tab(int a, int i){
    return printf("%d x %d = %d\n", a, i, a*i);
}

int main(){
    int num, i;
    printf("Digite um numero: ");
    scanf("%d",&num);
    for(i=0; i<=10; i++){
        tab(num, i);
    }
    return 0;
}
