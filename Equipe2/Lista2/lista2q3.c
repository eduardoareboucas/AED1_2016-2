/*
Equipe2
Hermann Hernani
Jessica Tavares
Lucas Botinelly
Paulo Marinho
Stephanny Barreto

3) Multiplica��o de dois numeros naturais, atraves de incrementos sucessivos (Ex.: 3 + 2 = ++(++3)).
*/

#include<stdio.h>
int somainc(int x, int y)
{
	if (x==0)
		return y;
	else	
		return somainc(x-1, y+1);

}
int main()
{
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);

	printf("%d\n", somainc(x,y));
	return 0; 
}
