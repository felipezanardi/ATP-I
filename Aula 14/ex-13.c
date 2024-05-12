/*
Palíndromo é uma frase ou palavra que pode ser lida, indiferentemente, da
esquerda para a direita ou vice-versa. Faça um programa para ler uma string e
verificar se o conteúdo é palíndromo. Exemplos: osso, ovo, reter, radar e salas.
*/

#include <stdio.h>
int main(){
    char str[100];
    int cont=0, check=0;
    printf("Digite algo: ");
    gets(str);

    for(int i=0; str[i]!='\0'; i++){
        cont++;
    }

    for(int i=0; cont>=0; i++){
        if(str[i] != str[cont-1]){
            check = 1;
        }
        cont--;
    }
    if(check == 0){
        printf("A string e um palindromo");
    }else{
        printf("A string nao e um palindromo");
    }
    return 0;
}
