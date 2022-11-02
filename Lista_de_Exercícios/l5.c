#include <stdio.h>
#include <stdlib.h>
// numero 5
int mult(int n);
int main()

{
    int n;
    scanf("%d", &n);
    mult(n);

    return 0;
}

int mult(int n)
{
    int *v;
    v = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n + 1; i++)
    {
        v[i] = i; // preencher cada vetor com um numero
    }
    for (int i = 0; i < n + 1; i++)
    {
        if (v[i] % 3 == 0) // ver se o valor é multiplo de 3 12/3 tem que ter zero como resto
        {
            if (i < 15) // o maximo que ele vai percorrer é até o 13 que é o ultimo numero que eh multiplo de 12, sendo descosiderado os posteriores
            {
                printf("%d\n", v[i]);
            }
        }
    }

    free(v);
}