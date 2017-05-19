#include <stdio.h>
#include <stdlib.h>
#define TAM 10
/*
Quest�o 9. Construa um algoritmo que apresente um menu com 3 op��es: inserir, remover e substituir. Construa um
vetor de inteiros com 20 posi��es declarado globalmente. O usu�rio poder� digitar a op��o que deseja utilizar,
informando o n�mero da op��o selecionada:
1: o subalgoritmo deve ser chamado para inserir o valor na pr�xima posi��o livre do vetor;
2: o subalgoritmo deve remover um elemento do vetor de acordo com a posi��o passada como par�metro
3: o subalgoritmo recebe por par�metro um valor e uma posi��o. O subalgoritmo deve substituir o valor existente
na posi��o informada pelo valor passado por par�metro. Se ainda n�o houver elemento na posi��o informada, deve se
inserir o valor na pr�xima posi��o livre.
*/
int vetGlobal[TAM];
int ultimo;
int insere(int valor);
int remover(int index);
int troca(int index,int valor);
void exibir();

int main()
{
    int op;
    int aux,aux2;
    ultimo=0;
    do{
    printf("digite a opcao\n1-inserir\n2-apagar\n3-substituir\n4-exibir\n0-sair\n");
    scanf("%d",&op);
    switch (op){
        case 1:
            printf("digite o valor a ser inserido:\n");
            scanf("%d",&aux);
            if(insere(aux))
            {
                printf("inserido com sucesso\n");
            }
            else
            {
                printf("erro ao inserir\n");
            }
            break;
        case 2:
             printf("digite o indice a ser removido:\n");
            scanf("%d",&aux);
            if(remover(aux))
            {
                printf("removido com sucesso\n");
            }
            else
            {
                printf("erro ao remover\n");
            }
            break;
        case 3:
             printf("digite indice a ser alterado:\n");
            scanf("%d",&aux);
             printf("digite o valor a ser inserido:\n");
            scanf("%d",&aux2);
             if(troca(aux,aux2))
            {
                printf("alterado com sucesso\n");
            }
            else
            {
                printf("erro ao alterar\n");
            }
            break;
        case 4:
            exibir();
            break;
        case 0:
            break;
    }
    }while(op!=0);
    return 0;
}
int insere(int valor)
{
    if(ultimo<TAM)
    {
        vetGlobal[ultimo++]=valor;
        return 1;
    }
    else
        return 0;

}
int remover(int index)
{
    int i;
    if(index<ultimo && index>=0)
    {
        for(i=index;i<ultimo;i++)
        {
            vetGlobal[i]= vetGlobal[i+1];
        }
        ultimo--;
        return 1;
    }
    else
        return 0;
}
int troca(int index,int valor)
{
    if(index<ultimo && index>=0)
    {
        vetGlobal[index]= valor;
        return 1;
    }
    else if(index>ultimo && index<TAM)
    {
        return insere(valor);
    }
    else
        return 0;
}
void exibir()
{
    int i;
    if(ultimo>0){

        for(i=0;i<ultimo;i++)
        {
            printf("%d ",vetGlobal[i]);
        }
    }
    else
        printf("vetor vazio");
    printf("\n");

}
