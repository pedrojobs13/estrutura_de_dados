#include <stdio.h>
#include <stdlib.h>

#define MAX 5

struct Aluno
{
    int matricula;
    char nome[30];
    float nota1;
    float nota2;
    float nota3;
};

typedef struct lista Lista; // mudando o nome da lista de struct lista para Lista

Lista *criar_lista();
void libera_lista(Lista *li);
int tamanho_lista(Lista *li);
int lista_cheia(Lista *li);
int lista_vazia(Lista *li);
int insere_lista_inicio(Lista *li, struct Aluno al);
int insere_lista_final(Lista *li, struct Aluno al);
int insere_lista_ordenada(Lista *li, struct Aluno al);
int remove_lista_final(Lista *li);
int remove_lista_inicio(Lista *li);
int consulta_lista_pos(Lista *li, int posicao, struct Aluno *al);