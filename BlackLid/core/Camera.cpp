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
        this->x=0;
        this->y=0;
    }
    
    Camera::~Camera() {
        this->e = NULL;
        this->x=0;
        this->y=0;
    }
    
    void Camera::Update(Uint32 dt) {
        
    }
}