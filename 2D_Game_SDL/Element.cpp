#include "Element.h"

Element::Element(int width, int height, int Posx, int Posy,const char* path)
{
	Rectangle = new SDL_Rect();

	Rectangle->w = width;
	Rectangle->h = height;
	Rectangle->x = Posx;
	Rectangle->y = Posy;

	Image = SDL_LoadBMP(path);
}

int Element::Get_Retangle_Pos_X()
{
	return Rectangle->x;
}

int Element::Get_Retangle_Pos_Y()
{
	return Rectangle->y;
}

void Element::Set_Retangle_Pos_Y(int Y)
{
	Rectangle->y = Y;
}

void Element::Set_Retangle_Pos_X(int X)
{
	Rectangle->x = X;

}

SDL_Rect* Element::Get_Rectangle()
{
	return Rectangle;
}

SDL_Surface* Element::Get_Image()
{
	return Image;
}
