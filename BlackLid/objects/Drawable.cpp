//
//  Drawable.cpp
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
#include "../core/define.h"
#include "../core/Settings.h"
#include "../core/Fps.h"
#include "../core/Draw.h"
#include "Placeable.h"

#include "Drawable.h"

namespace objects{
    SDL_Rect Drawable::_rect;
    SDL_Point Drawable::_pivot;
    SDL_Color Drawable::_color;
    
    Drawable::Drawable(core::Engine *e):Placeable(e) {
        this->texture = NULL;
        this->pivot.SetXY(0.0, 0.0);
        this->angle = 0.0;
        this->flip = SDL_FLIP_NONE;
        this->scale = 1.0;
    }
    
    Drawable::~Drawable() {
        this->e = NULL;
        this->texture = NULL;
        this->pivot.SetXY(0.0, 0.0);
        this->angle = 0.0;
        this->flip = SDL_FLIP_NONE;
        this->scale = 0.0;
    }
    
    
    void Drawable::Update(Uint32 dt) {
        Placeable::Update(dt);
    }
    
    void Drawable::Draw(Uint32 dt) {
        _pivot.x = pivot.GetX();
        _pivot.y = pivot.GetY();
        _rect.x = position.GetX();
        _rect.y = position.GetY();
        _rect.w = this->rect.w*this->scale;
        _rect.h = this->rect.h*this->scale;
        this->e->GetDraw()->Texture(this->texture, &this->rect, &_rect, this->angle, &_pivot, this->flip);
        
        if (Settings::GetInstance()->DrawReferences()) {
            _color.r=0;_color.b=0;_color.g=255;_color.a=127;
            this->e->GetDraw()->Rectangle(&_rect, &_color);
        }
        Placeable::Draw(dt);
    }
    
    void Drawable::SetTexture(SDL_Texture *t) {
        this->texture = t;
    }
    
    void Drawable::SetRect(const SDL_Rect *r) {
        this->rect.x = r->x;
        this->rect.y = r->y;
        this->rect.w = r->w;
        this->rect.h = r->h;
    }
    
    void Drawable::SetRect(int x, int y, int w, int h) {
        this->rect.x = x;
        this->rect.y = y;
        this->rect.w = w;
        this->rect.h = h;
    }
    
    void Drawable::SetRectX(int x) {
        this->rect.x = x;
    }
    
    void Drawable::SetRectY(int y) {
        this->rect.y = y;
    }
    
    void Drawable::SetRectXY(int x, int y) {
        this->rect.x = x;
        this->rect.y = y;
    }
    
    void Drawable::SetRectWH(int w, int h) {
        this->rect.w = w;
        this->rect.h = h;
    }
    
    void Drawable::AddRectX(int dx) {
        this->rect.x += dx;
    }
    
    void Drawable::AddRectY(int dy) {
        this->rect.y += dy;
    }
    
    void Drawable::AddRectXY(int dx, int dy) {
        this->rect.x += dx;
        this->rect.y += dy;
    }
    
    void Drawable::AddRectXY(const core::Vector2D *v) {
        this->rect.x += v->GetX();
        this->rect.y += v->GetY();
    }
    
    void Drawable::SetScale(float scale) {
        this->scale = scale;
    }
    
    float Drawable::GetScale() {
        return this->scale;
    }
}