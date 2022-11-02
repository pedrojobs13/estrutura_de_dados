#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
// numero 11
int main()

{
    int num1, num2, num3;
    int *p_num;
    float dec1, dec2, dec3;
    float *p_dec;
    char l1, l2, l3;
    char *p_l;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &num3);

    printf("Digite um numero decimal: ");
    scanf("%f", &dec1);
    printf("Digite outro numero decimal: ");
    scanf("%f", &dec2);
    printf("Digite outro numero decimal: ");
    scanf("%f", &dec3);

    printf("Digite uma letra: ");
    scanf(" %c", &l1);
    printf("Digite outra letra: ");
    scanf(" %c", &l2);
    printf("Digite outra letra: ");
    scanf(" %c", &l3);

    printf("O endereco de memoria do numero 1 eh: %d, o valor de numero 1 eh: %d\n", &num1, num1);
    p_num = &num1;
    *p_num = 2014;
    printf("O endereco de memoria do numero 1 eh: %d, o valor de numero 1 eh: %d\n ", p_num, num1);

    printf("O endereco de memoria do numero 2 eh: %d, o valor de numero 1 eh: %d\n", &num2, num2);
    p_num = &num2;
    *p_num = 2014;
    printf("O endereco de memoria do numero 2 eh: %d, o valor de numero 2 eh: %d\n ", p_num, num2);

    printf("O endereco de memoria do numero 3 eh: %d, o valor de numero 1 eh: %d\n", &num3, num3);
    p_num = &num3;
    *p_num = 2014;
    printf("O endereco de memoria do numero 3 eh: %d, o valor de numero 3 eh: %d\n ", p_num, num3);

    printf("\n--------------- O valores para o decimais----------------------\n");
    printf("O endereco de memoria do decimal 1 eh: %d, o valor de decimal eh: %f\n", &dec1, dec1);
    p_dec = &dec1;
    *p_dec = 9.99;
    printf("O endereco de memoria do decimal 1 eh: %d, o valor de decimal eh: %.2f\n", p_dec, dec1);

    printf("O endereco de memoria do decimal 2 eh: %d, o valor de decimal eh: %.2f\n", &dec2, dec2);
    p_dec = &dec2;
    *p_dec = 9.99;
    printf("O endereco de memoria do decimal 2 eh: %d, o valor de decimal eh: %.2f\n", p_dec, dec2);

    printf("O endereco de memoria do decimal 3 eh: %d, o valor de decimal eh: %.2f\n", &dec3, dec3);
    p_dec = &dec2;
    *p_dec = 9.99;
    printf("O endereco de memoria do decimal 3 eh: %d, o valor de decimal eh: %.2f\n", p_dec, dec3);

    printf("\n--------------- O valores para as letras----------------------\n");


    printf("O endereco de memoria da letra 1 eh: %d, o valor da letra eh: %c\n", &l1, l1);
    p_l = &l1;
    *p_l = 'Y';
    printf("O endereco de memoria da letra 1 eh: %d, o valor da letra eh: %c\n", p_l, l1);

    printf("O endereco de memoria da letra 2 eh: %d, o valor da letra eh: %c\n", &l2, l2);
    p_l = &l2;
    *p_l = 'Y';
    printf("O endereco de memoria da letra 2 eh: %d, o valor da letra eh: %c\n", p_l, l2);

    printf("O endereco de memoria da letra 3 eh: %d, o valor da letra eh: %c\n", &l3, l3);
    p_l = &l3;
    *p_l = 'Y';
    printf("O endereco de memoria da letra 3 eh: %d, o valor da letra eh: %c\n", p_l, l3);

    free(p_num);
    free(p_dec);
    free(p_l);

    return 0;
}