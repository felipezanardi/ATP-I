/*Escreva um programa para ler a idade de um nadador e classifica-lo conforme
a tabela a seguir:

|     Categoria     |       Idade        |
| Infantil A 5 a 7  | 5 a 7              |
| Infantil B 8 a 10 | 8 a 10             |
| Juvenil A 11 a 13 | 11 a 13            |
| Juvenil B 14 a 17 | 14 a 17            |
| Adulto            | Maiores de 18 anos |
| Não Pode Competir | 0 a 4              |*/

#include <stdio.h>
int main(){
    int idade;
    printf("Informe a idade do nadador: ");
    scanf("%d",&idade);

    switch(idade){
        case 0 ... 4:
            printf("Nao pode competir");
            break;
        case 5 ... 7:
            printf("Categoria: Infantil A");
            break;
        case 8 ... 10:
            printf("Categoria: Infantil B");
            break;
        case 11 ... 13:
            printf("Categoria: Juvenil A");
            break;
        case 14 ... 17:
            printf("Categoria: Juvenil B");
            break;
        default:
            printf("Categoria: Adulto");
            break;
    }

    return 0;
}
