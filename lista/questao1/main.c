#include <stdio.h>
#include <stdlib.h>
/*Questão 1. Faça um algoritmo que, dado dois vetores A e B previamente ordenados contendo o mesmo número de
elementos, intercala os vetores A e B compondo um terceiro vetor C ordenado e sem repetições.
Ex.: A = [3, 7, 8, 10, 12], B = [1, 4, 7, 10, 13], C = [1, 3, 4, 7, 8, 10, 12, 13]
 */
#define K 5
#define Y 10
int total;
int *concatena(int vet1[K], int vet2[K])//concatena 2 vetores e retornando o endereco do vetor resultante
{
    int i ;
    int a = 0;//contador primeiro vetor
    int b = 0;//contador primeiro vetor
    int k = 0;//contador de saida vetor
    int vet3[Y];
    int *ret=NULL;
    while (a < K && b < K)
    {
        if(k!=0)
        {
            if(vet1[a]==vet3[k-1])
            {
                a++;
                continue;
            }
            if(vet2[b]==vet3[k-1])
            {
                b++;
                continue;
            }
        }
        if (vet1[a] < vet2[b])
        {
            vet3[k++] = vet1[a++];
        }
        else if (vet1[a] > vet2[b])
        {
            vet3[k++] = vet2[b++];
        }
        else
        {
            vet3[k++] = vet2[b++];
            a++;
        }
    }
    while (a < K)
    {
        if (vet1[a] != vet3[k - 1])
            vet3[k++] = vet1[a++];
        else
            a++;
    }
    while (b < K)
    {
        if (vet2[a] != vet3[k - 1])
            vet3[k++] = vet2[b++];
        else
            b++;
    }
    total=k;
    ret=(int*)malloc(sizeof(int)*k);
    for(i=0;i<k;i++)
    {
        ret[i]=vet3[i];
    }
    return ret;
}

int main()
{
    int i;
    int vetor[K]={1,3,5,7,9};
    int vetor1[K]={3,4,6,8,10};
    int *vetor3;
    vetor3=concatena(vetor,vetor1);
    for(i=0;i<total;i++)
    {
        printf("%d\n",vetor3[i]);
    }
    return 0;
}
