#include <stdio.h>
#include <stdlib.h>
#define TAM 4
// numero 9
float media(float *v);
int main()
{
    float x1[TAM];
    for (int i = 0; i < TAM; i++)
    {
        scanf("%f", &x1[i]);
    }

    media(x1);

    return 0;
}

float media(float *v)
{
    float soma = 0;
    for (int i = 0; i < TAM; i++)
    {
        soma += v[i];
    }

    return printf("A media: %.2f", soma / 4);
}