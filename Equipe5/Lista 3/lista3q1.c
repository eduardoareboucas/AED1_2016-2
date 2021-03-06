/*
    Aline Lima
    Amanda Leticia
    Eduardo Azevedo
    Lucas Almeida
 
 1) Pesquise e implemente em C o BubbleSort
 */

#include <stdio.h>
#include <stdlib.h>
int vetor[1000000];

int bubble (int total)
{
    int i, j, aux;
    
    for(i=0;i<total;i++)
    {
        for(j=i+1;j<total;j++)
        {
        	//Substituição e memorização de elementos do vetor com variável auxiliar
            if(vetor[i]>vetor[j])
            {
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            }
        }
    }
    return 0;
}


int main(int argc, const char * argv[])
{
    int i;
    // Leitura de valores de Entrada
    for(i=0;i<10;i++)
    {
        scanf("%d", &vetor[i]);
    }
    //Imprimir para doc
    for(i=0;i<10;i++)
    {
        printf (" %d ", vetor[i]);
    }
    
    printf("\n\n");
    //Chamar funcao
    bubble(10);
    
    for(i=0;i<10;i++)
    {
        printf (" %d ", vetor[i]);
    }
    
    printf("\n\n");

}
