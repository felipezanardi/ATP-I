/*Em Matemática, o número harmônico designado por H(n) define-se como
sendo a soma da série harmônica: H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
Faça um programa que leia um valor n inteiro e positivo e apresente o valor de
H(n).*/

#include <stdio.h>
int main(){
    int n;
    float hn=1;
    printf("Digite um valor n inteiro e positivo: ");
    scanf("%d",&n);
    printf("H(%d) = 1 ", n);
    for(int i=2; i<=n; i++){
        printf("+ 1/%d ", i);
        hn = hn + (float)1/i;
    }
    printf("\nH(%d) = %f", n, hn);
    return 0;
}
