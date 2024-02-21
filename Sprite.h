#pragma once
#ifndef _SPRITE_H_
#define _SPRITE_H_

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include <iostream>


class Sprite
{
public:
	// Sprite constructor
	Sprite();

	// Sprite destructor
	~Sprite();

	// Loads image from file
	bool loadImage(const char* file, SDL_Renderer* renderer);

	// Frees all associated data
	void free();
	
	// Renders sprite to the screen
	void render(int x, int y, SDL_Renderer* renderer, SDL_Rect* clip = nullptr, double angle = 0.0, SDL_Point* center = nullptr, SDL_RendererFlip flip = SDL_FLIP_NONE);

	// Sets the scale of the sprite
	void setScale(int newScale);

	// Gets the width of the sprite
	int getWidth();

	// Gets the height of the sprite
	int getHeight();

	// Gets the scale of the sprite
	int getScale();

private:
	// Texture containing image for sprite
	SDL_Texture* image;

	// Dimensions of sprite
	int width;
	int height;

	// Scale of sprite
	int scale;
};

#endif