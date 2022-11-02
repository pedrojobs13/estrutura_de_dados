#include <stdio.h>
// numero 2
int main()
{
    int day, month, year;

    printf("Por favor digite o dia, mes e ano\n");

    scanf("%d %d %d", &day, &month, &year);
    printf("%d/%d/%d", day, month, year);
    return 0;
}