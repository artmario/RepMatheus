#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Questão 10. Em uma eleição, existem três candidatos. Logo, para representar os diferentes candidatos, crie um registro
Candidato, contento os atributos: nome, partido, e seu numero (que o eleitor deve digitar). Por ocasião da votação, você
pode já predefinir os valores de cada variável candidato criada no programa principal. Além disso, considere que, os
votos são informados conforme a seguir: 0 - voto em branco; 1, 2, 3 - voto para os respectivos candidatos; x - encerra
votação; outro - voto nulo. Construa um algoritmo que imprima um menu para votação, e permita que o usuário possa
selecionar as opções 1, 2 e 3. Para tanto, o construa outros subalgoritmos que permita ao sistema calcular e mostrar: o
total de votos para cada candidato; o total de votos em branco, o total de votos nulos; o total de votos válidos; e o total
de votos.
*/
#define K 3
typedef struct candidato
{
    int votos;
    char nome [100];
    char partido[20];
    int id;
} candidato;

void candInit(candidato *x,int id, const char *nome,const char *partido);
void mostraCand(candidato *x);
void resumo(candidato *x,int numCand, int brancos, int nulos);
int main()
{
    int i;
    int aux;
    char voto[10];
    int brancos=0;
    int nulos=0;
    candidato ele[K];
    candInit(&ele[0],1,"joso","pt");
    candInit(&ele[1],2,"maria","pc");
    candInit(&ele[2],3,"carlos","pdt");

    do
    {   mostraCand(ele);
        printf("digite seu voto:\n");
        scanf("%s",voto);
        fflush(stdin);
        if(isalpha(voto[0])&&(voto[0]=='x'||voto[0]=='X'))
        {
            break;
        }
        else if(isdigit(voto[0]))
        {
            aux=atoi(voto);
            int valido=-1;
            for(i=0;i<K;i++)
            {
              if(ele[i].id==aux)
              {
                  valido=i;
                  break;
              }
            }
            if(valido>=0)
            {
                ele[valido].votos++;
            }
            else if(aux==0)
            {
                brancos++;
            }
            else
                nulos++;


        }
    }while(1);
    resumo(ele,K,brancos,nulos);
    return 0;
}
void candInit(candidato *x,int id, const char *nome,const char *partido)
{
    x->votos=0;
    x->id=id;
    strcpy(x->nome,nome);
    strcpy(x->partido,partido);

}
void resumo(candidato *x,int numCand, int brancos, int nulos)
{
    int total=0;
    int i=0;
    for(i=0;i<numCand;i++)
    {
        printf("candidato %s do partido %s recebeu %d voto(s)\n",x[i].nome,x[i].partido,x[i].votos);
        total+=x[i].votos;
    }
    total+=nulos+brancos;
    printf("brancos :%d\nnulos :%d\ntotal:%d\n",brancos,nulos,total);
}
void mostraCand(candidato *x)
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    int i;
    printf("...........\t\t\t\t\t|\n");
    printf("|candidato\t|partido\t|numero\t\t|\n");
    printf("...........\t\t\t\t\t|\n");
    for(i=0;i<K;i++)
    {
        printf("|%s\t\t|%s\t\t|%d\t\t|\n",x[i].nome,x[i].partido,x[i].id);
    }
    printf("...........\t\t\t\t\t|\n");
}
