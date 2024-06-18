#include <stdio.h>
#include <string.h>
int funcao(char a[], char b[]){
    int i, I, c, tb=strlen(b), vzs=0;
    for(i=0; i<=strlen(a); i++){
        if(c == tb){
            vzs++;
        }
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
    return vzs;
}

int main(){
    char str[50], substr[50];
    int c;
    printf("Digite uma palavra: ");
    gets(str);
    printf("Palavra de Busca: ");
    gets(substr);

    printf("A palavra de busca ocorre %d vez(es)\n", funcao(str, substr));
    return 0;
}
