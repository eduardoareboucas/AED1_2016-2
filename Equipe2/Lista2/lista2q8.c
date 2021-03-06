/*
Equipe 2

Hermann Hernani
Lucas Botinelly
Stephanny Barreto
Paulo Marinho
Jéssica Tavares

8) Uma sequencia de Fibonacci generalizada, de f0 a f1 é definida como fibg(f0, f1, 0), fibg(f0, f1, 1), fibg(f0, f1, 2), ..., onde:
fibg(f0, f1, 0) = f0
fibg(f0, f1, 1) = f1
fibg(f0, f1, n) = fibg(f0, f1, n-1) + fibg(f0, f1, n-2), se n > 1. Escreva uma fun��o recursiva em C para calcular fibg(f0, f1, n).
*/

#include<stdio.h>

int fib_gen(int f0, int f1, int n)
{
	if(n<2)
		return n;
	else
		return fib_gen(f0, f1, n-1) + fib_gen(f0, f1, n-2);
}
//0, 1, 1, 2, 3, 5, 8
int main()
{
	int f0 = 0, f1 = 1, n, result;
	scanf("%d", &n);
	result = fib_gen(f0, f1, n-1);
	printf("%d\n", result);
	return 0;
}
