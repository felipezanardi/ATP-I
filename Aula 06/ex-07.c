/*Faça um programa para ler o valor de um produto e classifica-lo. Para tanto, utilize a tabela abaixo:

|          PREÇO:          | CLASSIFICAÇÃO: |
| Até R$ 100,00            | BARATO         |
| De R$ 100,00 a R$ 500,00 | NORMAL         |
| Acima de R$ 500,00       | CARO           |*/

#include <stdio.h>
int main(){
    float preco;
    printf("Digite o preco do produto: R$");
    scanf("%f",&preco);

    if(preco < 100){
        printf("BARATO");
    }else if(preco >= 100 && preco <= 500){
        printf("NORMAL");
    }else{
        printf("CARO");
    }

    return 0;
}
