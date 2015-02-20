//
//  Animation.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 15/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include <stdio.h>
#include <SDL2/SDL.h>
#include <string>

#include "../input/InputCommand.h"
#include "../core/Fps.h"
#include "../core/Engine.h"
#include "../core/Vector2D.h"
#include "../core/Settings.h"
#include "../core/Fps.h"
#include "../core/Draw.h"
#include "Placeable.h"
#include "Drawable.h"

#include "Animation.h"

namespace objects {
    Animation::Animation(core::Engine *e) : Drawable(e) {
        this->tpf = 0;
        this->ticks = 0;
        this->dx = 0;
        this->dy = 0;
    }
    
    Animation::~Animation() {
        
    }
    
    void Animation::Update(Uint32 dt) {
        Drawable::Update(dt);
        this->ticks += dt;
        if (this->ticks > this->tpf) {
            while (this->ticks > this->tpf) {
                this->ticks -= this->tpf;
                this->rect.x += dx;
            }
            int width, height;
            SDL_QueryTexture(this->texture, NULL, NULL, &width, &height);
            if (this->rect.x >= width) {
                this->rect.x = 0;
                this->rect.y += dy;
                if (this->rect.y >= height) {
                    this->rect.y = 0;
                }
            }
        }
    }
    
    void Animation::Draw(Uint32 dt) {
        Drawable::Draw(dt);
    }
    
    void Animation::SetTpf(int tpf) {
        this->tpf = tpf;
    }
    
    int Animation::GetTpf() {
        return this->tpf;
    }
    
    void Animation::SetDxDy(int dx, int dy) {
        this->dx = dx;
        this->dy = dy;
    }
}