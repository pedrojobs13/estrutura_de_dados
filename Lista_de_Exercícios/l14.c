#include <stdio.h>
#include <stdlib.h>
// numero 14
typedef struct
{
    char name[30];
    int idade;
    char cidade[100];

} alunos;

int main()
{
    int n;

    printf("Quantidades de alunos:");
    scanf("%d", &n);
    alunos *aluno;

    aluno = (alunos *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("informe o nome do aluno [%d]:", i+1);
        scanf("%s", &aluno[i].name);
        printf("informe a idade do aluno [%d]:", i+1);
        
        scanf("%d", &aluno[i].idade);
        printf("informe a cidade do aluno [%d]:", i+1);
        
        scanf("%s", &aluno[i].cidade);
    }
    for (int i = 0; i < n; i++)
    {
        printf("o valor eh [%s]\n", aluno[i].name);

        printf("o valor eh [%d]\n", aluno[i].idade);

        printf("o valor eh [%s]\n", aluno[i].cidade);
    }
free(aluno);
    return 0;
}