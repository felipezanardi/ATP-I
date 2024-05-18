/*
É muito comum o uso de arquivos texto para armazenamento de dados no
formado CSV (comma-separated values)—em português, valores separados por
vírgula. Faça um programa para ler uma frase que contenha números separados
por vírgula. Em seguida, exiba a soma desses números. Considere somente
números inteiros. Dica: utilizar a função atoi para converter os números para
inteiro.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char frase[50], numt[50];
    int soma=0;
    printf("Frase: ");
    gets(frase);

    for(int i=0; i<strlen(frase)+1; i++){
        int temp=0;
        do{
            if(frase[i] >= '0' && frase[i] <= 'p'){
                numt[temp] = frase[i];
                temp++;
            }
            i++;
        }while(frase[i] != ',' && frase[i] != '\0');
        numt[temp] = '\0';
        soma = soma + atoi(numt);
    }
    printf("Soma: %d\n", soma);
    return 0;
}
