/*Ler a quantidade de valores que serão fornecidos pelo usuário. Em
seguida, fazer a leitura desses valores. Por fim, apresentar a soma e a
média.*/

#include <stdio.h>
int main(){
    int i=0, quant;
    float valor, soma;
    printf("Informe a quantidade de valores: ");
    scanf("%d",&quant);

    while(i < quant){
        printf("Informe o %do valor: ", i+1);
        scanf("%f",&valor);
        soma = soma + valor;
        i++;
    }
    printf("\nSoma: %f\n"
           "Media dos valores: %f\n", soma, soma/quant);

    return 0;
}
