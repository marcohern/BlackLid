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
    }
    
    Fps::~Fps() {
        this->fps=0;
        this->dticks=0;
        this->frames=0;
    }
    
    void Fps::Update(Uint32 dt) {
        this->dticks += dt;
        if (this->dticks > FPS_TPS) {
            this->fps = this->frames;
            this->frames = 0;
            this->dticks -= FPS_TPS;
        }
    }
    
    void Fps::Draw() {
        this->frames++;
    }
    
    Uint32 Fps::Get() {
        return this->fps;
    }
}