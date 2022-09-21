#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*
array multi-dimensional (matrizes) int numeros[5][3]; [linhas][colunas]
[00][01][02]
[10][11][12]
[20][21][22]
[30][31][32]
[40][41][42]
*/
int main(){
    // vetores e strings
    char nome[3][50];
    int value[3];
    value[0] = 1;
    value[1] = 2;
    value[2] = 3;
    for (int i = 0; i < 3; i++){
        printf("Qual o seu nome\n");
        gets(nome[i]);
    }
    for (int i = 2; i >= 0; i--){
        printf("Olá %d\n", value[i]); //2 1  0 
    }

    return 0;
}