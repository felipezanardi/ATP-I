/*A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
Sendo que da quantia total:
- O primeiro ganhador receberá 50%;
- O segundo receberá 30%;
- O terceiro receberá o restante.
Calcule e imprima a quantia ganha por cada um dos ganhadores.*/

#include <stdio.h>

int main(){
    float total = 780000;

    printf("Primeiro lugar: %.2f\n", total / 2);
    printf("Segundo lugar: %.2f\n", total * 0.3);
    printf("Terceiro lugar: %.2f\n", total * 0.2);

    return 0;
}
