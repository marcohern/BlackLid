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
        
        color     = this->create->Color    (64,64, 255,255,255,255);
        hgradient = this->create->HGradient(64,64, 000,255,000,255, 000,255,000,196);
        vgradient = this->create->VGradient(64,64, 255,000,000,255, 000,000,255,000);
        rgradient = this->create->RGradient(64,64, 255,255,000,255, 255,255,000,000);
    }
    
    void BlackLidEngine::Update(Uint32 dt) {
        this->angle += 0.125*(double)dt;
    }
    
    void BlackLidEngine::Draw(Uint32 dt) {
        SDL_Rect r;
        r.w=64;
        r.h=64;
        r.x=32;
        r.y=32;
        SDL_Point p;p.x=32;p.y=32;
        
        draw->Texture(this->color, &r, this->angle, &p, SDL_FLIP_NONE);
        
        r.x += 64;
        draw->Texture(this->hgradient, &r, this->angle, &p, SDL_FLIP_NONE);
        
        r.x += 64;
        draw->Texture(this->vgradient, &r, this->angle, &p, SDL_FLIP_NONE);
        
        r.x += 64;
        draw->Texture(this->rgradient, &r, this->angle, &p, SDL_FLIP_NONE);

    }
}