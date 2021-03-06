/*
Equipe2
Hermann Hernani
Jessica Tavares
Lucas Botinelly
Paulo Marinho
Stephanny Barreto

10) Uma matriz maze de 0s e 1s, de 10X10, representa um labirinto no qual um viajante precisa encontrar um caminho de maze[0][0] a maze[9][9]. O viajante pode passar de um quadrado para qualquer outro adjacente na mesma fileira ou coluna, mas não pode saltar quadrados nem se movimentar na diagonal. Além disso, o viajante não pode entrar num quadrado contendo um 1. maze[0][0] e maze[9][9] contêm 0s. Escreva uma rotina recursiva que aceite este labirinto maze e imprima uma mensagem informando a inexistência de um caminho através do labirinto, ou que imprima uma lista de posições representando um caminho de [0][0] a [9][9].
*/

#include<stdio.h>

void print_maze(char maze[10][10])
{
	int i, j,k;
	printf("   ");

	printf("\n");
	k = 0;
	for ( i = 0; i < 10; i++ )
	{
		if (k < 10)
		{
		printf("%d  ", k++);
		}
		else
		{
		printf("%d ", k++);
		}
		for ( j = 0; j < 10; j++ )
		{
		switch (maze[i][j])
		{
			case '1':
				printf("-");
				break;
			case '0':
				printf(" ");
				break;
			case '2':
				printf("P");
				break;
	   
		}
	}
		printf ( "\n" );
	}
}

int volta(char maze[10][10], int i, int j)
{
	if(maze[i][j+1] == '0' || maze[i][j-1] == '0' || maze[i+1][j] == '0' || maze[i-1][j] == '0'){
		//printf("ai papai\n");
		return 0;
	} 
	if(maze[i][j+1] == 'P')
	{	
		//printf("Ai, papai1\n");
		maze[i][j+1] = '3';
		volta(maze, i, j+1);
	}
	else
	{
		if(maze[i+1][j] == 'P')
		{		
			//printf("Ai, papai2\n");
			maze[i+1][j] = '3';
			volta(maze, i+1, j);
		}	
		
		else
		{
			if(maze[i-1][j] == 'P')
			{
				//printf("Ai, papai3\n");
				maze[i-1][j] == '3';
				volta(maze, i-1, j);
			}
			
			else
			{
				if(maze[i][j-1] == 'P')
				{
					//printf("Ai, papai4\n");
					maze[i][j-1] = '3';
					volta(maze, i, j-1);
				}
				else
				{
					printf("Sem caminho possível, fim de jogo !\n");
				}
			}
		}
	}
}

void verifica_caminho(char maze[10][10], int i, int j)
{
	
	if((maze[i][j+1] == '2' && maze[i][j-1] == '1' && maze[i+1][j] == '1' && maze[i-1][j] == '1'))
	{
		printf("Entrou 1!\n");
		volta(maze, i, j);
	}
	if((maze[i][j+1] == '1' && maze[i][j-1] == '2' && maze[i+1][j] == '1' && maze[i-1][j] == '1'))
	{
		printf("Entrou 2!\n");
		volta(maze, i, j);
	}
	if((maze[i][j+1] == '1' && maze[i][j-1] == '1' && maze[i+1][j] == '2' && maze[i-1][j] == '1'))
	{
		printf("Entrou 3!\n");
		volta(maze, i, j);
	}
	if((maze[i][j+1] == '1' && maze[i][j-1] == '1' && maze[i+1][j] == '1' && maze[i-1][j] == '2'))
	{
		printf("Entrou 4!\n");
		volta(maze, i, j);
	}
}

void load_maze(char maze[10][10])
{
	char ch;
	int i=0,j=0;
	FILE *fp;
  	fp = fopen("maze.txt","r" );
    if(fp == NULL)
          printf("Erro, nao foi possivel abrir o arquivo\n");
    else
    {
          while( (ch=fgetc(fp))!= EOF )
          {
                  if (ch != '\n')
                  {
                          maze[i][j] = ch;
                          j++;
                  }
				  else
                  {
                          j = 0;
                          i++;
                  }
          }
    }
    fclose(fp);
}

int anda(char maze[10][10], int i, int j)
{
	if(i==9 && j==9)
	{
		printf("Fim de jogo, tu ganhou mizera !!!! \n");
		return 0;
	}
	maze[0][0] = '2';
	if(maze[i][j+1] == '0')
	{	
		//printf("Ai, papai1\n");
		maze[i][j+1] = '2';
		verifica_caminho(maze, i, j+1);
		anda(maze, i, j+1);
	}
	else
	{
		if(maze[i+1][j] == '0')
		{		
			//printf("Ai, papai2\n");
			maze[i+1][j] = '2';
			verifica_caminho(maze, i+1, j);
			anda(maze, i+1, j);
		}	
		
		else
		{
			if(maze[i-1][j] == '0')
			{
				//printf("Ai, papai3\n");
				maze[i-1][j] == '2';
				verifica_caminho(maze, i-1, j);
				anda(maze, i-1, j);
			}
			
			else
			{
				if(maze[i][j-1] == '0')
				{
					//printf("Ai, papai4\n");
					maze[i][j-1] = '2';
					verifica_caminho(maze, i, j-1);
					anda(maze, i, j-1);
				}
				else
				{
					printf("Sem caminho possível, fim de jogo !\n");
				}
			}
		}
	}
}

int main()
{
	char matriz[10][10];
	int i=0, j=0;
	load_maze(matriz);
	/*for(i=0; i<10;i++)
	{
		for(j = 0; j<10;j++)
		{
			printf("%c", matriz[i][j]);
		}
	}
	*/
	printf("Tabuleiro Inicial: \n");
	print_maze(matriz);
	anda(matriz, i, j);
	printf("Tabuleiro Final: \n");
	print_maze(matriz);
	
	return 0;
}
