#include "SDL.h"
#pragma once
#ifndef __Game__
#endif // !__Game__
#define __Game__


class Game
{
private:
	bool m_bRunning;
	
	SDL_Window* m_pWindow;
	SDL_Renderer* m_pRenderer;

public:
	Game(){}
	~Game(){}

	bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
	bool init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	void render();
	void update(){}
	void handleEvents();
	void clean();
	bool running() { return m_bRunning; }

};
