#include <stdio.h>
#include <stdlib.h>
/*
Questão 3. Os elevadores comercializados pela empresa Atlantis possuem uma capacidade máximo de 15 pessoas ou
800 kg. Logo, suponhamos que as pessoas vão entrando no elevador, o algoritmo deve ler o peso de cada pessoa, e caso
sua entrada não ultrapasse nenhum dos limites (total de pessoas permitido ou peso total permitido), o elevador deverá
mostrar a mensagem “Entrada Permitida”. Caso um dos limites seja ultrapassado, o elevador deve informar “Entrada
Proibida”. Por fim, para o elevador subir / descer deve-se criar um código para encerrar o programa, onde deverá ser
mostrado o total de pessoas transportadas e o peso total carregado pelo elevador.
*/
int main()
{
    int i=0;
    int pessoas=0;
    int peso=0;
    int aux;
    do
    {
        printf("digite o peso da %dº° pessoa:(digite peso negativo para sair)",i++);
        scanf("%d",&aux);
        if(aux>0)
        {
            if(pessoas<15 && peso+aux<=800)
            {
                pessoas++;
                peso+=aux;
                printf("\nEntrada Permitida\n");
            }
            else
            {
                printf("\Entrada Proibida\n");
                break;
            }
        }

    }while(aux>0 && pessoas<15);
    printf("carga do elevador:\n%d pessoa(s) e %d Kg.\n",pessoas,peso);
    return 0;
}
