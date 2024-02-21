#include "Sprite.h"


// Sprite constructor
Sprite::Sprite()
{
	image = nullptr;
	width = 0;
	height = 0;
	scale = 1;
}

// Sprite destructor
Sprite::~Sprite()
{
	free();
}

// Loads image from file
bool Sprite::loadImage(const char* file, SDL_Renderer* renderer)
{
	// Deallocates image
	free();

	// Loads image into surface
	SDL_Surface* surface = IMG_Load(file);
	if (!surface)
	{
		std::cout << "ERROR: Unable to load image " << file << "! SDL_image Error: " << IMG_GetError() << std::endl;
		return(false);
	}

	// Color keys the image TODO (Change color key value to global variable)
	SDL_SetColorKey(surface, SDL_TRUE, SDL_MapRGB(surface->format, 0x00, 0xFE, 0x00));

	// Creates texture from surface
	SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
	if (!texture)
	{
		std::cout << "ERROR: Unable to create texture from surface! SDL_ERROR: " << SDL_GetError() << std::endl;
		SDL_FreeSurface(surface);
		surface = nullptr;
		return(false);
	}

	// Retrieving image width and height
	width = surface->w;
	height = surface->h;

	// Sets new image
	image = texture;

	// Frees created surface
	SDL_FreeSurface(surface);
	surface = nullptr;

	return(true);
}

// Frees all associated data
void Sprite::free()
{
	SDL_DestroyTexture(image);
	image = nullptr;
	width = 0;
	height = 0;
	scale = 1;
}

// Renders sprite to the screen
void Sprite::render(int x, int y, SDL_Renderer* renderer, SDL_Rect* clip, double angle, SDL_Point* center, SDL_RendererFlip flip)
{
	// Rectangle inside screen to render to
	SDL_Rect renderRect = { x, y, width * scale, height * scale };

	// Adjust render rectangle to match clip rectangle
	if (clip)
	{
		renderRect.w = clip->w * scale;
		renderRect.h = clip->h * scale;
	}

	// Renders sprite to screen
	SDL_RenderCopyEx(renderer, image, clip, &renderRect, angle, center, flip);
}

// Sets the scale of the sprite
void Sprite::setScale(int newScale)
{
	scale = newScale;
}

// Gets the width of the sprite
int Sprite::getWidth()
{
	return(width);
}

// Gets the height of the sprite
int Sprite::getHeight()
{
	return(height);
}

// Gets the scale of the sprite
int Sprite::getScale()
{
	return(scale);
}