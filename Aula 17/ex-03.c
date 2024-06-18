/*
Faça uma função denominada maior_menor para receber uma string e retornar
por parâmetro a menor e a maior letra, considerando a ordem alfabética.
*/

#include <stdio.h>
void maior_menor(char a[], char *maior, char *menor){
    for(int i=0; i<strlen(a); i++){
        if(a[i] >= 'a' && a[i] <= 'z'){
            a[i] -= 32;
        }
    }
    for(int i=0; i<strlen(a); i++){
        if((a[i] < *menor && a[i] >= 'A' && a[i] <= 'Z') || i == 0){
            *menor = a[i];
        }
        if((a[i] > *maior && a[i] >= 'A' && a[i] <= 'Z') || i == 0){
            *maior = a[i];
        }
    }
}

int main(){
    char str[100], maior, menor;
    printf("Digite algo: ");
    gets(str);

    maior_menor(str, &maior, &menor);
    printf("Menor: %c\nMaior: %c\n", menor, maior);
    return 0;
}
