//
//  Create.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include "Create.h"

namespace core {
    
    Create::Create(Engine *e) {
        this->e = e;
    }
    
    SDL_Surface *Create::ColorSurface(int w, int h, Uint32 rgba) {
        SDL_Surface *s = SDL_CreateRGBSurface(0, w, h, 32, 0xFF000000, 0x00FF0000, 0x0000FF00, 0x000000FF);
        
        
        SDL_SetRenderDrawColor(this->e->GetRenderer(), 255,255,255,255);
        return s;
    }
}