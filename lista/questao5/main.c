
#include <stdio.h>
#include <stdlib.h>
/*
 * Questão 5. Escrever um algoritmo para ler uma matriz 5x5. O algoritmo deve mostrar a matriz após realizar as seguintes
operações: a) trocar a linha de índice 2 com a linha de índice 4; b) trocar a coluna de índice 1 com a coluna de índice 3.
 */
#define K 5

void tLin(int m[K][K],int x,int y)
{
    int aux;
    int i;
    for (i = 0; i < K; i++)
    {
        aux=m[x][i];
        m[x][i]=m[y][i];
        m[y][i]=aux;
    }
}
void tCol(int m[K][K],int x,int y)
{
    int aux;
    int i;
    for (i = 0; i < K; i++)
    {
        aux=m[i][x];
        m[i][x]=m[i][y];
        m[i][y]=aux;
    }
}
int main()
{
    int aux=0;
    int i,j;
    int mat[K][K];
    for (i = 0; i < K; i++)
    {
        for (j = 0; j < K; j++)
        {
            mat[i][j]=aux++;
        }
    }
    //tLin(mat,1,3);
    //tCol(mat,0,2);
    for (i = 0; i < K; i++)
    {
        for (j = 0; j < K; j++)
        {
            printf("%d\t",mat[i][j]);
        }
         printf("\n");
    }
    return 0;
}
