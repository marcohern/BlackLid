//
//  Draw.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 10/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include "Draw.h"

namespace core {
    
    Draw::Draw(Engine *e) {
        this->e = e;
    }
    
    void Draw::Texture(SDL_Texture *t, SDL_Rect *r) {
        SDL_RenderCopy(this->e->GetRenderer(), t, NULL, r);
    }
}