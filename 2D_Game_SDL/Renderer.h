#pragma once
#include <SDL.h>
class Renderer
{

private :
	SDL_Rect *Rectangle;
	SDL_Surface* ToDraw;
	SDL_Surface* Window;

public: 
	//Create Window with specific dimension
	Renderer(int,int);
	//Create Window With specific dimension and Content
	Renderer(int,int,SDL_Surface*,SDL_Rect*,SDL_Surface*);


	void DrawOnScreen();
	void Set_Rectangle();



};

