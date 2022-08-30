#include<cstdio>
#include<iostream>
#include<ctime>

using namespace std;

class pared{
protected:
	bool Avanzar = false;
	pared();
};
pared::pared()
{}

class Snake : protected pared{
public:
	string direccion = "W";
	string direccioncontraria = "S";
	string Body = "N";
	bool pierdes;
	int numparte1X = 21;
	int numparte1Y = 12;
	int numparte2X = 21;
	int numparte2Y = 13;
	int numparte3X = 21;
	int numparte3Y = 14;
	int numparte4X = 21;
	int numparte4Y = 15;
	int numparte5X = 21;
	int numparte5Y = 16;
	Snake();
};

Snake::Snake()
{}

class Game{
	int puntaje = 0;
	bool continuar = true;
	bool TableroEspacios[801];
	string Tablero[801];
	Snake serpiente;
public:
	Game();
	void Reset();
	void Play();
	void Escribir();
	void Dibujar();
	void Move();
};

Game::Game()
{}

void Game::Reset()
{
	int num = 1;
	while(num <= 800)
	{
		Tablero[num] = "";
		num++;
	}
}

void Game::Move()
{
	int espacioXY = serpiente.numparte1X * serpiente.numparte1Y;
	int nextespacioXY;
	int Y;
	int X;
	if(serpiente.direccion == "W")
	{
		Y = serpiente.numparte1Y - 1;
		X = serpiente.numparte1X;
		nextespacioXY = serpiente.numparte1X * Y;
		if(TableroEspacios[nextespacioXY] == true)
		{
			continuar = true;
			int tempnumparte1X = serpiente.numparte1X;
			int tempnumparte1Y = serpiente.numparte1Y;
			int tempnumparte2X = serpiente.numparte2X;
			int tempnumparte2Y = serpiente.numparte2Y;
			int tempnumparte3X = serpiente.numparte3X;
			int tempnumparte3Y = serpiente.numparte3Y;
			int tempnumparte4X = serpiente.numparte4X;
			int tempnumparte4Y = serpiente.numparte4Y;
			
			serpiente.numparte1Y = Y;
			serpiente.numparte1X = X;
			serpiente.numparte2Y = tempnumparte1Y;
			serpiente.numparte2X = tempnumparte1X;
			serpiente.numparte3Y = tempnumparte2Y;
			serpiente.numparte3X = tempnumparte2X;
			serpiente.numparte4Y = tempnumparte3Y;
			serpiente.numparte4X = tempnumparte3X;
			serpiente.numparte5Y = tempnumparte4Y;
			serpiente.numparte5X = tempnumparte4X;
		}
		else
		{
			continuar = false;
		}
	}
}

void Game::Dibujar()
{
	int num = 1;
	while(num <= 800)
	{
		cout << Tablero[num] << Tablero[num + 1] << Tablero[num + 2] << Tablero[num + 3] << Tablero[num + 4] << Tablero[num + 5];
		cout << Tablero[num + 6] << Tablero[num + 7] << Tablero[num + 8] << Tablero[num + 9] << Tablero[num + 10];
		cout << Tablero[num + 11] << Tablero[num + 12] << Tablero[num + 13] << Tablero[num + 14] << Tablero[num + 15];
		cout << Tablero[num + 16] << Tablero[num + 17] << Tablero[num + 18] << Tablero[num + 19];
		cout << Tablero[num + 20] << Tablero[num + 21] << Tablero[num + 22] << Tablero[num + 23] << Tablero[num + 24] << Tablero[num + 25];
		cout << Tablero[num + 26] << Tablero[num + 27] << Tablero[num + 28] << Tablero[num + 29] << Tablero[num + 30];
		cout << Tablero[num + 31] << Tablero[num + 32] << Tablero[num + 33] << Tablero[num + 34] << Tablero[num + 35];
		cout << Tablero[num + 36] << Tablero[num + 37] << Tablero[num + 38] << Tablero[num + 39] << endl;
		num = num + 40;
	}
}

void Game::Escribir()
{
	int num = 1;
	int lineaX = 1;
	int lineaY = 1;
	while(num != 801)
	{
		if(lineaY == serpiente.numparte1Y && lineaX == serpiente.numparte1X)
		{
			Tablero[num] = "N";
			TableroEspacios[num] = false;
			lineaX++;
		}
		
		if(lineaY == serpiente.numparte2Y && lineaX == serpiente.numparte2X)
		{
			Tablero[num] = "N";
			TableroEspacios[num] = false;
			lineaX++;
		}
		if(lineaY == serpiente.numparte3Y && lineaX == serpiente.numparte3X)
		{
			Tablero[num] = "N";
			TableroEspacios[num] = false;
			lineaX++;
		}
		if(lineaY == serpiente.numparte4Y && lineaX == serpiente.numparte4X)
		{
			Tablero[num] = "N";
			TableroEspacios[num] = false;
			lineaX++;
		}
		if(lineaY == serpiente.numparte5Y && lineaX == serpiente.numparte5X)
		{
			Tablero[num] = "N";
			TableroEspacios[num] = false;
			lineaX++;
		}
		
		if(lineaY == 1)
		{
			Tablero[num] = "X";
			TableroEspacios[num] = false;
			if(lineaX == 40)
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
			TableroEspacios[num] = false;
			if(lineaX == 40)
			{
				lineaX = 1;
				lineaY++;
			}
			else
			{
				lineaX++;
			}
		}
		else if(lineaY == 20)
		{
			Tablero[num] = "X";
			TableroEspacios[num] = false;
			if(lineaX == 40)
			{
				lineaX = 1;
				lineaY++;
			}
			else
			{
				lineaX++;
			}
		}
		else if(lineaX == 40)
		{
			Tablero[num] = "X";
			TableroEspacios[num] = false;
			if(lineaX == 40)
			{
				lineaX = 1;
				lineaY++;
			}
			else
			{
				lineaX++;
			}
		}
		else if(Tablero[num] != "N")
		{
			Tablero[num] = "O";
			TableroEspacios[num] = true;
			if(lineaX == 40)
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

void Game::Play()
{
	int Timer = 1;
	while(continuar == true)
	{
		cout << "========================================"  << endl << "Controles: W,A,S,D      Puntaje: " << puntaje << endl << "========================================"  << endl;
		Escribir();
		Dibujar();
		Move();
		Reset();
		
		Timer *= CLOCKS_PER_SEC;
		clock_t now = clock();
		while(clock() - now <Timer);
		Timer = 1;
	}
}

int main(int argc, char *argv[]) {
	Game juego;
	juego.Reset();
	juego.Play();
	return 0;
}

