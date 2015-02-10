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
    }
    
    BlackLidEngine::~BlackLidEngine() {
        
    }
    
    void BlackLidEngine::Setup() {
        Engine::Setup();
        
        color = this->create->Color(50, 50, 255,255,255,255);
        hgradient = this->create->HGradient(50,50, 0,255,0,255, 255,0,0,255);
        vgradient = this->create->VGradient(50,50, 255,0,0,255, 0,0,255,255);
    }
    
    void BlackLidEngine::Update(Uint32 dt) {

    }
    
    void BlackLidEngine::Draw(Uint32 dt) {
        SDL_Rect r;
        r.w=50;
        r.h=50;
        r.x=50;
        r.y=50;
        
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 64);
        
        SDL_RenderFillRect(renderer, &r);
        
        r.x = 100;
        SDL_RenderCopy(renderer, this->color, NULL, &r);
        
        r.x = 150;
        SDL_RenderCopy(renderer, this->hgradient, NULL, &r);
        
        r.x = 200;
        SDL_RenderCopy(renderer, this->vgradient, NULL, &r);
    }
}