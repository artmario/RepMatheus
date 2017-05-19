#include <stdio.h>
#include <stdlib.h>
/*
Questão 7. Uma locadora está fazendo uma promoção onde, para cada 10 filmes retirados durante o último ano, o cliente
tem direito a uma locação grátis. Faça um algoritmo para ler em um vetor a quantidade de filmes retirados por seus
clientes durante o ano passado e, então, construir outro vetor contendo a quantidade de locações gratuitas a que cada
cliente tem direito.
*/
#define K 5
int main()
{
    int i;
    int cli_loc[K];
    int cli_free[K];
    for(i=0;i<K;i++)// laço para leitura de locacoes
    {
        scanf("%d",&(cli_loc[i]));
    }
    for(i=0;i<K;i++)//lapara calculo de locacoes gratuitas
    {
        cli_free[i]=cli_loc[i]/10;
    }
    for(i=0;i<K;i++)// laço para apresentar dados
    {
        printf("o cliente %d possui gratuitas %d locacao(oes) restantes\n",i,cli_free[i]);
    }
    return 0;
}
