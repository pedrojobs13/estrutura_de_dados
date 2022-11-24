#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

int main()
{
    Lista *li;

    li = criar_lista();
    libera_lista(li);
    return 0;
}