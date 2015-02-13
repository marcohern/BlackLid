//
//  Camera.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 8/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include "Camera.h"

namespace core{
    Camera::Camera(Engine *e) {
        this->e = e;
        position.SetXY(0.0, 0.0);
    }
    
    Camera::~Camera() {
        this->e = NULL;
        position.SetXY(0.0, 0.0);
    }
    
    SDL_Point Camera::GetSdlPosition() {
        SDL_Point p;
        p.x = position.GetX();
        p.y = position.GetY();
        return p;
    }
    
    Vector2D Camera::GetPosition() {
        return position;
    }
}