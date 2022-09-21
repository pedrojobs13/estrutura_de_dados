#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// matriz

/*
int numb[5][5]; [linhas][colunas]
[00] [01] [02] [03] [04]
[10] [11] [12] [13] [14]
[20] [21] [22] [23] [24]
[30] [31] [22] [33] [34]
[40] [41] [42] [43] [44]
*/
int main()
{
    // vetores e strings
    char nome[3][50];
    for (int i = 0; i < 3; i++)
    {

        printf("Qual é seu nome?");
        gets(nome[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Olá %s\n", nome[i]);
    }
    return 0;
}