//
//  ScrollCamera.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 12/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include "ScrollCamera.h"
using namespace core;

namespace cameras {
    
    ScrollCamera::ScrollCamera(Engine *e) : Camera(e) {
        speed = 0.25f;
    }
    
    ScrollCamera::~ScrollCamera() {
    }
    
    void ScrollCamera::Update(Uint32 dt) {
        float fdt, fx, fy;
        InputCommand *input = this->e->GetInputCommandPlayer1();
        
        fdt = (float)dt;
        fx = position.GetX();
        fy = position.GetY();
        if (input->Up()) fy -= fdt*speed;
        if (input->Down()) fy += fdt*speed;
        if (input->Left()) fx -= fdt*speed;
        if (input->Right()) fx += fdt*speed;
        
        position.SetXY(fx, fy);
    }
}