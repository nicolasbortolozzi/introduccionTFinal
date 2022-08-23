#include <iostream>
using namespace std;

class Game{
public:
	Game();
	void Play();
};

Game::Game()
{}

void Game::Play()
{
	cout << "ON";
}

class Snake{
public:
	Snake();
};

Snake::Snake()
{}


int main(int argc, char *argv[]) {
	Game juego;
	juego.Play;
	return 0;
}

