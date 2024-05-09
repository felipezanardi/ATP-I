/*Faça um programa para ler um número inteiro positivo N e, em seguida,
imprimir N linhas do chamado Triângulo de Floyd. Por exemplo, para N=6 temos:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21*/

#include <stdio.h>
int main(){
    int n, num=1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&n);
    printf("Triangulo de Floyd:\n");
    for(int linha=1; linha<=n; linha++){
        for(int alg=0; alg<linha; alg++){
            printf("%d ", num);
            num = num + 1;
        }
        printf("\n");
    }
    return 0;
}
