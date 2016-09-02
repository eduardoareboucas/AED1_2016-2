/*
	Aline Lima
	Amanda Leticia
	Eduardo Azevedo
	Frank N�polis
	Lucas Almeida

Quest�o 7 - Escreva uma fun��o recursiva que determine quantas vezes um d�gito K
ocorre em um n�mero natural N. Por exemplo, o d�gito 2 ocorre 3 vezes em 762021192.*/
 
 
#include<stdio.h>
#include<stdlib.h>

int x, cont=0;

int repeticoes(int num)
{
	if(num==0)
		return cont;
	else
	{
		if(x==(num%10))
		{
			cont++;
		}
		return (repeticoes(num/10));
	}
}

int main()
{
	int num;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	printf("\nInforme o numero que deseja verificar qunatas vezes se repete no N acima: ");
	scanf("%i", &x);
	
	printf("\nO numero se repete %i vezes", repeticoes(num));	
}

