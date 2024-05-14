/*
Faça um programa para ler uma quantidade de palavras informadas pelo
usuário e indicar qual seria a primeira e a última considerando a ordem alfabética.
*/

#include <stdio.h>
#include <string.h>
int main(){
    char palavra[50], primeira[50], ultima[50];
    int quant;
    printf("Quantidade de palavras: ");
    scanf("%d",&quant);
    getchar();
    // salvar palavra -- ok
    for(int i=0; i<quant; i++){
        printf("Digite a %da palavra: ", i+1);
        gets(palavra);
        // formatar palavra -- ok
        for(int letra=0; letra<strlen(palavra); letra++){
            if(palavra[0] >= 'a' && palavra[0] <= 'z' && letra == 0){
                palavra[0] = palavra[0] - 32;
            }else if(palavra[letra] >= 'A' && palavra[letra] <= 'Z' && letra != 0){
                palavra[letra] = palavra[letra] + 32;
            }
        }
        // comparar palavra -- ok
        if(i == 0){
            strcpy(primeira, palavra);
            strcpy(ultima, palavra);
        }else if(strcmp(palavra, primeira) == -1){
            strcpy(primeira, palavra);
        }else if(strcmp(palavra, ultima) == +1){
            strcpy(ultima, palavra);
        }
    }
    printf("\nPrimeira: %s\n"
           "Ultima: %s", primeira, ultima);
    return 0;
}
