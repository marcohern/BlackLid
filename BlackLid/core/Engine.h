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

#include "GameException.h"
#include "../input/InputCommand.h"

using namespace input;

namespace core {
    class Engine {
    private:
        bool running;
        
    protected:
        SDL_Renderer *renderer;
        SDL_Window *window;
        SDL_Surface *screen;
        Uint32 ticks;
        SDL_Event e;
        InputCommand player1, player2;
        virtual void Update(Uint32 dt) = 0;
        virtual void Draw(Uint32 dt) = 0;
        
    public:
        Engine();
        virtual ~Engine();
    
        void Setup();
        void Run();
        void Quit();
    };
}

#endif /* defined(__BlackLid__Engine__) */
