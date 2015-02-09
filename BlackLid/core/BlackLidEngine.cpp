//
//  BlackLidEngine.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 8/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include "BlackLidEngine.h"

namespace core {
    
    BlackLidEngine::BlackLidEngine():Engine() {
        this->a=0;
        this->fps=0;
    }
    
    BlackLidEngine::~BlackLidEngine() {
        
    }
    
    void BlackLidEngine::Update(Uint32 dt) {
        this->a += dt;
        if (this->a > 1000) {
            printf("FPS: %d\n",this->fps);
            this->a-=1000;
            this->fps=0;
        }
    }
    
    void BlackLidEngine::Draw(Uint32 dt) {
        SDL_Rect r;
        r.w=50;
        r.h=50;
        r.x=50;
        r.y=50;
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 127);
        SDL_RenderFillRect(renderer, &r);
        this->fps++;
    }
}