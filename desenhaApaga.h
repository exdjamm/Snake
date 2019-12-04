void apagaArea(char mapa[linha][coluna]){
	for (int i = 1; i < linha-1; ++i)
	{
		for (int j = 1; j < coluna-1; ++j)
		{
			mapa[i][j] = ' ';
		}
	}
}

void desenhaFruta(char mapa[linha][coluna], int fruta[2]){
	mapa[fruta[0]][fruta[1]] = '@';
}

void desenhaCabeca (char mapa[linha][coluna], int X, int Y, int direcao){
	mapa[Y][X] = ((direcao ==1) || (direcao == 2))?'-':'|';
}

void desenhaCorpo(int cobra[4][2], char mapa[linha][coluna], int direcao, int tam){
	int linha, coluna;

	for (int i = 0; i <= tam; ++i){

		linha = cobra[i][0];
		coluna = cobra[i][1];

		if ((linha >0) && (coluna >0)){
				mapa[linha][coluna] = ((direcao ==1) || (direcao == 2))?'=':':';
		}
	}
}

/*
void apagaFruta(char mapa[linha][coluna], int fruta[2]){
	mapa[fruta[0]][fruta[1]] =  ' ';
}

void apagaCabeca(int X, int Y, char mapa[linha][coluna]){
	mapa[Y][X] = ' ';
}*/

