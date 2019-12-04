typedef struct {
	int X;
	int Y;
	int direcao;
} body;

void moverPedaco(body Corpo[]){
	static int Pedaco = 0;

	if (Corpo[Pedaco].direcao == 0){
		
		Corpo[Pedaco].Y = Corpo[Pedaco].Y - 1;
	}
	else if (Corpo[Pedaco].direcao == 1){
		
		Corpo[Pedaco].X = Corpo[Pedaco].X + 1;
	}
	else if(Corpo[Pedaco].direcao == 2){
		
		*X = *X - 1;
	}
	else if(Corpo[Pedaco].direcao == 3){
		
		Corpo[Pedaco].Y = Corpo[Pedaco].Y +1 ;
	}
	Pedaco ++;
}
