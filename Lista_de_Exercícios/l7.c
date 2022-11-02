#include <stdio.h>
#include <stdlib.h>
#define TAM 5
// numero 7
int main()
{

    /*
     00 01 02 03
     10 11 12 13
     20 21 22 23
     30 31 32 33
     */
    int m[2][2];

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf("Digite a linha %d e coluna %d: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (m[i][j] % 2 != 0)
            {

                printf("%d o elemento se encontra na linha[%d] e coluna[%d]\n", m[i][j], i, j);
            }
        }
    }

    return 0;
}