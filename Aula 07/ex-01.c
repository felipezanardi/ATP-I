/*Escreva um programa para ler a idade de um nadador e classifica-lo conforme
a tabela a seguir:

|     Categoria     |       Idade        |
| Infantil A 5 a 7  | 5 a 7              |
| Infantil B 8 a 10 | 8 a 10             |
| Juvenil A 11 a 13 | 11 a 13            |
| Juvenil B 14 a 17 | 14 a 17            |
| Adulto            | Maiores de 18 anos |*/

#include <stdio.h>

int main(){
    int idade;
    printf("Idade do nadador: ");
    scanf("%d",&idade);

    if(idade >= 5 && idade <= 7){
        printf("Categoria Infantil A");
    }else if(idade >= 8 && idade <= 10){
        printf("Categoria Infantil B");
    }else if(idade >= 11 && idade <= 13){
        printf("Categoria Juvenil A");
    }else if(idade >= 14 && idade <= 17){
        printf("Categoria Juvenil B");
    }else if(idade >= 18){
        printf("Categoria Adulto");
    }else{
        printf("Sem categoria");
    }

    return 0;
}
