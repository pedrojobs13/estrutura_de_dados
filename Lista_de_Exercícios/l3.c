#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// numero 3
int main()
{
    float value;
    char state, state1;
    int soma = 0;

    printf("Digite o estado do produto\n");
    scanf("%c%c", &state, &state1);

    printf("Digite o valor do produto\n");
    scanf("%f", &value);

    soma = state + state1;
    switch (soma)
    {
    case 148:
        printf("O valor do produto mais impostos eh: %.2f", value * 1.07);
        break;
    case 163:
        printf("O valor do produto mais impostos eh: %.2f", value * 1.12);
        break;
    case 156:
        printf("O valor do produto mais impostos eh: %.2f", value * 1.15);
        break;
    case 160:
        printf("O valor do produto mais impostos eh: %.2f", value * 1.08);
        break;
    default:
        printf("ERRO");
        break;
    }

    /*
    
    if(strcmp(state, "MG") ==0){
           printf("O valor do produto mais impostos eh: %.2f", value * 1.07);
    }

    */
    return 0;
}