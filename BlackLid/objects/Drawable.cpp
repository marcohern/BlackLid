//
//  Drawable.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 15/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include "Drawable.h"

namespace objects{
    Drawable::Drawable(core::Engine *e):Placeable(e) {
        this->e = e;
    }
    
    Drawable::~Drawable() {
        
    }
    
    void Drawable::Draw(Uint32 dt){
        
    }
}