/*Faça um programa ler a data de hoje e a data de nascimento de uma pessoa. Em
seguida, o programa deverá apresentar a idade dessa pessoa.*/

#include <stdio.h>

int main(){
    int dh, mh, ah, dn, mn, an;
    printf("Dia, mes e ano atual (Exemplo: 01 01 2001): ");
    scanf("%d%d%d",&dh,&mh,&ah);
    printf("Dia, mes e ano de nascimento (Exemplo: 01 01 2001): ");
    scanf("%d%d%d",&dn,&mn,&an);

    if(mn < mh){
        printf("Idade: %d", ah - an);
    }else if(mn > mh){
        printf("Idade: %d", ah - an - 1);
    }else if(dh >= dn){
        printf("Idade: %d", ah - an);
    }else{
        printf("Idade: %d", ah - an - 1);
    }

    return 0;
}
