#include <stdio.h>
#include <stdlib.h>
void particao(int *dados, int esq, int dir, int *i, int *j);
void quicksort(int *dados, int esq, int dir);
int main()
{
    int vetor[5] = {15, 20, 35, 10, 0}, i;

    quicksort(vetor, 0, 4);
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
void particao(int *dados, int esq, int dir, int *i, int *j)
{
    int pivo, aux;
    *i = esq;
    *j = dir;
    pivo = dados[(esq + dir) / 2];

    while (*i <= *j)
    {
        while (dados[*i] < pivo && *i < dir)
        {
            (*i)++;
        }
        while (dados[*j] > pivo && *j > esq)
        {
            (*j)--;
        }
        if (*i <= *j)
        {
            aux = dados[*i];
            dados[*i] = dados[*j];
            dados[*j] = aux;
            (*i)++;
            (*j)--;
        }
    }
}

void quicksort(int *dados, int esq, int dir)
{
    int i, j;
    particao(dados, esq, dir, &i, &j);
    if (i < dir)
    {
        quicksort(dados, i, dir);
    }
    if (j > esq)
    {
        quicksort(dados, esq, dir);
    }
}
