#include "Renderer.h"



Renderer::Renderer(int w,int h)
{
	Window = SDL_SetVideoMode(w, h, 32, SDL_SWSURFACE);
}

Renderer::Renderer(int w, int h, SDL_Surface* WindowTMP, SDL_Rect *RectangleTMP,SDL_Surface *ToDrawTMP)
{
	Window = WindowTMP;
	Rectangle = RectangleTMP;
	ToDraw = ToDrawTMP;

	Window = SDL_SetVideoMode(w, h, 32, SDL_SWSURFACE);
	SDL_BlitSurface(ToDraw,Rectangle, Window, NULL);
	SDL_Flip(Window);
}
