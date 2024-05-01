/*Fazer um programa para ler duas notas de um aluno e verificar se ele foi aprovado ou reprovado.
Para tanto, calcular média simples de duas notas e considerar aprovado se a média for maior ou igual
a cinco.*/

#include <stdio.h>
int main(){
    float nota1, nota2, media;
    printf("Primeira nota: ");
    scanf("%f",&nota1);
    printf("Segunda nota: ");
    scanf("%f",&nota2);

    media = (nota1 + nota2) / 2;

    if(media >= 5){
        printf("Aprovado\n");
    }else{
        printf("Reprovado\n");
        }
    return 0;
}
