//
//  TileTestEngine.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 12/03/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <string>
#include "../core/define.h"

#include "../core/Settings.h"
#include "../core/Create.h"
#include "../core/Vector2D.h"
#include "../core/Draw.h"
#include "../core/List.h"

#include "../objects/Placeable.h"
#include "../objects/Drawable.h"
#include "../objects/Animation.h"
#include "../objects/Tile.h"
#include "../objects/TileMap.h"

#include "../core/Fps.h"
#include "../input/InputCommand.h"
#include "../core/Engine.h"
#include "TileTestEngine.h"


namespace engines {
    
    const char *TileTestEngine::ss[] = {
        ". ",
        " ."
    };
    
    TileTestEngine::TileTestEngine() : Engine() {
        map = new TileMap(this);
    }
    
    TileTestEngine::~TileTestEngine() {
        
    }
    
    void TileTestEngine::Setup() {
        Engine::Setup();
        map->Set(2, 2, ss);
    }
    
    void TileTestEngine::Update(Uint32 dt) {
        //Engine::Update(dt);
    }
    
    void TileTestEngine::Draw(Uint32 dt) {
        //Engine::Draw(dt);
        
    }
}