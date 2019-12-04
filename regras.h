void trocarDirecao(int tecla, int *direcao){
	if ((*direcao == 1) || (*direcao == 2)){

		if (tecla == 72)
		{
			*direcao = 0;

		}
		else if(tecla == 80){

			*direcao = 3;
		} 

	}
	else if( (*direcao == 0) || (*direcao == 3)){

		if (tecla == 75)
		{
			*direcao = 2;

		}
		else if(tecla == 77){
			
			*direcao = 1;
		}
	}
}

int testePerdeu(int posicaoX, int posicaoY){
		if ((posicaoX == (coluna-1) )|| (posicaoX == 0) || (posicaoY == 0) || (posicaoY  == (linha - 1)))
		{
			return 1;
		}else{
			return 0;
		}
}

int testeVenceu(int tam){
	if (tam >=20)
	{
		return 1;
	}else{
		return 0;
	}
}
/*void regraDeJogo(int *posicaoX, int *posicaoY){
	// Tp eixo X
		if (*posicaoX == 19)
		{
			*posicaoX = 1;
		}
		if (*posicaoX == 0)
		{
			*posicaoX = 18;
		}

	// Tp Y
		if (*posicaoY > 8)
		{
			*posicaoY = 1;
		}
		if (*posicaoY < 1)
		{
			*posicaoY = 8;
		}
}*/
