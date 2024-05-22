/*
Faça uma função para receber um valor e um intervalo. A função deverá
retornar 0 (falso) se o valor não estiver no intervalo ou 1 (verdadeiro) se o valor
estiver dentro do intervalo. O intervalo é especificado por um valor inicial e final.

Exemplo de assinatura da função:
int dentro_intervalo(int valor, int inicio, int fim);

Utilize essa função em três exemplos para validar:
    a) Entrada de dados para os meses do ano (1 a 12)
    b) Entrada de dados de hora (0 a 23) e minutos (0 a 59)
    c) Menor de idade (0 a 17)
*/

#include <stdio.h>
int intv(int valor, int min, int max){
    if(valor >= min && valor <= max){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int mes, horas, min, idade;
    printf("a) Mes (1-12): ");
    scanf("%d",&mes);
    printf("b) Horas (0-23): ");
    scanf("%d",&horas);
    printf("b) Minutos (0-59): ");
    scanf("%d",&min);
    printf("c) Idade: ");
    scanf("%d",&idade);

    if(intv(mes, 1, 12) == 1){
        printf("\na) Dado valido\n");
    }else{
        printf("\na) Dado invalido\n");
    }
    if(intv(horas, 0, 23) == 1 && intv(min, 0, 59) == 1){
        printf("b) Dado valido\n");
    }else{
        printf("b) Dado invalido\n");
    }
    if(intv(idade, 0, 17) == 1){
        printf("c) Dado valido, menor de idade\n");
    }else{
        printf("c) Dado invalido, maior de idade\n");
    }

    return 0;
}
