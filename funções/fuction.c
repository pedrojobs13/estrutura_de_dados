#include <stdio.h>

int soma(int num1, int num2)
{
    int res = num1 + num2;
    return res;
}
void mensagem()
{
    printf("Bem vindo\n");
}
int main()
{
    mensagem();
    // int retorno = soma(2, 5);
    // printf("Soma %d", retorno);
    printf("%d", soma(4, 6));
    return 0;
}