#include <stdio.h>
#include <stdlib.h>
#define TAM 5
// numero 8
struct pessoas
{
    char nome[100], email[100];
    int telefone;
} pessoa[TAM];

void Exibe(struct pessoas pessoa[TAM]);
int main()
{

    for (int i = 0; i < TAM; i++)
    {
        scanf("%s", &pessoa[i].nome);
        scanf("%s", &pessoa[i].email);
        scanf("%d", &pessoa[i].telefone);
    }
    Exibe(pessoa);
    return 0;
}

void Exibe(struct pessoas pessoa[TAM])
{
    for (int i = 0; i < TAM; i++)
    {
        printf("=============== Dados das Pessoas %d ===============\n", (i + 1));
        printf("Nome: %s\n", pessoa[i].nome);
        printf("E-mail: %s\n", pessoa[i].email);
        printf("Telefone: %d\n", pessoa[i].telefone);
    }
}