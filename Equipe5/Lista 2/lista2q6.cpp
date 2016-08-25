/*
	Aline Lima
	Amanda Leticia
	Eduardo Azevedo
	Elisandra Oliveira
	Frank N�polis
	Lucas Almeida

Quest�o 6 - O m�ximo divisor comum dos inteiros x e y � o maior inteiro que �
divisi�vel por x e y. Escreva uma fun��oo recursiva mdc em C, que retorna o
m�ximo divisor comum de x e y. O mdc de x e y � definido como segue: se y �
igual a 0, ent�o mdc(x,y) � x; caso contr�rio, mdc(x,y) � mdc (y, x%y),
onde % e� o operador resto.*/

#include <stdio.h> 
#include <stdlib.h> 

int mdc(int x, int y)
{
	if(y == 0)
		return x;
	else {
		return mdc(y, x%y); 
	} 
}

int main()
{
	int n1, n2, result;
	
	printf("\nCalculo do MDC entre 2 numeros.\n");
	printf("\nDigite o primeiro inteiro: ");
  	scanf(" %d", &n1);
 
  	printf("\nDigite o segundo inteiro: ");
  	scanf(" %d", &n2);
  
	result = mdc(n1, n2);
	
	printf("\n\n");
	printf("MDC de %d e %d = %d\n", n1, n2, mdc(n1, n2)); 
	
	return 0;
} 



