// Aluno: Felipe Teixeira Zanardi

#include <stdio.h>
#include <string.h>
int funcao(char a[], char b[]){
    int i, I, c, tb=strlen(b);
    for(i=0; i<=strlen(a)-tb && c!=tb; i++){
        int temp=i;
        c = 0;
        for(I=0; I<tb; I++){
            if(b[I] == a[temp]){
                c++;
                temp++;
            }else{
                I = tb;
            }
        }
    }
    if(c == tb){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    char str[50], substr[50];
    int c;
    printf("Digite uma palavra: ");
    gets(str);
    printf("Palavra de Busca: ");
    gets(substr);

    if(funcao(str, substr) == 1){
        printf("Palavra de Busca esta na String\n");
    }else{
        printf("Palavra de Busca nao esta na String\n");
    }
    return 0;
}
