/*
Faça uma função denominada centralizar que recebe uma string e insere
espaços no início da string de modo que a exibição da string seja centralizado.
Para tanto, além da string, também deve ser passado como parâmetro a quantidade
de caracteres que devem ser considerados para a centralização.
*/

#include <stdio.h>
#include <string.h>
void centralizar(int a, char b[15]){
    for(int i=0; i<a; i++){
        printf(" ");
    }
    printf("%s\n", b);
}

int main(){
    char s1[15], s2[15], s3[15];
    printf("Digite 3 palavras: ");
    scanf("%s%s%s",&s1,&s2,&s3);

    printf("Palavras Centralizadas:\n");
    centralizar(15 - strlen(s1)/2, s1);
    centralizar(15 - strlen(s2)/2, s2);
    centralizar(15 - strlen(s3)/2, s3);
    return 0;
}
