#include <cstdlib>
#include <iostream>

#include "Game.h"

int main(int argC, char* argV[])
{
	srand(time(0));

	Game* game = new Game{ 1080, 720, "Brick Breaker", WHITE };

	int result = game->Run();

	delete game;

	return result;
}