#include <stdio.h>
int main()
{
    int value;

    scanf("%d", &value);

    while (value != 2002)
    {
        printf("Senha invalida\n");
        scanf("%d", &value);
    }
    printf("Senha válida");

    return 0;
}