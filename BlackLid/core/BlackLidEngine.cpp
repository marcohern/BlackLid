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
        
        color = this->create->Color(64,64, 255,255,255,255);
        hgradient = this->create->HGradient(64,64, 0,255,0,255, 255,0,0,0);
        vgradient = this->create->VGradient(64,64, 255,0,0,255, 0,0,255,0);
        rgradient = this->create->RGradient(64,64, 255,255,0,255, 255,255,0,0);
    }
    
    void BlackLidEngine::Update(Uint32 dt) {

    }
    
    void BlackLidEngine::Draw(Uint32 dt) {
        SDL_Rect r;
        r.w=64;
        r.h=64;
        r.x=32;
        r.y=32;
        
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 64);
        
        SDL_RenderFillRect(renderer, &r);
        
        r.x += 64;
        draw->Texture(this->color, &r);
        
        r.x += 64;
        draw->Texture(this->hgradient, &r);
        
        r.x += 64;
        draw->Texture(this->vgradient, &r);
        
        r.x += 64;
        draw->Texture(this->rgradient, &r);

    }
}