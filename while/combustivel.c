#include <stdio.h>

int main()
{

    int a = 0, g = 0, d = 0, f = 0, digito;

    do
    {
        scanf("%d", &f);
        if (f == 1)
        {
            a++;
        }
        else if (f == 2)
        {
            g++;
        }
        else if (f == 3)
        {
            d++;
        }

    } while (f != 4);
    printf("Thanks my friend\n");
    printf("Alcool: [%d]  Gasolina: [%d] Diesel: [%d]", a, g, d);

    return 0;
}