#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Quest�o 10. Em uma elei��o, existem tr�s candidatos. Logo, para representar os diferentes candidatos, crie um registro
Candidato, contento os atributos: nome, partido, e seu numero (que o eleitor deve digitar). Por ocasi�o da vota��o, voc�
pode j� predefinir os valores de cada vari�vel candidato criada no programa principal. Al�m disso, considere que, os
votos s�o informados conforme a seguir: 0 - voto em branco; 1, 2, 3 - voto para os respectivos candidatos; x - encerra
vota��o; outro - voto nulo. Construa um algoritmo que imprima um menu para vota��o, e permita que o usu�rio possa
selecionar as op��es 1, 2 e 3. Para tanto, o construa outros subalgoritmos que permita ao sistema calcular e mostrar: o
total de votos para cada candidato; o total de votos em branco, o total de votos nulos; o total de votos v�lidos; e o total
de votos.
*/
typedef struct candidato
{
    int votos;
    char nome [100];
    char partido[20];
    int id;
} candidato;

void candInit(candidato *x,int id, const char *nome,const char *partido);
void resumo(candidato *x,int numCand, int brancos, int nulos);
int main()
{
    int i;
    int aux;
    char voto[5];
    int brancos=0;
    int nulos=0;
    candidato ele[3];
    candInit(&ele[0],1,"joso","pt");
    candInit(&ele[1],2,"maria","pc");
    candInit(&ele[2],3,"carlos","pdt");
    do
    {
        printf("digite seu voto:\n");
        fgets (voto, 2, stdin);
        if(isalpha((int)voto[0])&&(voto[0]=='x'||voto[0]=='X'))
        {
            break;
        }
        else if(isdigit(voto[0]))
        {
            aux=atoi(voto);
            int valido=-1;
            for(i=0;i<3;i++)
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
    resumo(&ele,3,brancos,nulos);
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
