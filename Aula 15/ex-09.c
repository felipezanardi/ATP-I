/*
Faça um programa para ler um número e escreve-lo por extenso. Considere
somente números inteiros entre 0 e 9999. Dica: para facilitar, faça a leitura do
número como string.
*/

#include <stdio.h>
#include <string.h>
int main(){
    // ler numero
    char num[5], um[5]="000", dois[5]="00", tres[5]="0";
    int tam, check=0;
    printf("Digite um numero (0-9999): ");
    gets(num);
    // contar algaritmos + verificação
    tam = strlen(num);
    if(tam > 4 || tam < 1){
        printf("Numero invalido");
    }else{
        // concatetizacao com 0s
        if(tam == 1){
            strcat(um, num);
            strcpy(num, um);
        }else if(tam == 2){
            strcat(dois, num);
            strcpy(num, dois);
        }else if(tam == 3){
            strcat(tres, num);
            strcpy(num, tres);
        }
        // ler caracteres + printf
        printf("Por extenso: ");
        if(strcmp(num, "0000") == 0){
            printf("Zero");
        }else if(strcmp(num, "0100") == 0){
            printf("Cem");
        }else{
            for(int i=0; i<4; i++){
                if(i == 0){
                    switch(num[0]){
                        case '1':
                            printf("um mil");
                            break;
                        case '2':
                            printf("dois mil");
                            break;
                        case '3':
                            printf("tres mil");
                            break;
                        case '4':
                            printf("quatro mil");
                            break;
                        case '5':
                            printf("cinco mil");
                            break;
                        case '6':
                            printf("seis mil");
                            break;
                        case '7':
                            printf("sete mil");
                            break;
                        case '8':
                            printf("oito mil");
                            break;
                        case '9':
                            printf("nove mil");
                            break;
                    }
                }else if(i == 1){
                    if(num[1] != '0' && num[0] != '0' && num[2] == '0' && num[3] == '0'){
                        printf(" e ");
                    }else if(num[1] != '0' && num[0] != '0' && (num[2] != '0' || num[3] != '0')){
                        printf(", ");
                    }
                    if(num[0] != '0' && num[1] == '1' && num[2] == '0' && num[3] == '0'){
                        printf("cem");
                    }else{
                        switch(num[1]){
                            case '1':
                                printf("cento");
                                break;
                            case '2':
                                printf("duzentos");
                                break;
                            case '3':
                                printf("trezentos");
                                break;
                            case '4':
                                printf("quatrocentos");
                                break;
                            case '5':
                                printf("quinhentos");
                                break;
                            case '6':
                                printf("seiscentos");
                                break;
                            case '7':
                                printf("setecentos");
                                break;
                            case '8':
                                printf("oitocentos");
                                break;
                            case '9':
                                printf("novecentos");
                                break;
                        }
                    }
                }else if(i == 2){
                    if((num[0] != '0' || num[1] != '0') && num[2] != '0'){
                        printf(" e ");
                    }
                    if(num[2] == '1' && num[3] != '0'){
                        check = 1;
                        switch(num[3]){
                            case '1':
                                printf("onze");
                                break;
                            case '2':
                                printf("doze");
                                break;
                            case '3':
                                printf("treze");
                                break;
                            case '4':
                                printf("quatorze");
                                break;
                            case '5':
                                printf("quize");
                                break;
                            case '6':
                                printf("dezesseis");
                                break;
                            case '7':
                                printf("dezessete");
                                break;
                            case '8':
                                printf("dezoito");
                                break;
                            case '9':
                                printf("dezenove");
                                break;
                        }
                    }else{
                        switch(num[2]){
                            case '1':
                                printf("dez");
                                check = 1;
                                break;
                            case '2':
                                printf("vinte");
                                break;
                            case '3':
                                printf("trinta");
                                break;
                            case '4':
                                printf("quarenta");
                                break;
                            case '5':
                                printf("cinquenta");
                                break;
                            case '6':
                                printf("sessenta");
                                break;
                            case '7':
                                printf("setenta");
                                break;
                            case '8':
                                printf("oitenta");
                                break;
                            case '9':
                                printf("noventa");
                                break;
                        }
                    }
                }else if(i == 3 && check == 0){
                    if((num[0] != '0' || num[1] != '0' || num[2] != '0') && num[3] != '0'){
                        printf(" e ");
                    }
                    switch(num[3]){
                        case '1':
                            printf("um");
                            break;
                        case '2':
                            printf("dois");
                            break;
                        case '3':
                            printf("tres");
                            break;
                        case '4':
                            printf("quatro");
                            break;
                        case '5':
                            printf("cinco");
                            break;
                        case '6':
                            printf("seis");
                            break;
                        case '7':
                            printf("sete");
                            break;
                        case '8':
                            printf("oito");
                            break;
                        case '9':
                            printf("nove");
                            break;
                    }
                }
            }
        }
    }
    return 0;
}
