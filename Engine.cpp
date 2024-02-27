#include "Engine.h"
#include "Sprite.h"
#include <iostream>

class InputGrabber
{
public:
    // Input Grabber default constructor
    InputGrabber(SDL_Event* e)
    {
        this->e = e;
    }

    // Input Grabber destructor
    ~InputGrabber()
    {

    }

    // Runs through all events in the event queue
    void GrabKeyEvents()
    {
        // Checks for keyboard events
        if (e->type == SDL_KEYDOWN)
        {
            switch (e->key.keysym.sym)
            {
                case SDLK_0:
                    std::cout << "Pressed 0" << std::endl;
                    break;

                case SDLK_1:
                    std::cout << "Pressed 1" << std::endl;
                    break;

                case SDLK_2:
                    std::cout << "Pressed 2" << std::endl;
                    break;

                case SDLK_3:
                    std::cout << "Pressed 3" << std::endl;
                    break;

                case SDLK_4:
                    std::cout << "Pressed 4" << std::endl;
                    break;

                case SDLK_5:
                    std::cout << "Pressed 5" << std::endl;
                    break;

                case SDLK_6:
                    std::cout << "Pressed 6" << std::endl;
                    break;

                case SDLK_7:
                    std::cout << "Pressed 7" << std::endl;
                    break;

                case SDLK_8:
                    std::cout << "Pressed 8" << std::endl;
                    break;

                case SDLK_9:
                    std::cout << "Pressed 9" << std::endl;
                    break;

                case SDLK_KP_0:
                    std::cout << "Pressed Keypad 0" << std::endl;
                    break;

                case SDLK_KP_1:
                    std::cout << "Pressed Keypad 1" << std::endl;
                    break;

                case SDLK_KP_2:
                    std::cout << "Pressed Keypad 2" << std::endl;
                    break;

                case SDLK_KP_3:
                    std::cout << "Pressed Keypad 3" << std::endl;
                    break;

                case SDLK_KP_4:
                    std::cout << "Pressed Keypad 4" << std::endl;
                    break;

                case SDLK_KP_5:
                    std::cout << "Pressed Keypad 5" << std::endl;
                    break;

                case SDLK_KP_6:
                    std::cout << "Pressed Keypad 6" << std::endl;
                    break;

                case SDLK_KP_7:
                    std::cout << "Pressed Keypad 7" << std::endl;
                    break;

                case SDLK_KP_8:
                    std::cout << "Pressed Keypad 8" << std::endl;
                    break;

                case SDLK_KP_9:
                    std::cout << "Pressed Keypad 9" << std::endl;
                    break;

                case SDLK_KP_PERIOD:
                    std::cout << "Pressed Keypad ." << std::endl;
                    break;

                case SDLK_KP_DIVIDE:
                    std::cout << "Pressed Keypad \\" << std::endl;
                    break;

                case SDLK_KP_ENTER:
                    std::cout << "Pressed Keypad Enter" << std::endl;
                    break;

                case SDLK_KP_MINUS:
                    std::cout << "Pressed Keypad -" << std::endl;
                    break;

                case SDLK_KP_MULTIPLY:
                    std::cout << "Pressed Keypad *" << std::endl;
                    break;

                case SDLK_KP_PLUS:
                    std::cout << "Pressed Keypad +" << std::endl;
                    break;

                case SDLK_a:
                    std::cout << "Pressed A" << std::endl;
                    break;

                case SDLK_b:
                    std::cout << "Pressed B" << std::endl;
                    break;

                case SDLK_c:
                    std::cout << "Pressed C" << std::endl;
                    break;

                case SDLK_d:
                    std::cout << "Pressed D" << std::endl;
                    break;

                case SDLK_e:
                    std::cout << "Pressed E" << std::endl;
                    break;

                case SDLK_f:
                    std::cout << "Pressed F" << std::endl;
                    break;

                case SDLK_g:
                    std::cout << "Pressed G" << std::endl;
                    break;

                case SDLK_h:
                    std::cout << "Pressed H" << std::endl;
                    break;

                case SDLK_i:
                    std::cout << "Pressed I" << std::endl;
                    break;

                case SDLK_j:
                    std::cout << "Pressed J" << std::endl;
                    break;

                case SDLK_k:
                    std::cout << "Pressed K" << std::endl;
                    break;

                case SDLK_l:
                    std::cout << "Pressed L" << std::endl;
                    break;

                case SDLK_m:
                    std::cout << "Pressed M" << std::endl;
                    break;

                case SDLK_n:
                    std::cout << "Pressed N" << std::endl;
                    break;

                case SDLK_o:
                    std::cout << "Pressed O" << std::endl;
                    break;

                case SDLK_p:
                    std::cout << "Pressed P" << std::endl;
                    break;

                case SDLK_q:
                    std::cout << "Pressed Q" << std::endl;
                    break;

                case SDLK_r:
                    std::cout << "Pressed R" << std::endl;
                    break;



                case SDLK_BACKSLASH:
                    std::cout << "Pressed \\" << std::endl;
                    break;

                case SDLK_COMMA:
                    std::cout << "Pressed Comma" << std::endl;
                    break;

                case SDLK_EQUALS:
                    std::cout << "Pressed Equal" << std::endl;
                    break;

                case SDLK_MINUS:
                    std::cout << "Pressed Minus" << std::endl;
                    break;

                case SDLK_PERIOD:
                    std::cout << "Pressed Period" << std::endl;
                    break;

                case SDLK_DOWN:
                    std::cout << "Pressed Down Arrow" << std::endl;
                    break;

                case SDLK_LEFT:
                    std::cout << "Pressed Left Arrow" << std::endl;
                    break;

                case SDLK_RIGHT:
                    std::cout << "Pressed Right Arrow" << std::endl;
                    break;

                case SDLK_F1:
                    std::cout << "Pressed F1" << std::endl;
                    break;

                case SDLK_F2:
                    std::cout << "Pressed F2" << std::endl;
                    break;

                case SDLK_F3:
                    std::cout << "Pressed F3" << std::endl;
                    break;

                case SDLK_F4:
                    std::cout << "Pressed F4" << std::endl;
                    break;

                case SDLK_F5:
                    std::cout << "Pressed F5" << std::endl;
                    break;

                case SDLK_F6:
                    std::cout << "Pressed F6" << std::endl;
                    break;

                case SDLK_F7:
                    std::cout << "Pressed F7" << std::endl;
                    break;

                case SDLK_F8:
                    std::cout << "Pressed F8" << std::endl;
                    break;

                case SDLK_F9:
                    std::cout << "Pressed F9" << std::endl;
                    break;

                case SDLK_F10:
                    std::cout << "Pressed F10" << std::endl;
                    break;

                case SDLK_F11:
                    std::cout << "Pressed F11" << std::endl;
                    break;

                case SDLK_F12:
                    std::cout << "Pressed F12" << std::endl;
                    break;

                case SDLK_BACKSPACE:
                    std::cout << "Pressed Backspace" << std::endl;
                    break;

                case SDLK_CAPSLOCK:
                    std::cout << "Pressed CapsLock" << std::endl;
                    break;

                case SDLK_DELETE:
                    std::cout << "Pressed Delete" << std::endl;
                    break;

                case SDLK_END:
                    std::cout << "Pressed End" << std::endl;
                    break;

                case SDLK_ESCAPE:
                    std::cout << "Pressed Escape" << std::endl;
                    break;

                case SDLK_HOME:
                    std::cout << "Pressed Home" << std::endl;
                    break;

                case SDLK_INSERT:
                    std::cout << "Pressed Insert" << std::endl;
                    break;

                case SDLK_LSHIFT:
                    std::cout << "Pressed Left Shift" << std::endl;
                    break;

                case SDLK_NUMLOCKCLEAR:
                    std::cout << "Pressed Num Lock" << std::endl;
                    break;

                case SDLK_PAGEDOWN:
                    std::cout << "Pressed Page Down" << std::endl;
                    break;

                case SDLK_PAGEUP:
                    std::cout << "Pressed Page Up" << std::endl;
                    break;

                case SDLK_PRINTSCREEN:
                    std::cout << "Pressed Print Screen" << std::endl;
                    break;

                case SDLK_RALT:
                    std::cout << "Pressed Right Alt" << std::endl;
                    break;

                case SDLK_RCTRL:
                    std::cout << "Pressed Right Control" << std::endl;
                    break;

                case SDLK_RETURN:
                    std::cout << "Pressed Enter" << std::endl;
                    break;




                default:
                    break;
            }
        }
    }

private:
    // Handler for events
    SDL_Event* e;
};

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

    // Initializing SDL_image
    if (!(IMG_Init(IMG_INIT_PNG) && IMG_INIT_PNG))
    {
        std::cout << "ERROR: Could not initialize SDL_image! SDL_Error: " << IMG_GetError() << std::endl;
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

    // Quits the SDL subsystems
    IMG_Quit();
    SDL_Quit();
}

// Contains the gameplay loop (Input, Process, Output)
void Engine::startGame()
{
    // Event manager
    SDL_Event e;

    // InputGrabber for engine
    InputGrabber IG(&e);

    // Flag for quitting the game
    bool bQuitFlag = false;

    // Sprite for testing
    Sprite testGodzilla;
    SDL_Rect firstSpriteRect = { 29, 31, 99, 84 };
    testGodzilla.loadImage("Images/Sprites/godzilla.png", mainRenderer);
    testGodzilla.setScale(4);

    // Sprite background for testing
    Sprite testBackground;
    testBackground.loadImage("Images/Backgrounds/testBackground.png", mainRenderer);

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

            // Gathers keyboard inputs
            IG.GrabKeyEvents();
        }

        /*
         *  Processing
         */

        /*
         *  Output
         */

        // Setting the default render color and clearing screen
        SDL_SetRenderDrawColor(mainRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_RenderClear(mainRenderer);

        // Renders background sprite
        testBackground.render(0, 0, mainRenderer);

        // Renders sprite
        testGodzilla.render(160, 60, mainRenderer, &firstSpriteRect);

        // Renders to screen
        SDL_RenderPresent(mainRenderer);
    }
}