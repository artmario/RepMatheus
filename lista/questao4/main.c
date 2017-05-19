#include <stdio.h>
#include <stdlib.h>
/*
Questão 4. Faça um algoritmo que leia um vetor de caracteres de n posições que armazena o gabarito de uma prova de
matemática. A seguir leia uma matriz de caracteres mxn, onde m é a quantidade de alunos e cada linha da matriz
representa as respostas de um aluno. Para cada aluno, mostre o número de acertos.
*/
#define N 6 //numero de notas + 1
#define M 2 // numero de alunos
int main()
{
    int fim=N;
    int i,j;
   // char aux;
    char gab[N];
    char classe[M][N];
    int acerto[M];
    printf("Digite gabarito com %d letras:\n",N-1);
    fgets(gab,fim,stdin);//lendo gabarito
    gab[fim-1]='\0';
    for (i = 0; i < M; i++)
    {
        fflush(stdin);
        printf("\nDigite entrado do aluno %d:\n",i);
        fgets(classe[i],fim,stdin);//lê prova de um aluno
        classe[i][fim-1]='\0';
        acerto[i]=0;//inicializando as notas
    }
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N-1; j++)
        {
                if(classe[i][j]==gab[j])
                {
                    acerto[i]++;//incremento de resposta certa
                }
        }
    }
    for(i=0;i<M;i++)
    {
        printf("o aluno %dº tirou:%d\n",i,acerto[i]);//exibe acerto de um aluno
    }
    return 0;
}
