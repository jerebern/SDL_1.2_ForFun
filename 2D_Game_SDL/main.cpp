#define stdin  (__acrt_iob_func(0))
#define stdout (__acrt_iob_func(1))
#define stderr (__acrt_iob_func(2))

#include "Renderer.h"


#define _DimW 1024
#define _DimH 768

#include <iostream>

#include <SDL.h>

void system_init() {
	// Initialize SDL with video
	
	Renderer *Rendu = new Renderer(_DimW,_DimH);
	
	SDL_Event event;	 // used to store any events from the OS
	bool running = true; // used to determine if we're running the game

	while (running)
	{
		// poll for events from SDL
		while (SDL_PollEvent(&event))
		{
			// determine if the user still wants to have the window open
			// (this basically checks if the user has pressed 'X')
			running = event.type != SDL_QUIT;
		}

		// Swap OpenGL buffers
		SDL_GL_SwapBuffers();
	}


}


int main(int argc, char* argv[])
{


	system_init();

	// Quit SDL
	SDL_Quit();

	return 0;
}