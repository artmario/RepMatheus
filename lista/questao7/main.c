#include <stdio.h>
#include <stdlib.h>
/*
Quest�o 7. Uma locadora est� fazendo uma promo��o onde, para cada 10 filmes retirados durante o �ltimo ano, o cliente
tem direito a uma loca��o gr�tis. Fa�a um algoritmo para ler em um vetor a quantidade de filmes retirados por seus
clientes durante o ano passado e, ent�o, construir outro vetor contendo a quantidade de loca��es gratuitas a que cada
cliente tem direito.
*/
#define K 5
int main()
{
    int i;
    int cli_loc[K];
    int cli_free[K];
    for(i=0;i<K;i++)// la�o para leitura de locacoes
    {
        scanf("%d",&(cli_loc[i]));
    }
    for(i=0;i<K;i++)//lapara calculo de locacoes gratuitas
    {
        cli_free[i]=cli_loc[i]/10;
    }
    for(i=0;i<K;i++)// la�o para apresentar dados
    {
        printf("o cliente %d possui gratuitas %d locacao(oes) restantes\n",i,cli_free[i]);
    }
    return 0;
}
