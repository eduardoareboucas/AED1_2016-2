/* 	Equipe 01:
	Diogo Abreu
	Elisandra Oliveira
	Fernando Calderaro
	Leticia Mota
	Luana Andrade
	Rodrigo Oliveira
	Thailana Neves

	Exercicio 06
	Implemente a Busca Binaria em C.
*/

#include<stdio.h>
#include<stdlib.h>
#define TAM 10000
 //fun��o que realiza a busca bin�ria
int busca(int menor,int maior,int valor, int *vet)
{
    int meio;
 	//verifica��o para haver mais de um elemento no vetor
    if(menor>maior)
    {
		return(-1);
    }
	//descobir qual o meio do vetor
    meio=(maior+menor)/2;
    //se o valor procurado for igual ao valor do vetor do meio achou o numero
    if(valor==vet[meio])
    {
		return(meio);
    }
 	//verifica se o valor for menor que o meio, se for ele procurado pelo lado esquerdo
    if(valor<vet[meio])
    {
    	busca(menor,meio-1,valor,vet);
    }
    //sen�o procura pelo lado direito    
    else
    {
    	busca(meio+1,maior,valor,vet);
    }
       
}
 

int main(int argc, char*argv[])
{
 
    int menor=0,maior=(TAM-1),valor,i,vet[TAM];
    //usando atoi para pegar um valor atrav�s do argv que ser� passado pelo terminal   
    valor=atoi(argv[1]);
   	//lendo o vetor
    for(i=0;i<TAM;i++)
    {
        scanf("%d",&vet[i]);
    }
    //chamando a fun��o de busca binaria
	i=busca(menor,maior,valor,vet);
    
    if(i!=-1)
    {
	printf("Valor %d encontrado no vetor de indice %d",vet[i],i);
    }
	
    else 
    {
	printf("O valor procurado nao existe no vetor");
    }
}

