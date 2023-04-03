#include <stdio.h>
#include <stdlib.h>

int buscaBinarioRecu(int *vet, int ele, int ini, int fim)
{
    int meio;
    if (ini <= fim)
    {
        meio = (ini + fim) / 2;
        if (ele == vet[meio])
        {
            return meio;
        }
        else
        {
            if (ele < vet[meio])
            {
                return buscaBinarioRecu(vet, ele, ini, meio - 1);
            }
            else
            {
                return buscaBinarioRecu(vet, ele, meio + 1, fim);
            }
        }
    }
    return -1;
}
int buscaBinario(int *vet, int ele, int fim)
{
    int ini = 0;
    int meio;

    meio = (ini + fim) / 2;
    while (ini <= fim){
        if (ele == vet[meio]){
            return meio;
        }
        else {
            if (ele < vet[meio]) {
                fim = meio - 1;
            }
            else {
                ini = meio + 1;
            }
        }
        meio = (ini + fim) / 2;
    }
    return -1;
}
int main()
{
    int vet[10] = {12, 14, 19, 43, 47, 52, 65, 82, 89, 91};
    int valor;

    printf("Digite o valor a ser buscado");
    scanf("%d", &valor);
   // printf("%d", buscaBinarioRecu(vet, valor, 0, 9));
    printf("%d", buscaBinario(vet, valor, 9) + 1);
    return 0;
}