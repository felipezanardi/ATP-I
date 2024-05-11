/*
Leia N números inteiros e armazene-os em um vetor. O valor de N é fornecido
pelo usuário. Em seguida, imprima os elementos que são primos e suas respectivas
posições no vetor.
*/

#include <stdio.h>
int main(){
    int quant, check=0;
    printf("Quantidade de numeros: ");
    scanf("%d",&quant);
    int num[quant];
    for(int i=0; i<quant; i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d",&num[i]);
    }
    printf("Numero primos + posicoes no vetor:\n");
    for(int i=0; i<quant; i++){
        check = 0;
        for(int ii=2; ii<num[i]; ii++){
            if(num[i] % ii == 0){
                check = 1;
            }
        }
        if(check == 0 && num[i] > 1){
            printf("Vetor[%d] = %d\n", i, num[i]);
        }
    }
    return 0;
}
