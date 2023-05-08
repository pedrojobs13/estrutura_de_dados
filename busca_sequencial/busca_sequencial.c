#include <stdio.h>
#include <string.h>
#include <locale.h>
struct Aluno
{
    int id;
    float nota;
};

int busca(struct Aluno *aluno, int n, int ele);
int main()
{
    int n, ele;
    printf("Quantas pessoas serao cadastrada: \n");
    scanf("%d", &n);
    struct Aluno aluno[n];

    for (int i = 0; i < n; i++)
    {
        printf("id\n");
        scanf("%d", &aluno[i].id);
        printf("nota\n");
        scanf("%f", &aluno[i].nota);
    }

    printf("Diga o id que deseja buscar\n");
    scanf("%d", &ele);

    printf("[%d]", busca(aluno, n, ele));

    return 0;
}

int busca(struct Aluno *aluno, int n, int ele)
{
    int i = 0;
    // o while serve pra verificar se o i é menor que o n,
    //pois o elemento que não vai ser encontrado será salvo no último elemento e o aluno[i].id !=  ele, 
    //pois assim ele verifica se o elemento é diferente, caso seja igual ele para o looping se for diferente ele continua e só para quando o i é menor q n, 
    //fazendo assim o elemento ser salvo no n + 1; 
    while (i < n && aluno[i].id != ele)
    {
        i++;
    }
    if (i < n)
    {
        return aluno[i].nota;
    }
    else
    {
        return -1;
    }
}
// sem sentinela
//   if (aluno[i].id == ele)
//     {
//         return printf("a posicao: [%d], e a  nota: [%f]", i, aluno[i].nota);
//     }
