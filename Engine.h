#pragma once
#ifndef _ENGINE_H_
#define _ENGINE_H_

#include "SDL2/SDL.h"


class Engine
{
public:
    // Engine default constructor
    Engine();

    // Engine destructor
    ~Engine();

    // Initializes all SDL components
    bool init();

    // Shuts down all engine and SDL components
    void close();

    // Contains the gameplay loop (Input, Process, Output)
    void startGame();

private:
    SDL_Window* mainWindow;     // Main window we are rendering to
    SDL_Renderer* mainRenderer; // Main rendering context
};

#endif