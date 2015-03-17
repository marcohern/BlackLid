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
#include "../core/Camera.h"

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
        "...o.oOOo.o.o.oooo",
        "..o o   .   .  ...",
        "                  ",
        "                  ",
        "                  ",
        "  o  .      .o.   ",
        ".oOo.o..oo..oOo..."
    };
    
    TileTestEngine::TileTestEngine() : Engine() {
        map = new TileMap(this);
    }
    
    TileTestEngine::~TileTestEngine() {
        
    }
    
    void TileTestEngine::Setup() {
        Engine::Setup();
        
        std::string path = Settings::GetInstance()->GetResourcePath("/test/tile-rocks.png");
        tiletex = IMG_LoadTexture(this->renderer, path.c_str());
        tile = new objects::Tile(this);
        tile->SetTexture(tiletex);
        tile->SetRect(0,0,128,128);
        tile->SetTpf(32);
        
        path = Settings::GetInstance()->GetResourcePath("/test/tile-rocks-d1.png");
        tiletex = IMG_LoadTexture(this->renderer, path.c_str());
        tiled1 = new objects::Tile(this);
        tiled1->SetTexture(tiletex);
        tiled1->SetRect(0,0,128,128);
        tiled1->SetTpf(32);
        
        path = Settings::GetInstance()->GetResourcePath("/test/tile-rocks-d2.png");
        tiletex = IMG_LoadTexture(this->renderer, path.c_str());
        tiled2 = new objects::Tile(this);
        tiled2->SetTexture(tiletex);
        tiled2->SetRect(0,0,128,128);
        tiled2->SetTpf(32);
        
        
        map->AddTemplate(".", tile);
        map->AddTemplate("o", tiled1);
        map->AddTemplate("O", tiled2);
        map->SetTileSize(128,128);
        map->Set(18, 7, ss);
        
        path = Settings::GetInstance()->GetResourcePath("/test/filter_radial_b.png");
        filtertex = IMG_LoadTexture(this->renderer, path.c_str());
        fr.w=1280;fr.h=720;fr.x=0;fr.y=0;
        
        this->camera->SetPosition(0.0,-64.0);
    }
    
    void TileTestEngine::Update(Uint32 dt) {
        map->Update(dt);
    }
    
    void TileTestEngine::Draw(Uint32 dt) {
        map->Draw(dt);
        SDL_RenderCopy(this->GetRenderer(), filtertex, NULL, &fr);
    }
}