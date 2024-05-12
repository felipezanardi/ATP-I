/*
Faça um programa para ler uma string com uma data no formato
“DD/MM/AAAA”. Após a leitura, o programa deve verificar se a data fornecida
pelo usuário está no formato exigido.
Observação: não utilizar funções para manipulação de string.
*/

#include <stdio.h>
int main(){
    char data[11];
    int check=0;
    printf("Digite uma data (DD/MM/AAAA): ");
    gets(data);

    for(int i=0; i<11; i++){
        if(i != 2 && i != 5 && i != 10){
            if(data[i] < 0 && data[i] > 9){
                check = 1;
            }
        }else if(i == 2 || i == 5){
            if(data[i] != '/'){
                check = 1;
            }
        }else if(i == 10){
            if(data[i] != '\0'){
                check = 1;
            }
        }
    }
    if(check == 0){
        printf("A data esta no formato correto");
    }else{
        printf("A data nao esta no formato correto");
    }
    return 0;
}
