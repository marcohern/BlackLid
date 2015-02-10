//
//  Engine.h
//  BlackLid
//
//  Created by Marco Hernandez on 8/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Engine__
#define __BlackLid__Engine__

#include <stdio.h>
#include <iostream>
#include <exception>
#include <SDL2/SDL.h>

#include "Settings.h"
#include "GameException.h"
#include "Create.h"
#include "Fps.h"
#include "../input/InputCommand.h"

using namespace input;

namespace core {
    class Create;
    
    class Engine {
    private:
        bool running;
        
    protected:
        SDL_Renderer *renderer;
        SDL_Window *window;
        SDL_Surface *screen;
        Uint32 ticks;
        SDL_Event e;
        Create *create;
        InputCommand player1, player2;
        Fps fps;
        
        virtual void Update(Uint32 dt) = 0;
        virtual void Draw(Uint32 dt) = 0;
        
    public:
        Engine();
        virtual ~Engine();
    
        void Setup();
        void Run();
        void Quit();
        
        SDL_Renderer *GetRenderer();
    };
}

#endif /* defined(__BlackLid__Engine__) */
