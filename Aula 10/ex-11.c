/*(Utilize o comando 'for') Apresentar a tabuada dos número de 0 a 10. Para tanto, utilize dois
comandos for aninhados (um comando for dentro de outro comando for)*/

#include <stdio.h>
int main(){
    for(int i=0; i<=10; i++){
        for(int i2=0; i2<=10; i2++){
            printf("%d * %d = %d\n", i, i2, i*i2);
        }
    printf("\n");
    }
    return 0;
}
