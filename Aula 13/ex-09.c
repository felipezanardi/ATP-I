/*
Faça um programa para ler 10 números DIFERENTES a serem armazenados
em um vetor. Os números deverão ser armazenados no vetor na ordem que forem
lidos, sendo que caso o usuário digite um número que já foi digitado
anteriormente, o programa deverá pedir para o usuário digitar outro número. Note
que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se
ele existe entre os números que já foram fornecidos. Exibir na tela o vetor final
que foi digitado, o qual não terá repetição de valores.
*/

#include <stdio.h>
int main(){
    int num[10];
    for(int i=0; i<10; i++){
        printf("Digite o %do numero (numeros devem ser diferentes): ", i+1);
        scanf("%d",&num[i]);
        for(int ii=0; ii<i; ii++){
            if(num[i] == num[ii]){
                printf("Numero deve ser diferente dos anteriores, tente novamente\n");
                i--;
            }
        }
    }
    printf("\nNumeros digitados:");
    for(int i=0; i<10; i++){
        printf(" %d", num[i]);
    }
    return 0;
}
