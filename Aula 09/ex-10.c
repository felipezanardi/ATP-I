/*Faça um programa que receba a idade, a altura e o peso de N
pessoas. O valor de N será fornecido pelo usuário e indica a quantidade de
pessoas. Após a leitura, indique:
- Quantas pessoas possuem idade superior a 50 anos;
- A média de altura das pessoas com idade entre 10 e 20 anos;
- Percentual de pessoas com peso inferior a 50 quilos.*/

#include <stdio.h>
int main(){
    int pessoas, idade, i=0, quantv=0, quantj=0, quantp=0;
    float peso, altura, somaa=0;
    printf("Quantidade de pessoas: ");
    scanf("%d",&pessoas);
    while(i < pessoas){
        printf("Idade da %da pessoa: ", i+1);
        scanf("%d",&idade);
        printf("Altura da %da pessoa (em cm): ", i+1);
        scanf("%f",&altura);
        printf("Peso da %da pessoa: ", i+1);
        scanf("%f",&peso);
        if(idade > 50){
            quantv++;
        }else if(idade >= 10 && idade <= 20){
            quantj++;
            somaa = somaa + altura;
        }
        if(peso < 50){
            quantp++;
        }
        i++;
    }
    printf("Pessoas acima de 50 anos: %d\n"
           "Media de altura das pessoas com idade entre 10 e 20 anos: %.2fcm\n"
           "Percentual de pessoas com peso inferior a 50 quilos: %.0f%%", quantv, somaa/quantj, ((float)quantp/pessoas)*100);
    return 0;
}
