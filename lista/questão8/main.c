#include <stdio.h>
#include <stdlib.h>
/*
Quest�o 8. Fa�a um programa para ler um vetor de 10 posi��es de n�meros reais. A seguir, ler um c�digo num�rico
inteiro e, se o c�digo for 0, termine o programa. Se o c�digo for 1, mostre o vetor na ordem direta. Se o c�digo for 2,
mostre o vetor na ordem inversa.
*/
#define K 20
int main()
{
    int i;
    int x=0;
    int vet[K];
    for(i=0;i<K;i++)
    {
        //vet[i]=x++; //permite entrada sequencial para testes
        printf("digite o valor para vet[%d]:\n",i);
        scanf("%d",&(vet[i]));
    }
    do
    {   printf("\ndigite:\n1:- imprimir na ordem\n2:- imprimir na ordem reversa\n0:-sair\n");
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        else if( x==1)
        {
            for(i=0;i<K;i++)
            {
                printf("%d ",vet[i]);
            }

        }
        else if( x==2)
        {
            for(i=K-1;i>=0;i--)
            {
                printf("%d ",vet[i]);
            }
        }
    }while(x!=0);

    return 0;
}
