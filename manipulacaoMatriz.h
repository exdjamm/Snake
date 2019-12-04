#include <stdio.h>

void limpaMatriz(char matriz[linha][coluna]){
	for (int i = 1; i < linha-1; ++i)
	{
		for (int j = 1; j < coluna-1; ++j)
		{
			matriz[i][j] = ' ';
		}
	}
}

void desenhaMapa(char mapa[linha][coluna]){
	for (int i = 0; i < coluna; ++i)
	{
		mapa[0][i] = '-';
		mapa[linha-1][i] = '=';
	}
	for (int i = 0; i < linha; ++i)
	{
		mapa[i][0] = '|';
		mapa[i][coluna-1] = '|';
	}
}

void mostraMapa(char mapa[linha][coluna]){
	for (int i = 0; i < linha; ++i)
	{	for (int j = 0; j < coluna; ++j)
		{
			printf("%c", mapa[i][j]);

		}
		printf("\n");
	}
}
