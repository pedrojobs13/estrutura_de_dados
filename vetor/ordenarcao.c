#include <stdio.h>
#include <stdlib.h>
int main()
{
    // aux = 5
    // 1 5
    // buble sort
    int vet[10], aux, execucao, cont;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }

    do
    {
        execucao = 0;
        for (int i = 0; i < 9; i++)
        {
            if (vet[i] > vet[i + 1])
            {
                aux = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = aux;
                execucao = 1;
            }
        }
        cont++;
    } while (execucao == 1);

    printf("\n (Vetor Ordenardo) -> vezes repetidas: [%d] \n", cont);

    for (int i = 0; i < 10; i++)
    {
        printf("[%d] ", vet[i]);
    }

    return 0;
}

/*  
Ordenacao Não otimizada
for (int j = 1; j <= 10; j++)
    {
        for (int i = 0; i < 9; i++)
        {
            if (vet[i] > vet[i + 1])
            {
                aux = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = aux;
            }
        }
    }
*/
