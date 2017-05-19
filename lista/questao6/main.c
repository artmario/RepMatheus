#include <stdio.h>
#include <stdlib.h>
/*
Questão 6. Faça um algoritmo que leia uma matriz quadrada de números reais. Construa dois vetores A e B, onde cada
elemento de A é a soma dos elementos de uma linha da matriz e cada elemento de B é a soma dos elementos de uma
coluna da matriz.

*/
#define K 5
int main()
{
    int aux=0;
    int i,j;
    float m[K][K];
    float a[K],b[K];
    printf("digite os elementos da matriz:\n");
    for (i = 0; i < K; i++)
    {
        a[i]=b[i]=0;
        for (j = 0; j < K; j++)
        {
            printf("[%d][%d]:\n",i,j);
            scanf("%f",&m[i][j]);
        }
    }
    for (i = 0; i < K; i++)
    {
        for (j = 0; j < K; j++)
        {
            a[i]+=m[i][j];
            b[j]+=m[i][j];
        }
    }
    for (i = 0; i < K; i++)
    {
        printf("vetor a[%d]:%.2f\n",i,a[i]);
    }
    for (i = 0; i < K; i++)
    {
        printf("vetor b[%d]:%.2f\n",i,b[i]);
    }
    return 0;
}
