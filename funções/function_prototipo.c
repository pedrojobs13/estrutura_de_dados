#include <stdio.h>
int soma(int num1, int num2);
int main()
{
    int n1, n2, n3;
    scanf("%d", &n1);
    scanf("%d", &n2);

    n3 = soma(n1, n2);

    printf("%d", n3);
    return 0;
}

int soma(int num1, int num2)
{
    return num1 + num2;
}