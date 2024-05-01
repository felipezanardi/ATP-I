/*Faça um programa para ler o número do mês e escrever o nome do mês por extenso. Por
exemplo:
Digite o número do mês: 6
Mês por extenso: junho*/

#include <stdio.h>
int main(){
    int num;
    printf("Digite o numero do mes (1-12): ");
    scanf("%d",&num);

    if(num == 1){
        printf("Mes por extenso: Janeiro");
    }else if(num == 2){
        printf("Mes por extenso: Fevereiro");
    }else if(num == 3){
        printf("Mes por extenso: Marco");
    }else if(num == 4){
        printf("Mes por extenso: Abril");
    }else if(num == 5){
        printf("Mes por extenso: Maio");
    }else if(num == 6){
        printf("Mes por extenso: Junho");
    }else if(num == 7){
        printf("Mes por extenso: Julho");
    }else if(num == 8){
        printf("Mes por extenso: Agosto");
    }else if(num == 9){
        printf("Mes por extenso: Setembro");
    }else if(num == 10){
        printf("Mes por extenso: Outubro");
    }else if(num == 11){
        printf("Mes por extenso: Novembro");
    }else if(num == 12){
        printf("Mes por extenso: Dezembro");
    }else{
        printf("Numero Invalido");
    }

    return 0;
}
