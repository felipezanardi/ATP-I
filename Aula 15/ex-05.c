/*
A concatenação de strings é uma operação muito comum e que une o conteúdo
de duas strings. Por exemplo: a string “bom” concatenada com a string “dia”
resulta na string “bomdia”. Faça um programa que leia duas strings e efetue a
concatenação da segunda string na primeira. Por exemplo: string1 tem o conteúdo
“bom” e a string2 tem o conteúdo “dia”; após a concatenação a string1 terá o
conteúdo “bomdia”.
*/

#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    printf("Digite algo: ");
    gets(str1);
    printf("Digite algo novamente: ");
    gets(str2);
    printf("Concatenacao: %s", strcat(str1, str2));
    return 0;
}
