#include <stdio.h>
// numero 4

int conta(int value, int value1, int value2, int value3);
int main()
{
    int n, n1, n2, n3;
    int resp;
    printf("Digite a operacao\n");
    scanf("%d", &n);

    printf("Digite os valore para x, y e z\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    resp = conta(n, n1, n2, n3);

    printf("O valor da operacao eh: %d", resp);
    return 0;
}

int conta(int value, int x, int y, int z)
{
    if (value == 1)
    {
        return x * y * z;
    }
    else if (value == 2)
    {
        return ((x + 2 * y + 3 * z) / 6);
    }
    else if (value == 3)
    {
        return (1 / ((1 / x) + (1 / y) + (1 / z)));
    }
    else if (value == 4)
    {
        return (x + y + z) / 3;
    }
}