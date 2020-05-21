#include "Renderer.h"



Renderer::Renderer(int w,int h)
{
	
	Window = SDL_SetVideoMode(w, h, 32, SDL_SWSURFACE);
}

Renderer::Renderer(int w, int h, SDL_Surface* WindowTMP, SDL_Rect *Rectangle,SDL_Surface *ToDraw)
{
	Window = WindowTMP;

	Window = SDL_SetVideoMode(w, h, 32, SDL_SWSURFACE);
	SDL_BlitSurface(ToDraw,Rectangle, Window, NULL);
	SDL_Flip(Window);
}

void Renderer::DrawOnScreen(SDL_Rect* Rect_TMP, SDL_Surface* ToDraw)
{
	if (Window != NULL) {
	SDL_BlitSurface(ToDraw, Rect_TMP, Window, NULL);
	SDL_Flip(Window);
	}
}
