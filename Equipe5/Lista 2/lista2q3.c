/*	Equipe 5
	Aline Lima
	Amanda Leticia
	Eduardo Rebou�as
	Lucas Almeida
	
	3) Soma de dois n�meros naturais, atrav�s de incrementos sucessivos (Ex.: 3 + 2 = ++(++3)).
*/

/*

		se numero == 1, entao soma == 1+add (add = 3);
		se n�o, soma == ++(soma(num-1,add);

*/

#include <stdio.h>

int soma(int num, int add)
{
	if(num==1)
	{
		return 1+add;
	}else
	{
		return (1+soma(num-1, add));
	}
}

int main()
{
	int num, add;
	printf("\n\n Digite um numero: ");
	scanf("%d", &add);
	printf("\n Digite um numero a ser somado: ");
	scanf("%d", &num);
	printf("\n\n Resultado de %d + %d = %d", add,num,(soma(num, add)));
}
