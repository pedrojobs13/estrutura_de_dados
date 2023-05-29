#include <stdio.h>
#define TAM 10

void imprimir(int *vet);
int main()
{

    int vet[10] = {2, 4, 8, 9, 7, 47, 1, 0, 6, 22};
    int aux;
    int indiceMenor;

    for (int i = 0; i < TAM - 1; i++){
        indiceMenor = i;
        for (int j = i ; j < TAM; j++){
            if (vet[j] < vet[indiceMenor]){
                indiceMenor = j;
            }
        }
        
            aux = vet[indiceMenor];
            vet[indiceMenor] = vet[i];
            vet[i] = aux;
    }
    imprimir(vet);
    return 0;
}

void imprimir(int *vet){
    for (int i = 0; i < TAM; i++){
        printf("%d ", vet[i]);
    }
}