/*Leia o código de um determinado produto e mostre sua classificação. Utilize a
seguinte tabela como referência:

|        Código         |         Classificação           |
| 1                     | Alimento não-perecível          |
| 2, 3 ou 4             | Alimento perecível              |
| 5 ou 6                | Vestuário                       |
| 7                     | Higiene Pessoal                 |
| 8 até 15              | Limpeza e Utensílios Domésticos |
| Qualquer outro código | Inválido                        |*/

#include <stdio.h>
int main(){
    int cod;
    printf("Codigo do produto: ");
    scanf("%d",&cod);

    switch(cod){
        case 1:
            printf("Alimento nao-percivel");
            break;
        case 2:case 3:case 4:
            printf("Alimento perecivel");
            break;
        case 5:case 6:
            printf("Vestuario");
            break;
        case 7:
            printf("Higiene pessoal");
            break;
        case 8 ... 15:
            printf("Limpeza e utensilios domesticos");
            break;
        default:
            printf("Invalido");
            break;
    }
    return 0;
}
