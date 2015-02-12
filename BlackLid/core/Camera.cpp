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
        position.SetXY(0, 0);
    }
    
    Camera::~Camera() {
        this->e = NULL;
        position.SetXY(0, 0);
    }
    
    void Camera::Update(Uint32 dt) {
        float fdt, fx, fy;
        InputCommand *input = this->e->GetInputCommandPlayer1();
        
        fdt = (float)dt;
        fx = position.GetX();
        fy = position.GetY();
        if (input->Up()) fy -= fdt;
        if (input->Down()) fy += fdt;
        if (input->Left()) fx -= fdt;
        if (input->Right()) fx += fdt;
        
        position.SetXY(fx, fy);
    }
}