
#include <stdio.h>
#include <stdlib.h>
/*
 * Quest�o 5. Escrever um algoritmo para ler uma matriz 5x5. O algoritmo deve mostrar a matriz ap�s realizar as seguintes
opera��es: a) trocar a linha de �ndice 2 com a linha de �ndice 4; b) trocar a coluna de �ndice 1 com a coluna de �ndice 3.
 */
#define K 5
void tLin(int m[K][K],int x,int y);
void tCol(int m[K][K],int x,int y);
void exibeMat(int mat[K][K]);
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
    tLin(mat,1,3);
    exibeMat(mat);
    tCol(mat,0,2);
    exibeMat(mat);
    return 0;
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
void exibeMat(int mat[K][K])
{
    int i,j;
    for (i = 0; i < K; i++)
        {
            for (j = 0; j < K; j++)
            {
                printf("%d\t",mat[i][j]);
            }
             printf("\n");
        }
}
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
