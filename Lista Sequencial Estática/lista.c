#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

struct lista
{
    int qtd;              // Quanto espaço eu ja ocupei na lista
    struct No dados[MAX]; // define a posição na estrutura
};

Lista *criar_lista()
{
    Lista *li;

    li = (Lista *)malloc(sizeof(struct lista));
    if (li != NULL)
    {
        li->qtd = 0;
    }
    return li;
}

void libera_lista(Lista *li)
{
    free(li);
}

