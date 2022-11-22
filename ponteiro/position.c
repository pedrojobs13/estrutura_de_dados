#include <stdio.h>
#include <stdlib.h>
int main()
{

    int a = 20;                         // variavel
    printf("Valor de a: %d \n", a);     // valor de uma variavel
    printf("Endereco de a: %d \n", &a); // endereço de uma variavel

    int b = 10;    // variavel
    int *ponteiro; //  ponteiro armazena posições da memoria

    ponteiro = &b;                  // ponteiro recebendo a posição na memoria da variavel b
    printf("Valor de b: %d \n", b); // valor de uma variavel

    *ponteiro = 40; // * pode ser lido como 'conteúdo apontado por'

    printf("Valor de b: %d \n", b); // o valor de uma variavel
    printf("%d", *ponteiro);
    return 0;
}