#include <stdio.h>
#define TAM 20
// numero 6
int main()
{
    int v[TAM], aux = 0;

    for (int i = 0; i < TAM; i++)
    {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (v[i] < v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    for (int i = TAM - 1; i >= 0; i--)
    {
        printf("%d ", v[i]);
    }

    return 0;
}