#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[50];
    int contador[26] = {0};

    printf("Digite uma palavra: ");
    gets(palavra);

    for (int i=0; i<strlen(palavra); i++) // deixar todas letras minusculas
    {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z')
        {
            palavra[i] += 32;
        }
    }

    for (int i=0; i<26; i++) // fazer contagem
    {
        for (int j=0; j<strlen(palavra); j++)
        {
            if (palavra[j] == 'a' + i)
            {
                contador[i]++;
            }
        }
    }

    for (int i=0; i<26; i++) // imprimir
    {
        if (contador[i] > 0)
        {
            printf("%c: %d\n", 'a' + i, contador[i]);
        }
    }

    return 0;
}
