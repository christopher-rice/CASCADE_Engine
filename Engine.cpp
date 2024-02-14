#include "Engine.h"
#include <iostream>


// Engine default constructor
Engine::Engine()
{
    mainWindow = nullptr;
    mainRenderer = nullptr;
}

// Engine destructor
Engine::~Engine()
{
    close();
}

// Initializes all SDL components
bool Engine::init()
{
    std::cout << "Initializing CASCADE Engine!" << std::endl;

    // Initializing SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "ERROR: Could not initialize SDL! SDL_Error: " << SDL_GetError() << std::endl;
        return(false);
    }

    // Creating window
    mainWindow = SDL_CreateWindow("CASCADE Engine", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
    if (!mainWindow)
    {
        std::cout << "ERROR: Could not create window! SDL_Error: " << SDL_GetError() << std::endl;
        return(false);
    }

    // Creating renderer
    mainRenderer = SDL_CreateRenderer(mainWindow, -1, SDL_RENDERER_ACCELERATED);
    if (!mainRenderer)
    {
        std::cout << "ERROR: Could not create renderer! SDL_Error: " << SDL_GetError() << std::endl;
        return(false);
    }
}

// Shuts down all engine and SDL components
void Engine::close()
{
    std::cout << "Shutting down CASCADE Engine!" << std::endl;

    // Destorys window and renderer
    SDL_DestroyWindow(mainWindow);
    SDL_DestroyRenderer(mainRenderer);
    mainWindow = nullptr;
    mainRenderer = nullptr;

    // Quits the SDL subsystem
    SDL_Quit();
}

// Contains the gameplay loop (Input, Process, Output)
void Engine::startGame()
{
    // Event manager
    SDL_Event e;

    // Flag for quitting the game
    bool bQuitFlag = false;

    // Main gameplay loop
    while (!bQuitFlag)
    {
        /*
         *  Event Manager(Input)
         */

         // Looping through events in event queue
        while (SDL_PollEvent(&e) != 0)
        {
            // Quit event triggered
            if (e.type == SDL_QUIT)
            {
                bQuitFlag = true;
            }
        }

        /*
         *  Processing
         */

        /*
         *  Output
         */

        // Setting the default render color and clearing screen
        SDL_SetRenderDrawColor(mainRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_RenderPresent(mainRenderer);
        SDL_RenderClear(mainRenderer);
    }
}