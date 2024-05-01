/*Faça um programa que leia duas notas de um aluno, verifique se as notas são válidas e exiba
na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e
10.0. Caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o
programa termina.*/

#include <stdio.h>
int main(){
    float n1, n2;
    printf("Informe a primeira nota: ");
    scanf("%f",&n1);
    printf("Informe a segunda nota: ");
    scanf("%f",&n2);

    if((n1 > 10 || n1 < 0) || (n2 > 10 || n2 < 0)){
        printf("Dados invalidos.");
    }else{
        printf("Media: %.2f", (n1 + n2) / 2);
    }

    return 0;
}
