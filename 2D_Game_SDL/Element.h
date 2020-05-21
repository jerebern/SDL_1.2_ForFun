#pragma once

#include "SDL.h"

class Element
{
private : 
	
	SDL_Rect *Rectangle;
	SDL_Surface *Image;

public: 
	
	Element(int, int, int, int, const char*);

	int Get_Retangle_Pos_X();
	int Get_Retangle_Pos_Y();
	void Set_Retangle_Pos_Y(int);
	void Set_Retangle_Pos_X(int);

	SDL_Rect* Get_Rectangle();
	SDL_Surface* Get_Image();

};

