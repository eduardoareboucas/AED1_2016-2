/*
Equipe 2

Hermann Hernani
Lucas Botinelly
Jéssica Tavares
Paulo Marinho
Stephanny Barreto

6) O maximo divisor comum dos inteiros x e y é o maior inteiro que � divisivel por  x e y. 
Escreva uma fun��o recursiva mdc em C, que retorna o maximo divisor comum de x e y. O mdc de x e y é definido como segue: se y é igual a 0, entao mdc(x,y) � x; caso contrario, mdc(x,y) é mdc (y, x%y), onde % � o operador resto.

*/
#include<stdio.h>

int mdc(int num1, int num2)
{
	if(num2 == 0)
		return num1;
	else
		return mdc(num2, num1%num2);
}

int main()
{
	int num1, num2, result;
	scanf("%d", &num1);
	scanf("%d", &num2);
	result = mdc(num1, num2);	
	printf("%d\n", result);	
	return 0;
}
