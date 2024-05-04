/*O cardápio de uma lanchonete é dado pela tabela abaixo. Escreva um programa
que leia o código do item adquirido pelo consumidor e a quantidade, calculando
e mostrando o total a pagar. Não será necessário exibir o produto e o valor,
somente o valor final.

| Código |     Produto     | Preço Unitário (R$) |
| 100    | Cachorro quente | R$ 7,00             |
| 101    | Bauru Simples   | R$ 5,00             |
| 102    | Hamburguer      | R$ 10,00            |
| 103    | Cheeseburguer   | R$ 12,00            |
| 104    | Refrigerante    | R$ 3,00             |*/

#include <stdio.h>
int main(){
    int item, quant;
    printf("Codigo do item: ");
    scanf("%d",&item);
    printf("Quantidade: ");
    scanf("%d",&quant);

    switch(item){
        case 100:
            printf("Total a pagar: R$%.2d", 7 * quant);
            break;
        case 101:
            printf("Total a pagar: R$%.2d", 5 * quant);
            break;
        case 102:
            printf("Total a pagar: R$%.2d", 10 * quant);
            break;
        case 103:
            printf("Total a pagar: R$%.2d", 12 * quant);
            break;
        case 104:
            printf("Total a pagar: R$%.2d", 3 * quant);
            break;
        default:
            printf("Codigo invalido");
            break;
    }
    return 0;
}
