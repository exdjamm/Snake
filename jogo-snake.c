#include <stdlib.h>
#include <time.h>

const int linha = 10;
const int coluna = 20;


#include "manipulacaoMatriz.h"
#include "console.h"
#include "regras.h"
#include "desenhaApaga.h"
#include "corpo.h"

/*****************
	72 -> cima
	75 -> esquerda
	80 -> baixo
	77 -> direita
******************/

void novaFruta(int fruta[2]){
	srand(time(NULL));

	fruta[0] = (rand() % 7) + 1;
	fruta[1] = (rand() % 17) +1;
}

void moverCabeca(int *Y, int *X, int direcao){
	if (direcao == 0){
		
		*Y = *Y - 1;
	}
	else if (direcao == 1){
		
		*X = *X + 1;
	}
	else if(direcao == 2){
		
		*X = *X - 1;
	}
	else if(direcao == 3){
		
		*Y = *Y +1 ;
	}
}

int main(){
	system("cls");

	int vencer = 0, perder = 0;

	char mapa[linha][coluna];

	limpaMatriz(mapa);
	desenhaMapa(mapa);

	int posicaoCobra[20][2] = {0};

	int tecla;
	int cabecaX, cabecaY, cy[300]={7,7}, cx[300]={1,2};
	int direcao = 1;
	int fruta[2];
	int tam = 0;
	int comeu = 0;

	cabecaX = cabecaY = 1;

	novaFruta(fruta);

	do{
		
		gotoxy(0,0);
		
		apagaArea(mapa);

		if (comeu){
			novaFruta(fruta);
			comeu = 0;
		}
 
		desenhaFruta(mapa, fruta);
		desenhaCabeca(mapa, cabecaX, cabecaY, direcao);
		

		//desenhaCorpo( posicaoCobra, mapa, direcao, tam);

		mostraMapa(mapa);
		
		tecla = lerTecla();
		trocarDirecao(tecla, &direcao);
		
		//moverCorpo(posicaoCobra, posicaoX, posicaoY, tam, direcao);

		moverCabeca(&cabecaY, &cabecaX, direcao);

		//regraDeJogo(&cabecaX, &cabecaY);

		if ((cabecaY == fruta[0]) && (cabecaX == fruta[1])){	
			tam++;
			comeu = 1;
		}

		perder = testePerdeu(cabecaX, cabecaY);
		vencer = testeVenceu(tam);

		Sleep(100);

	}while(!vencer && !perder);

}