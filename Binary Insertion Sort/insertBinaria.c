
#include <stdio.h>
#include <stdlib.h>
#define N 10
void imprimir(int *vet);
int main()
{
    int vet[10] = {20, 40, 0, 1, 22, 66, 6, 8, 7, 14};
    int inicio, meio, fim, aux;

    for (int i = 1; i < N; i++)
    {
        inicio = 0;
        fim = i;
        aux = vet[i];
        while (inicio < fim)
        {
            meio = (inicio + fim) / 2;
            if (vet[meio] <= aux)
            {
                inicio = meio + 1;
            }
            else
            {
                fim = meio;
            }
        }
        for (int j = i; j > inicio; j--)
        {
            vet[j] = vet[j - 1];
        }
        vet[fim] = aux;
    }
    imprimir(vet);
    return 0;
}

void imprimir(int *vet)
{

    for (int i = 0; i < N; i++)
    {
        printf("%d ", vet[i]);
    }
}