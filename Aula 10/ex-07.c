/*(Utilize o comando 'for') Ler quantos valores serão fornecidos pelo usuário. Em seguida, fazer a
leitura desses valores. Por fim, apresentar a soma e a média.*/

#include <stdio.h>

int main(){
    int quant;
    float valor, soma;
    printf("Quantidade de valores: ");
    scanf("%d",&quant);
    for(int i=0; i<quant; i++){
        printf("Informe o %do valor: ", i+1);
        scanf("%f",&valor);
        soma = soma + valor;
    }
    printf("\nSoma: %f\n"
           "Media: %f\n", soma, soma/quant);
    return 0;
}
