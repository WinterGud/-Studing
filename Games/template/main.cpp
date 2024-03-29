#include<SDL.h>
#include <iostream>
#include "Game.h"

Game* g_game = NULL;

int main(int argc, char* argv[])
{
	g_game = new Game();
	
	if (g_game->init("Chapter 1", 100, 100, 640, 480, false))
	{
		while (g_game->running())
		{
			g_game->handleEvents();
			g_game->update();
			g_game->render();
		}
	}

	g_game->clean();

	return 0;
}
