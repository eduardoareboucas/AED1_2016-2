/*
	Aline Lima
	Amanda Leticia
	Eduardo Azevedo
	Elisandra Oliveira
	Frank N�polis
	Lucas Almeida

Quest�o 1 - Impress�o de um n�mero natural(decimal) em base bin�ria.*/

#include<stdio.h>

int binario(int n){
    if(n<2){
	    return n;
    }
    return(10*binario(n/2))+n%2; 
}

int main(){
	int num;
	
	printf("Digite o numero que deseja convertar para binario: ");
	scanf("%i", &num);
	
	printf("\nO numero %i em binario e: %i", num, binario(num));
}


