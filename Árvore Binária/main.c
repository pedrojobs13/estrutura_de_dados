#include <stdio.h>
#include <stdlib.h>
/*
            500
         400   600
    300  450   505  620
*/
typedef struct no{
    int conteudo;                  // valor dentro do nó
    struct no *esquerda, *direita; // um nó que irá para esquerda ou direita
} No;

typedef struct{
    No *raiz; // primeiro nó da árvore
} ArvB;

void inserirEsquerda(No *no, int valor){
    if (no->esquerda == NULL){
        No *novo = (No *)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        no->esquerda = novo;
    }
    else{
        if (valor < no->esquerda->conteudo){
            inserirEsquerda(no->esquerda, valor);
        }
        if(valor > no->esquerda->conteudo){
            inserirDireita(no->esquerda, valor);
        }
    }
}
void inserirDireita(No *no, int valor){
    if (no->direita == NULL){
        No *novo = (No *)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        no->direita = novo;
    }
    else{
        if (valor > no->direita->conteudo){
            inserirDireita(no->direita, valor);
        }
        if(valor < no->direita->conteudo){
            inserirEsquerda(no->direita, valor);
        }
    }
}
int tamanho(No *raiz){
    if(raiz != NULL){
        return 1 + tamanho(raiz->esquerda) + tamanho(raiz->direita);
    }
    // o número da esquerda é 1 por causa do nó raiz da árvore
}

int buscar(No *raiz, int chave){
    if(raiz == NULL){
        return -1;
    }
    else{
        if(raiz->conteudo == chave){
            return raiz->conteudo;
        }else{
            if(chave < raiz->conteudo){
                return buscar(raiz->esquerda, chave);
            }
            if(chave > raiz->conteudo){
                return buscar(raiz->direita, chave);
            }
        }
    }
}

void inserir(ArvB *arv, int valor){
    if (arv->raiz == NULL){
        No *novo = (No *)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        arv->raiz = novo;
    }
    else{
        if (valor < arv->raiz->conteudo){
            inserirEsquerda(arv->raiz, valor);
        }
        if(valor > arv->raiz->conteudo){
            inserirDireita(arv->raiz, valor);
        }
    }
}
No* remover(No *raiz, int chave){
    if(raiz == NULL){
        printf("valor não encontrado");
        return NULL;
    }
    else{
        if(raiz->conteudo == chave){
            if(raiz->esquerda == NULL && raiz->direita){
                free(raiz);
                return NULL;
            }
        }else{
            if(chave < raiz->conteudo){
                raiz->esquerda = remover(raiz->esquerda, chave);
            }else {
                raiz->direita = remover(raiz->direita, chave);
            }
            return raiz;
        }
    }
}


void imprimir(No *raiz){
    if (raiz != NULL){
        imprimir(raiz->esquerda);
        printf("%d ", raiz->conteudo);
        imprimir(raiz->direita);
    }
}

int main(){
    int op, valor;
    ArvB arv;

    arv.raiz = NULL;


    do{
        printf("\n0 - Sair\n1 - inserir\n2 - imprimir\n3 - Buscar\n4 - Remover Folha: \n");
        scanf("%d", &op);
        switch (op){
        case 0:
            printf("/Saindo...\n");
            break;
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir(&arv, valor);
            break;
        case 2:
            printf("\nImpressao da arvore binario:\n");
            imprimir(arv.raiz);
            printf("\n");
            printf("Tamanho: %d\n", tamanho(arv.raiz));
            break;
        case 3: 
            scanf("%d", &valor);
            printf("Resultado da busca: %d\n", buscar(arv.raiz, valor));
            break;
        case 4:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            arv.raiz = remover(arv.raiz, valor);
            break;
        default:
            printf("erro");
            break;
        }

    } while (op != 0);

    return 0;
}