//
//  Draw.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 10/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include "Draw.h"

namespace core {
    
    Draw::Draw(Engine *e) {
        this->e = e;
    }
    
    void Draw::Texture(SDL_Texture *t, const SDL_Rect *r) {
        SDL_Point p = this->e->GetCamera()->GetSdlPosition();
        SDL_Rect rr;
        rr.x=p.x+r->x;
        rr.y=p.y+r->y;
        rr.w=r->w;
        rr.h=r->h;
        SDL_RenderCopy(this->e->GetRenderer(), t, NULL, &rr);
    }
    
    void Draw::Texture(SDL_Texture *t, SDL_Rect *r, double angle, SDL_Point *p, SDL_RendererFlip flip) {
        SDL_Point px = this->e->GetCamera()->GetSdlPosition();
        SDL_Rect rr;
        rr.x=px.x+r->x;
        rr.y=px.y+r->y;
        rr.w=r->w;
        rr.h=r->h;
        SDL_RenderCopyEx(this->e->GetRenderer(), t, NULL, &rr, angle, p, flip);
    }
}