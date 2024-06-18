#include <stdio.h>
#include <string.h>
void substr(char in[], char out[], int pi, int pf){
    int i, v=0;
    for(i=pi; i<=pf; i++){
        out[v] = in[i];
        v++;
    }
}

int main(){
    char in[50], out[50];
    int pi, pf, t;
    printf("Digite uma palavra: ");
    gets(in);
    t = strlen(in)-1;

    do{
        printf("\nDigite a posicao inicial (0-%d): ", t);
        scanf("%d",&pi);
        if(pi < 0 || pi > t){
            printf("Numero invalido, tente novamente\n");
        }
    }while(pi < 0 || pi > t);

    do{
        printf("\nDigite a posicao final (%d-%d): ", pi, t);
        scanf("%d",&pf);
        if(pf < pi || pf > t){
            printf("Numero invalido, tente novamente\n");
        }
    }while(pf < pi || pf > t);

    substr(in, out, pi, pf);
    printf("\nSubstring: %s\n", out);
    return 0;
}
