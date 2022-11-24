#include <stdio.h>
#include <stdlib.h>

#define MAX 5

struct No
{
    int value;
    char name[30];
} no;

typedef struct lista Lista; // mudando o nome da lista de struct lista para Lista

Lista *criar_lista();

void libera_lista(Lista *li);