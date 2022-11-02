#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define TAM 2
// numero 10
float imc(float *v);
int main()
{
    float values[TAM];

    printf("Digite o peso e logo em seguida a altura: \n");
    for (int i = 0; i < TAM; i++)
    {
        scanf("%f", &values[i]);
    }
    imc(values);

    return 0;
}

float imc(float *v)
{
    float imc_respo = 0;

    imc_respo = v[0] / (pow(v[1], 2));

    return printf("Seu imc eh: %2.f", imc_respo);
}