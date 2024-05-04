/*Leia uma data e determine se ela é válida. Para tanto, verifique se o mês está
entre 1 e 12, e se o dia existe naquele mês. Note que Fevereiro tem 29 dias em
anos bissextos e 28 dias em anos não bissextos.*/

#include <stdio.h>

int main(){
    int d, m, a;
    printf("Informe uma data (Exemplo: 01 01 2001): ");
    scanf("%d%d%d",&d,&m,&a);

    if((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d >= 1 && d <= 31){
        printf("Data valida");
    }else if((m == 4 || m == 6 || m == 9 || m == 11) && d >= 1 && d <= 30){
        printf("Data valida");
    }else if(m == 2 && d >= 1 && d <= 28){
        printf("Data valida");
    }else if(m == 2 && (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)) && d >= 1 && d <= 29){
        printf("Data valida");
    }else{
        printf("Data invalida");
    }

    return 0;
}
