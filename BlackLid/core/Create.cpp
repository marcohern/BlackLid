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
    
    SDL_Texture *Create::ColorSurface(int w, int h, Uint8 r, Uint8 g, Uint8 b, Uint8 a) {
        SDL_Texture *t = SDL_CreateTexture(this->e->GetRenderer(), SDL_PIXELFORMAT_RGBA4444, CREATE_FLAGS, w, h);
        
        SDL_Rect rect;rect.x=0;rect.y=0;rect.w=w;rect.h=h;
        
        SDL_SetRenderTarget(this->e->GetRenderer(), t);
        SDL_SetRenderDrawColor(this->e->GetRenderer(), r, g, b, a);
        SDL_RenderFillRect(this->e->GetRenderer(), NULL);
        
        return t;
    }
}