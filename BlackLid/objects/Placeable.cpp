//
//  Placeable.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 15/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include "Placeable.h"

using namespace core;

namespace objects {
    SDL_Point Placeable::_point;
    Vector2D Placeable::_p;
    
    Placeable::Placeable(Engine *e) {
        this->e = e;
        this->position.SetXY(0.0, 0.0);
    }
    
    Placeable::~Placeable() {
        this->e = NULL;
        this->position.SetXY(0.0, 0.0);
    }
    
    void Placeable::Update(Uint32 dt) {
        
    }
    
    void Placeable::Draw(Uint32 dt) {
        if (Settings::GetInstance()->DrawReferences()) {
            this->e->GetDraw()->Crosshair(&this->position);
        }
    }
    
    void Placeable::SetX(float x) {
        this->position.SetX(x);
    }
    
    void Placeable::SetY(float y) {
        this->position.SetY(y);
    }
    
    void Placeable::SetXY(float x, float y) {
        this->position.SetXY(x, y);
    }
    
    void Placeable::AddX(float dx){
        this->position.AddX(dx);
    }
    
    void Placeable::AddY(float dy){
        this->position.AddY(dy);
    }
    
    void Placeable::AddXY(float dx, float dy) {
        this->_p.SetXY(dx, dy);
        this->position.Add(&_p);
    }
}