#include <stdlib.h>
#include <stdio.h>
// numero 13
typedef struct
{

    float value;

} brinquedos;

int main()
{
    int n;

    printf("Digite a quantidade de produtos\n");
    scanf("%d", &n);

    brinquedos *ptr_Brinquedo;
    ptr_Brinquedo = (brinquedos *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Digite o valor do brinquedo [%d]: ", i);
        scanf("%f", &ptr_Brinquedo[i].value);
    }
    printf("\n");
    printf("Os numeros apresentados sao: [%d]", n);
    printf("\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("O valor original do brinquedo [%d] = [R$ %.2f] \n", i, ptr_Brinquedo[i].value);
    }

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("O novo Valor do produto [R$ %.2f]\n", ptr_Brinquedo[i].value * 1.05);
    }

    free(ptr_Brinquedo);
    return 0;
}