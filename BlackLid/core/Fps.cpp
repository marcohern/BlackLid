//
//  Fps.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include "Fps.h"

namespace core {
    Fps::Fps() {
        this->fps=0;
        this->dticks=0;
        this->frames=0;
        this->updated=false;
    }
    
    Fps::~Fps() {
        this->fps=0;
        this->dticks=0;
        this->frames=0;
        this->updated=false;
    }
    
    void Fps::Update(Uint32 dt) {
        this->dticks += dt;
        this->updated=false;
        if (this->dticks > TPS) {
            printf("FPS: %d\n",this->frames);
            this->fps = this->frames;
            this->frames = 0;
            this->dticks -= TPS;
            this->updated = true;
        }
    }
    
    void Fps::Draw() {
        this->frames++;
    }
    
    Uint32 Fps::Get() {
        return this->fps;
    }
    
    bool Fps::IsUpdated() {
        return this->updated;
    }
}