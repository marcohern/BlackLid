//
//  TileMap.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 20/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//
#include <stdio.h>
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

#include "TileMap.h"

namespace objects {
    TileMap::TileMap(Engine *e) {
        this->e = e;
        map = NULL;
    }
    
    TileMap::~TileMap() {
        this->e = NULL;
        map = NULL;
    }
    
    void TileMap::AddTemplate(const char *symbol, Tile *t) {
        this->tpl.Add(symbol, t);
    }
    
    void TileMap::SetTileSize(int w, int h) {
        this->twidth = w;
        this->theight = h;
    }
    
    void TileMap::Set(int w, int h, const char **s) {
        int i,j;
        char id[2];
        id[0] = ' ';
        id[1] = '\0';
        this->width = w;
        this->height = h;
        map = new Tile**[h];
        for (i=0;i<h;i++) {
            map[i] = new Tile*[w];
            for (j=0;j<w;j++) {
                map[i][j] = NULL;
                id[0] = s[i][j];
                Tile *t = this->tpl.Find(id);
                if (t!=NULL) {
                    map[i][j] = t;
                }
            }
        }
    }
    
    void TileMap::Update(Uint32 dt) {
        int i,j;
        for (i=0; i<height; i++) {
            for (j=0; j<width; j++) {
                if (map[i][j] != NULL) {
                    map[i][j]->Update(dt);
                }
            }
        }
    }
    
    void TileMap::Draw(Uint32 dt) {
        int i,j;
        for (i=0; i<height; i++) {
            for (j=0; j<width; j++) {
                if (map[i][j] != NULL) {
                    map[i][j]->SetXY(j*twidth,i*theight);
                    map[i][j]->Draw(dt);
                }
            }
        }
    }
}