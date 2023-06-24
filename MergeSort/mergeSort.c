#include <stdio.h>
#define TAM 10
void mergeSort(int *vet, int inicio, int fim);
int main()
{

    int vet[TAM] = {2, 4, 8, 9, 7, 47, 1, 0, 6, 22};
    mergeSort(vet, 0, TAM - 1);
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}

void mergeSort(int *vet, int inicio, int fim)
{
    int meio, aux[TAM], i, j, k;

    if (inicio < fim){
        meio = (inicio + fim) / 2;

        mergeSort(vet, inicio, meio);
        mergeSort(vet, meio + 1, fim);
        
        i = inicio;
        j = meio +1;
        k = inicio;
        
        while(i <= meio && j <= fim){
            if(vet[i] < vet[j]){
                aux[k] = vet[i];
                i++;
            }else{
                aux[k] = vet[j];
                j++;
            }
            k++;
        }
        while(i <= meio){
            aux[k] = vet[i];
            i++;
            k++;
        }
        while(j<= fim){
            aux[k] = vet[j];
            j++;
            k++;
        }
        for(i = inicio; i <= fim; i++){
            vet[i]  = aux[i] ;
        }
    }
}