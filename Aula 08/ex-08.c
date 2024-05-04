/*Faça um programa para ler uma letra minúscula e escrever se ela é vogal ou
consoante. Considere que o usuário digitará uma letra minúscula.*/

#include <stdio.h>
int main(){
    char letra;
    printf("Digite uma letra (minuscula): ");
    scanf("%c",&letra);

    switch(letra){
        case 'a':case 'e':case 'i':case 'o':case 'u':
            printf("Vogal");
            break;
        default:
            printf("Consoante");
            break;
    }
    return 0;
}
