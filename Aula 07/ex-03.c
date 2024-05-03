/*Faça um programa para ler a média e a frequência de um aluno. Em seguida,
verificar se ele está aprovado, em exame ou reprovado. Para tanto considere as
seguintes regras:

- O aluno é aprovado se estiver com média acima de cinco e frequência acima
de setenta;
- O aluno está em exame se estiver com média entre três e cinco e frequência
acima de setenta;
- O aluno é reprovado se estiver com média abaixo de três ou frequência
abaixo de setenta.

Para este exercício, considere que os valores são corretamente fornecidos pelo
usuário, isto é, a média está entre 0 e 10; e a frequência está em 0 e 100.*/

#include <stdio.h>

int main(){
    float freq, media;
    printf("Frequencia (0-100): ");
    scanf("%f",&freq);
    printf("Media (0-10): ");
    scanf("%f",&media);

    if(media < 0 || media > 10 || freq > 100 || freq < 0){
        printf("Dados invalidos");
    }else if(media >= 3 && media <= 5 && freq >= 70){
        printf("Exame");
    }else if(media < 3 || freq < 70){
        printf("Reprovado");
    }else if(media > 5 && freq >= 70){
        printf("Aprovado");
    }

    return 0;
}
