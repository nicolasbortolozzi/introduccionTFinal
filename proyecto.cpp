#include <iostream>
using namespace std;

class Game{
	int puntaje = 0;
	string Tablero[201];
public:
	Game();
	void Play();
	void Escribir();
};

Game::Game()
{
	int num = 1;
	int lineaX = 1;
	int lineaY = 1;
	while(num != 201)
	{
		if(lineaY == 1)
		{
			Tablero[num] = "X";
			if(lineaX == 20)
			{
				lineaX = 1;
				lineaY++;
			}
			else
			{
				lineaX++;
			}
		}
		else if(lineaX == 1)
		{
			Tablero[num] = "X";
			if(lineaX == 20)
			{
				lineaX = 1;
				lineaY++;
			}
			else
			{
				lineaX++;
			}
		}
		else if(lineaY == 10)
		{
			Tablero[num] = "X";
			if(lineaX == 20)
			{
				lineaX = 1;
				lineaY++;
			}
			else
			{
				lineaX++;
			}
		}
		else if(lineaX == 20)
		{
			Tablero[num] = "X";
			if(lineaX == 20)
			{
				lineaX = 1;
				lineaY++;
			}
			else
			{
				lineaX++;
			}
		}
		else
		{
			Tablero[num] = "O";
			if(lineaX == 20)
			{
				lineaX = 1;
				lineaY++;
			}
			else
			{
				lineaX++;
			}
		}
		num++;
	}
}

void Game::Escribir()
{
	int num = 1;
	while(num <= 200)
	{
		cout << Tablero[num] << Tablero[num + 1] << Tablero[num + 2] << Tablero[num + 3] << Tablero[num + 4] << Tablero[num + 5];
		cout << Tablero[num + 6] << Tablero[num + 7] << Tablero[num + 8] << Tablero[num + 9] << Tablero[num + 10];
		cout << Tablero[num + 11] << Tablero[num + 12] << Tablero[num + 13] << Tablero[num + 14] << Tablero[num + 15];
		cout << Tablero[num + 16] << Tablero[num + 17] << Tablero[num + 18] << Tablero[num + 19] << endl;
		num = num + 20;
	}
}

void Game::Play()
{
	bool continuar = false;
	while(continuar == false)
	{
		cout << "Controles W,A,S,D     Puntaje:" << puntaje << endl << "====================================="  << endl;
		Escribir();
		
		continuar = true;
	}
}

class Snake{
	string direccion = "W";
	string direccioncontraria = "S";
public:
	Snake();
};

Snake::Snake()
{}

class espacios{
	int lugar;
public:
	espacios();
};

espacios::espacios()
{}

class PartesSnake{
public:
	PartesSnake();
};

PartesSnake::PartesSnake()
{}


int main(int argc, char *argv[]) {
	Game juego;
	juego.Play();
	return 0;
}

