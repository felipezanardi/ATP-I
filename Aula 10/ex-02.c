/*(Utilize o comando 'do while') Ler quantos valores serão fornecidos pelo usuário. Em seguida, fazer a
leitura desses valores. Por fim, apresentar a soma e a média.*/

#include <stdio.h>

int main(){
    int quant, i=0;
    float valor, soma;
    printf("Quantidade de valores: ");
    scanf("%d",&quant);
    do{
        printf("Informe o %do valor: ", i+1);
        scanf("%f",&valor);
        soma = soma + valor;
        i++;
    }while(i < quant);
    printf("\nSoma: %f\n"
           "Media: %f\n", soma, soma/quant);
    return 0;
}
