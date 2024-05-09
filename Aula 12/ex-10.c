/*O cardápio de uma lanchonete é o seguinte:

|     Produto     | Código |  Preço   |
| Cachorro Quente | 100    | R$ 10,00 |
| Bauru Simples   | 101    | R$ 12,00 |
| Bauru com ovo   | 102    | R$ 15,00 |
| Hambúrguer      | 103    | R$ 11,00 |
| Cheeseburguer   | 104    | R$ 15,00 |
| Refrigerante    | 105    | R$ 3,00  |

Faça um programa para perguntar quantos itens serão pedidos. Em seguida, deve-
se ler o código dos itens e as quantidades desejadas, calculando e apresentando o
valor a ser pago por item (preço * quantidade). Por fim, o programa exibe o total
geral do pedido.*/

#include <stdio.h>
int main(){
    int num, cod, quant, i=1;
    float stotal=0, total=0;
    printf("Informe a quantidade de itens deste pedido: ");
    scanf("%d",&num);
    do{
        printf("\nCodigo do item %d: ", i);
        scanf("%d",&cod);
        switch(cod){
            case 100:
                printf("Quantidade do item %d: ",i);
                scanf("%d",&quant);
                stotal = quant * 10;
                printf("Subtotal do item %d: R$%.2f\n", i, stotal);
                total = total + stotal;
                i++;
                break;
            case 101:
                printf("Quantidade do item %d: ",i);
                scanf("%d",&quant);
                stotal = quant * 12;
                printf("Subtotal do item %d: R$%.2f\n", i, stotal);
                total = total + stotal;
                i++;
                break;
            case 102:
                printf("Quantidade do item %d: ",i);
                scanf("%d",&quant);
                stotal = quant * 15;
                printf("Subtotal do item %d: R$%.2f\n", i, stotal);
                total = total + stotal;
                i++;
                break;
            case 103:
                printf("Quantidade do item %d: ",i);
                scanf("%d",&quant);
                stotal = quant * 11;
                printf("Subtotal do item %d: R$%.2f\n", i, stotal);
                total = total + stotal;
                i++;
                break;
            case 104:
                printf("Quantidade do item %d: ",i);
                scanf("%d",&quant);
                stotal = quant * 15;
                printf("Subtotal do item %d: R$%.2f\n", i, stotal);
                total = total + stotal;
                i++;
                break;
            case 105:
                printf("Quantidade do item %d: ",i);
                scanf("%d",&quant);
                stotal = quant * 3;
                printf("Subtotal do item %d: R$%.2f\n", i, stotal);
                total = total + stotal;
                i++;
                break;
            default:
                printf("Codigo invalido\n");
                break;
        }
    }while(i<=num);
    printf("\nTotal Geral: R$%.2f", total);
    return 0;
}
