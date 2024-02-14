// Included to use the c++ main function as starting point
#define SDL_MAIN_HANDLED

#include <iostream>
#include "SDL2/SDL.h" // Includes basic SDL functionality
#include "Engine.h"


int main()
{
    // Initializing CASCADE Engine
    Engine CASCADE;

    if (!CASCADE.init())
    {
        return(-1);
    }

    // Starting game loop
    CASCADE.startGame();

    return(0);
}

