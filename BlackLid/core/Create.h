//
//  Create.h
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Create__
#define __BlackLid__Create__

#include <stdio.h>
#include <SDL2/SDL.h>
#include "Engine.h"


namespace core {
    class Engine;
    
    class Create {
    private:
        core::Engine *e;
    public:
        Create(core::Engine *e);
        ~Create();
        SDL_Surface *ColorSurface(int w, int h, Uint32 rgba);
    };
}
#endif /* defined(__BlackLid__Create__) */
