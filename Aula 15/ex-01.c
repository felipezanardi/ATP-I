/*
Faça um programa que leia nome, idade, endereço e telefone de uma pessoa e,
seguida, imprima essas informações em uma única linha. Utilizar o getchar ao
invés do fflush.
*/

#include <stdio.h>
int main(){
    int idade, tel;
    char nome[50], endereco[100];
    printf("Nome: ");
    gets(nome);
    printf("Idade: ");
    scanf("%d",&idade);
    getchar();
    printf("Endereco: ");
    gets(endereco);
    printf("Telefone: ");
    scanf("%d",&tel);

    printf("\nNome: %s | Idade: %d | Endereco: %s | Telefone: %d\n", nome, idade, endereco, tel);
    return 0;
}
