#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"
#include <string.h>

int main()
{
  Lista *li;

  li = criar_lista();
  int tam = tamanho_lista(li);
  int posicao;
  struct Aluno ali1;

  for (int i = 0; i < MAX; i++)
  {
    printf("Informe a matricula:\n");
    scanf("%d", &ali1.matricula);
    printf("Informe o nome:\n");
    scanf("%s", &ali1.nome);
    printf("Informe a nota 1:\n");
    scanf("%f", &ali1.nota1);
  }

  /*  int x = lista_cheia(li);
      if(lista_cheia(li));
  */

  /*int x = lista_vazia(li);
   if (lista_vazia(li))
   ;*/

  int x = insere_lista_inicio(li, ali1);
  printf("%d", x);
  //  int a = insere_lista_final(li, ali1);
  // int x = insere_lista_ordenada(li, ali1);
  //  int x = remove_lista_final(li);
  //  int x = remove_lista_inicio(li);
  libera_lista(li);
  // int x = consulta_lista_pos(li, posicao, &ali1);
  return 0;
}