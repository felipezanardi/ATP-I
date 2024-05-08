/*Faça um programa para apresentar a sequência de Fibonacci até o termo ‘n’
fornecido pelo usuário. Para tanto, temos que a sequência é definida pela seguinte
relação de recorrência: Fn = Fn-1 + Fn-2 ; com valores iniciais: F1 = 1 e F2 = 1.
Por exemplo, os 11 primeiros termos seriam:

| Termo | 1º | 2º | 3º | 4º | 5º | 6º | 7º | 8º | 9º | 10º | 11º |
| Valor | 1  | 1  | 2  | 3  | 5  | 8  | 13 | 21 | 34 | 55  | 89  |*/

#include <stdio.h>
int main(){
    int n, f1=0, f2=1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&n);
    printf("Sequencia de Fibonacci ate o termo %d:", n);
    for(int i=1; i<=n; i++){
        if(i % 2 == 0){
            f1 = f1 + f2;
            printf(" %d", f1);
        }else if(i % 2 != 0){
            f2 = f1 + f2;
            printf(" %d", f2);
        }
    }
    return 0;
}
