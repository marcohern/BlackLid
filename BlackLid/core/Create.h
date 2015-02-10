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

#include "Vector2D.h"
#include "Engine.h"

#define CREATE_FLAGS SDL_TEXTUREACCESS_STATIC|SDL_TEXTUREACCESS_TARGET

namespace core {
    class Engine;
    
    class Create {
    private:
        core::Engine *e;
    public:
        Create(core::Engine *e);
        ~Create();
        SDL_Texture *Color(int w, int h, Uint8 r, Uint8 g, Uint8 b, Uint8 a);
        SDL_Texture *HGradient(int w, int h, Uint8 r1, Uint8 g1, Uint8 b1, Uint8 a1, Uint8 r2, Uint8 g2, Uint8 b2, Uint8 a2);
        SDL_Texture *VGradient(int w, int h, Uint8 r1, Uint8 g1, Uint8 b1, Uint8 a1, Uint8 r2, Uint8 g2, Uint8 b2, Uint8 a2);
        SDL_Texture *RGradient(int w, int h, Uint8 r1, Uint8 g1, Uint8 b1, Uint8 a1, Uint8 r2, Uint8 g2, Uint8 b2, Uint8 a2);
    };
}
#endif /* defined(__BlackLid__Create__) */
