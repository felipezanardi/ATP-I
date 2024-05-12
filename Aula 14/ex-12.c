/*
A concatenação de strings é uma operação muito comum e que une o conteúdo
de duas strings. Por exemplo: a string “bom” concatenada com a string “dia”
resulta na string “bomdia”. Faça um programa que leia duas strings e efetue a
concatenação da segunda string na primeira. Por exemplo: string1 tem o conteúdo
“bom” e a string2 tem o conteúdo “dia”; após a concatenação a string1 terá o
conteúdo “bomdia”.
*/

#include <stdio.h>
int main(){
    char str1[100], str2[100];
    int cont=0;
    printf("Digite algo: ");
    gets(str1);
    printf("Digite algo denovo: ");
    gets(str2);

    for(int i=0; str1[i]!='\0'; i++){
        cont++;
    }

    for(int i=cont; i<100; i++){
        str1[i] = str2[i-cont];
    }
    printf("Concatenacao: %s", str1);
    return 0;
}
