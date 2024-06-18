#include <stdio.h>
#include <string.h>
void codificar(int k, char a[]){
    for(int i=0; i<strlen(a); i++){
        a[i] -= k;
    }
}
void descodificar(int k, char a[]){
    for(int i=0; i<strlen(a); i++){
        a[i] += k;
    }
}
int main(){
    int k;
    char frase[100];

    printf("Digite uma frase: ");
    gets(frase);
    printf("Valor k: ");
    scanf("%d",&k);
    fflush(stdin);
    codificar(k, frase);
    printf("Palavra codificada: %s\n", frase);

    printf("Digite uma frase codificada: ");
    gets(frase);
    printf("Valor k: ");
    scanf("%d",&k);
    descodificar(k, frase);
    printf("Palavra descodificada: %s\n", frase);
    return 0;
}
