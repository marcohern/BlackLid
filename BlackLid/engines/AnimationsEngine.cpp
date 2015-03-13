//
//  AnimationsEngine.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 12/03/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//



#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <string>

#include "../core/Settings.h"
#include "../core/Create.h"
#include "../core/Vector2D.h"
#include "../core/Draw.h"
#include "../core/List.h"

#include "../objects/Placeable.h"
#include "../objects/Drawable.h"
#include "../objects/Animation.h"
#include "../objects/Tile.h"

#include "../core/Fps.h"
#include "../input/InputCommand.h"
#include "../core/Engine.h"
#include "AnimationsEngine.h"

namespace engines {
    
    SDL_Color AnimationsEngine::_color;
    
    AnimationsEngine::AnimationsEngine():Engine() {
        this->a=0;
    }
    
    AnimationsEngine::~AnimationsEngine() {
        
    }
    
    void AnimationsEngine::Setup() {
        Engine::Setup();
        
        color     = this->create->Color    (128,128, 255,255,255,255);
        hgradient = this->create->HGradient(128,128, 000,255,000,255, 000,255,000,196);
        vgradient = this->create->VGradient(128,128, 255,000,000,255, 000,000,255,000);
        rgradient = this->create->RGradient(128,128, 255,255,000,255, 255,255,000,000);
        
        placeable = new objects::Placeable(this);
        placeable->SetXY(32, 300);
        
        std::string path = Settings::GetInstance()->GetResource("/test/spaceship.png");
        drawabletex = IMG_LoadTexture(this->renderer, path.c_str());
        drawable = new objects::Drawable(this);
        drawable->SetXY(132, 300);
        drawable->SetTexture(drawabletex);
        drawable->SetRect(0,0,96,96);
        
        path = Settings::GetInstance()->GetResource("/test/explosion.png");
        animationtex = IMG_LoadTexture(this->renderer, path.c_str());
        animation = new objects::Animation(this);
        animation->SetXY(232, 300);
        animation->SetTexture(animationtex);
        animation->SetRect(0,0,100,100);
        animation->SetDxDy(100, 100);
        animation->SetTpf(32);
        animation->SetScale(4.0);
        
        path = Settings::GetInstance()->GetResource("/test/tile-rocks.png");
        tiletex = IMG_LoadTexture(this->renderer, path.c_str());
        tile = new objects::Tile(this);
        tile->SetXY(300,300);
        tile->SetTexture(tiletex);
        tile->SetRect(0,0,128,128);
        tile->SetTpf(32);
        
    }
    
    void AnimationsEngine::Update(Uint32 dt) {
        this->angle += 0.0625*(double)dt;
        animation->Update(dt);
        tile->Update(dt);
    }
    
    void AnimationsEngine::Draw(Uint32 dt) {
        SDL_Rect r;
        r.w=128;
        r.h=128;
        r.x=32;
        r.y=32;
        SDL_Point p;p.x=64;p.y=64;
        
        draw->Texture(this->color, &r, this->angle, &p, SDL_FLIP_NONE);
        
        r.x += 64;
        draw->Texture(this->hgradient, &r, this->angle, &p, SDL_FLIP_NONE);
        
        r.x += 64;
        draw->Texture(this->vgradient, &r, this->angle, &p, SDL_FLIP_NONE);
        
        r.x += 64;
        draw->Texture(this->rgradient, &r, 0.0, &p, SDL_FLIP_NONE);
        
        placeable->Draw(dt);
        drawable->Draw(dt);
        animation->Draw(dt);
        tile->Draw(dt);
        _color.r=0;_color.g=255;_color.b=0;_color.a=127;
        
    }
}