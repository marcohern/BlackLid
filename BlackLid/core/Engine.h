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
#include "Settings.h"
#include "Create.h"
#include "Camera.h"
#include "Draw.h"
#include "Fps.h"
#include "../input/InputCommand.h"
#include "../objects/Placeable.h"

using namespace input;

namespace objects {
    class Placeable;
}

namespace core {
    class Camera;
    class Create;
    class Draw;
    
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
        Draw *draw;
        InputCommand player1, player2;
        Fps fps;
        Camera *camera;
        
        virtual void Update(Uint32 dt) = 0;
        virtual void Draw(Uint32 dt) = 0;
        
    public:
        Engine();
        virtual ~Engine();
    
        void Setup();
        void Run();
        void Quit();
        
        SDL_Renderer *GetRenderer();
        InputCommand *GetInputCommandPlayer1();
        Camera *GetCamera();
        class Draw *GetDraw();
    };
}

#endif /* defined(__BlackLid__Engine__) */
