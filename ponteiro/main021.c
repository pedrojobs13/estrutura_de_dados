#include <stdio.h>
#include <locale.h>
void incrementa(int* valor)
{
    printf("\nAntes de incrementar\n");
    printf("O contador vale %d\n", (*valor));
    printf("O endereco de memoria %d\n", valor);

    printf("\nDepois de incrementar\n");
    printf("\nO contador vale %d\n\n", ++(*valor));
}

int main()
{
    int cont = 10;

    printf("Antes de Incrementar\n");
    printf("O contador vale %d\n", cont);

    incrementa(&cont);

    printf("Depois de Incrementar\n");
    printf("O contador vale %d\n", cont);
    printf("O endereco de memoria e: %d\n", &cont);
    return 0;
}