/*
Faça uma função denominada contagem para receber uma string e retornar por
parâmetros a quantidade de vogais, quantidade de consoantes e quantidade de
dígitos numéricos.
*/

#include <stdio.h>
#include <string.h>
void contagem(char str[], int *v, int *c, int *n){
    for(int i=0; i<strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            *v += 1;
        }else if((str[i] >= 'b' && str[i] <= 'z') || (str[i] >= 'B' && str[i] <= 'Z')){
            *c += 1;
        }else if(str[i] >= '0' && str[i] <= '9'){
            *n += 1;
        }
    }
}

int main(){
    char str[200];
    int v=0, c=0, n=0;
    printf("String: ");
    gets(str);

    contagem(str, &v, &c, &n);
    printf("Vogais: %d\n"
           "Consoantes: %d\n"
           "Numeros: %d\n", v, c, n);
    return 0;
}
