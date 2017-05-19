#include <stdio.h>
#include <stdlib.h>

/*
Quest�o 2. Fa�a um programa para identificar o maior n�mero armazenado em um vetor. Os elementos do vetor dever�o
ser lidos em um procedimento. Em uma fun��o, o maior elemento do vetor dever� ser localizado e retornado para o
programa principal para ser impresso.
 */
#define K 5
int maior(int *vet);
void lerVetor(int *x);
int main()
{
    int vet[K];
    lerVetor(vet);
    printf("maior elemento: \n %d",maior(vet));
    return 0;
}
void lerVetor(int *x)
{
    int i;
    for(i=0;i<K;i++)
    {
        scanf("%d",&x[i]);
    }
}
int maior(int *vet)
{
    int i;
    int index_max=0;
    int max=vet[0];
    for(i=0;i<K;i++)
    {
        if(max<vet[i])
        {
            max=vet[i];
            index_max=i;
        }
    }
    return vet[index_max];
}
