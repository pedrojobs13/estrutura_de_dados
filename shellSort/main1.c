#include <stdio.h>
#define TAM 10
int main()
{

    int vet[TAM] = {2, 4, 8, 9, 7, 47, 1, 0, 6, 22};
    int h = 1;
    int copia, indice;
    
    while (h < TAM){
        h = 3 * h + 1;
    }

    while (h > 1){
        
        h = h / 3;

        for(int i = h; i < TAM; i++){
              copia = vet[i];
              indice = i - h;
              while (indice >=0 && copia < vet[indice]){
                vet[indice + h] = vet[indice];
                indice -= h;
              }
              vet[indice + h] = copia;
        }
    }
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", vet[i]);
    }
    
    return 0;
}