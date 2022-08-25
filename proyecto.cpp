#include <iostream>
#include<iostream>
#include<ctime>
using namespace std;

class Game{
	int puntaje = 0;
public:
	Game();
	void Play();
};

Game::Game()
{}

void Game::Play()
{
	bool continuar = false;
	while(continuar == false)
	{
		cout << "Controles W,A,S,D     Puntaje:" << puntaje << endl << "=====================================";
		continuar = true;
	}
}

class Snake{
public:
	Snake();
};

Snake::Snake()
{}


int main(int argc, char *argv[]) {
	Game juego;
	juego.Play();
	return 0;
}

