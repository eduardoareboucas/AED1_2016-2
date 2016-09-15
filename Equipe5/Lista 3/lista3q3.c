/*
    Aline Lima
    Amanda Leticia
    Eduardo Azevedo
    Lucas Almeida
    3) Crie um programa em C que gere em um arquivo .txt
	- arquivo com 10000 n�meros ordenados em ordem crescente
	- arquivo com 10000 n�meros ordenados em ordem descrescente
	- arquivo com 10000 n�meros gerados de maneira aleat�ria
	- arquivo com 100000 n�meros ordenados em ordem crescente
	- arquivo com 100000 n�meros ordenados em ordem descrescente
	- arquivo com 1000000 n�meros gerados de maneira aleat�ria
	- arquivo com 1000000 n�meros ordenados em ordem crescente
	- arquivo com 1000000 n�meros ordenados em ordem descrescente
	- arquivo com 1000000 n�meros gerados de maneira aleat�ria
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Funcao gera numeros e a partir da escolha faz o necessario
void gerador(int value, char escolha){
	int i;
	int vector[value];
	for(i=0; i<value; i++){
		vector[i]=rand() % value;
		//printf("%d------ ", rand() % 100);
	//	printf("%d ", vector[i]);
	}
	switch(escolha){
		case 'a':
			OrdenaVetorCrescente(value,vector);
		case 'b':
			OrdenaVetorDecrescente(value,vector);
		case 'c':
		for(i=0; i<value; i++){
			vector[i]=rand() % value;
			printf("%d ", vector[i]);
		}
	}
}
// Fun��o de ordena��o em ordem crescente 
void OrdenaVetorCrescente(int value, int vector[]){
	int i,j,aux;
    for( i=0; i<value; i++ ){
            for( j=i+1; j<value; j++ ){
                if( vector[i] > vector[j] ){  //Compara valores de vetores e realiza troca de posi��es
                    aux = vector[i];
                    vector[i] = vector[j];
                    vector[j] = aux;
                       }
                  }
           }
	for( i=0; i<value; i++ ){
		printf("%d  ",vector[i]);
	}	
}
// Fun��o de ordena��o em ordem crescente 
void OrdenaVetorDecrescente(int value, int vector[]){
	int i,j,aux;
	int newvector[value];
    for( i=0; i<value; i++ ){
            for( j=i+1; j<value; j++ ){
                if( vector[i] > vector[j] ){ //Compara valores de vetores e realiza troca de posi��es
                    aux = vector[i];
                    vector[i] = vector[j];
                         vector[j] = aux;
                       }
                  }
           }
		aux=0;
		for( j=value-1; j>=0; j-- ){ //Troca posi��o do primeiro com �ltimo at� completamente em decrescente
			newvector[j]=vector[aux];
			aux++;
		}	
		vector= newvector;
	for( i=0; i<value; i++ ){
		printf("%d  ",vector[i]);
	}	
}
//Escaneia o n�mero de valores para serem gerados e a escolha de ordena��o
int main(int argc, const char *argv[]){
	int i=0;
	int value;
	char escolha;
	scanf("%d", &value);
	scanf("%c", &escolha);
	scanf("%c", &escolha);
	gerador(value,escolha);
	printf("\n");
	return 0;
}
