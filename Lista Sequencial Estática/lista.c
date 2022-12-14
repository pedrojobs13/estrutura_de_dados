#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

struct lista
{
    int qtd;                 // Quanto espaço eu ja ocupei na lista
    struct Aluno dados[MAX]; // define a posição na estrutura
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

int tamanho_lista(Lista *li)
{
    return li == NULL ? -1 : li->qtd;
}

int lista_cheia(Lista *li)
{
    if (li == NULL)
    {
        return -1;
    }
    return (li->qtd == MAX);
}
int lista_vazia(Lista *li)
{
    if (li == NULL)
    {
        return -1;
    }
    return (li->qtd == 0); // retorna true ou false
}

int insere_lista_final(Lista *li, struct Aluno aluno)
{
    if (li == NULL)
    {
        return 0;
    }
    if (lista_cheia(li))
    {
        return 0;
    }
    li->dados[li->qtd] = aluno; /* vai retornar no final indicado por li->qtd*/
    li->qtd++;
    return 1;
}

int insere_lista_inicio(Lista *li, struct Aluno al)
{
    if (li == NULL)
    {
        return 0;
    }
    if (lista_cheia(li))
    {
        return 0;
    }
    int i;
    for (i = li->qtd - 1; i >= 0; i--) // esse for é para passar os elementos para frente pq o li->dados que contém os valores vão passando para frente
    {
        li->dados[i + 1] = li->dados[i];
    }
    li->dados[0] = al;
    li->qtd++;
    return 1;
}

int insere_lista_ordenada(Lista *li, struct Aluno al)
{
    if (li == NULL)
    {
        return 0;
    }
    if (lista_cheia(li))
    {
        return 0;
    }
    int i, k;
    while (i < li->qtd && li->dados[i].matricula < al.matricula)
    {
        i++;
    }
    for (k = li->qtd; k >= i; k--)
    {
        li->dados[k + 1] = li->dados[k];
    }
    li->dados[i] = al;
    li->qtd;
    return 1;
}

int remove_lista_final(Lista *li)
{
    if (li == NULL)
    {
        return 0;
    }
    if (li->qtd == 0)
    {
        return 0;
    }
    li->qtd--;
    return 1;
}
int remove_lista_inicio(Lista *li)
{
    if (li == NULL)
    {
        return 0;
    }
    if (li->qtd == 0)
    {
        return 0;
    }
    for (int i = 0; i < li->qtd; i++)
    {
        li->dados[i] = li->dados[i + 1];
    }
    li->qtd--;
    return 1;
}
int remove_lista(Lista *li, int matricula)
{
    if (li == NULL)
    {
        return 0;
    }
    if (li->qtd == 0)
    {
        return 0;
    }
    int k, i = 0;
    while (i < li->qtd && li->dados[i].matricula != matricula)
    {
        i++;
    }
    if (i == li->qtd)
    {
        return 0;
    }
    for (k = i; k < li->qtd - 1; k++)
    {
        li->dados[k] = li->dados[k + 1];
    }
    li->qtd--;
    return 1;
}

int consulta_lista_pos(Lista *li, int pos, struct Aluno *al)
{
    if (li == NULL || pos <= 0 || pos > li->qtd)
    {
        return 0;
    }
    *al = li->dados[pos - 1];

    return -1;
}

int consulta_lista_mat(Lista *li, int matricula, struct Aluno *al)
{
    if (li == NULL)
    {
        return 0;
    }
    if (li->qtd == 0)
    {
        return 0;
    }
    int k, i = 0;

    while (i < li->qtd && li->dados[i].matricula != matricula)
    {
        i++;
    }
    if (li == li->qtd)
    {
        return 0;
    }
    *al = li->dados[i];
    return 1;
}