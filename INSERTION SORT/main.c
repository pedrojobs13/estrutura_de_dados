#include <stdio.h>
void imprimir(int *vet);
int main(){
    int vet[10] = {1, 2, 3, 4, 8, 3, 4, 2, 12, 0};
    int copia;
    int indice;
    for (int i = 1; i < 10; i++){
        copia = vet[i];
        indice = i;
        
        while (indice > 0 && vet[indice - 1] > copia){
            vet[indice] = vet[indice - 1];
            indice --;
        }
        vet[indice] = copia;
    }
    imprimir(vet);
    return 0;
}

void imprimir(int *vet)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vet[i]);
    }
}