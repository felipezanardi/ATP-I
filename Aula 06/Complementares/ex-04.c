/*Faça um programa para ler um dígito de 1 a 5. Em seguida, o programa deve apresentar o
nome do dígito por extenso. Exemplo:
Informe um dígito de 1 a 5: 4
Nome por extenso: quatro*/

#include <stdio.h>
int main(){
    int num;
    printf("Informe um digito de 1 a 5: ");
    scanf("%d",&num);

    if(num == 1){
        printf("Nome por extenso: Um");
    }else if(num == 2){
        printf("Nome por extenso: Dois");
    }else if(num == 3){
        printf("Nome por extenso: Tres");
    }else if(num == 4){
        printf("Nome por extenso: Quatro");
    }else if(num == 5){
        printf("Nome por extenso: Cinco");
    }else{
        printf("Numero invalido");
    }

    return 0;
}
