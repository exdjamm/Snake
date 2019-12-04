#include <conio.h>
#include <windows.h>

void gotoxy (short int x, short int y) 
{
    HANDLE wdw;
    COORD c = { x, y };
    wdw=GetStdHandle(STD_OUTPUT_HANDLE); 
    SetConsoleCursorPosition( wdw, c ); 
}




char lerTecla(){
	if(kbhit()){
		return getch();
	}else{
		return '\0';
	}
}
