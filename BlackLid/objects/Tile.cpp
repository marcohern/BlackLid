//
//  Tile.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 20/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include <stdio.h>
#include <SDL2/SDL.h>
#include <string>

#include "../core/define.h"

#include "../input/InputCommand.h"
#include "../core/List.h"
#include "../core/Fps.h"
#include "../core/Engine.h"
#include "../core/Vector2D.h"
#include "../core/Settings.h"
#include "../core/Fps.h"
#include "../core/Draw.h"
#include "Placeable.h"
#include "Drawable.h"
#include "Animation.h"

#include "Tile.h"

namespace objects {
    Tile::Tile(Engine *e) : Animation(e) {
        this->flag = TILEFLAG_NONE;
        this->colliders.Clear();
    }
    
    Tile::~Tile() {
        this->flag = TILEFLAG_NONE;
        this->colliders.Clear();
    }
    
    TileFlag Tile::GetFlag() {
        return this->flag;
    }
    
    List<SDL_Rect> *Tile::GetColliders() {
        return &this->colliders;
    }
}