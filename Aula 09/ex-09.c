/*Faça um programa que receba a idade e a cor dos olhos das pessoas (A
– Azul, P – Preto, V – verde, C – castanho, O – outro). A quantidade de
pessoas deverá ser lida do usuário. Indique ao final a quantidade de
pessoas para cada cor de olhos.*/

#include <stdio.h>
int main(){
    int pessoas, idade, i=0, a=0, p=0, v=0, c=0, o=0;
    char olho;
    printf("Quantidade de pessoas: ");
    scanf("%d",&pessoas);
    while(i < pessoas){
        printf("Idade da %da pessoa: ", i+1);
        scanf("%d",&idade);
        fflush(stdin);
        printf("Cor dos olho da %da pessoa (a = azul, p = preto, v = verde, c = castanho, o = outro): ", i+1);
        scanf("%c",&olho);
        switch(olho){
            case 'a':
                a++;
                i++;
                break;
            case 'p':
                p++;
                i++;
                break;
            case 'v':
                v++;
                i++;
                break;
            case 'c':
                c++;
                i++;
                break;
            case 'o':
                o++;
                i++;
                break;
            default:
                printf("Letra invalida, digite novamente\n");
                break;
        }
    }
    printf("\nOlho azul: %d\nOlho preto: %d\nOlho verde: %d\nOlho castanho: %d\nOutro: %d\n", a, p, v, c, o);
    return 0;
}
