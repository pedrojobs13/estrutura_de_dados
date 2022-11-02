#include <stdio.h>
#include <stdlib.h>
#define TAM 24
// numero 12
int main()
{
    float *k, *f;
    k = (float *)malloc(TAM * sizeof(float));
    f = (float *)malloc(TAM * sizeof(float));

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite a temperatura: \n");
        scanf("%f", &k[i]);
    }
    for (int i = 0; i < TAM; i++)
    {
        f[i] = ((1.8 * (k[i] - 273)) + 32);
    }
    for (int i = 0; i < TAM; i++)
    {
        printf("A temperatura: %.2f em Kelvin em Fahreheit eh: %.3f\n", k[i], f[i]);
    }
    free(k);
    free(f);
}