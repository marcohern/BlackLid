//
//  Create.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include "Create.h"

#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y

namespace core {
    
    Create::Create(Engine *e) {
        this->e = e;
    }
    
    SDL_Texture *Create::Color(int w, int h, Uint8 r, Uint8 g, Uint8 b, Uint8 a) {
        SDL_Texture *t = SDL_CreateTexture(this->e->GetRenderer(), SDL_PIXELFORMAT_RGBA4444, CREATE_FLAGS, w, h);
        
        SDL_Rect rect;rect.x=0;rect.y=0;rect.w=w;rect.h=h;
        
        SDL_SetRenderTarget(this->e->GetRenderer(), t);
        SDL_SetRenderDrawColor(this->e->GetRenderer(), r, g, b, a);
        SDL_RenderFillRect(this->e->GetRenderer(), NULL);
        
        return t;
    }
    
    SDL_Texture *Create::HGradient(int w, int h, Uint8 r1, Uint8 g1, Uint8 b1, Uint8 a1, Uint8 r2, Uint8 g2, Uint8 b2, Uint8 a2) {
        float fr1 = r1, fg1 = g1, fb1 = b1, fa1 = a1;
        float fr2 = r2, fg2 = g2, fb2 = b2, fa2 = a2;
        float fw = w;
        float dr, dg, db, da;
        float ar=fr1, ag=fg1, ab=fb1, aa=fa1;
        
        dr = (fr2 - fr1)/fw;
        dg = (fg2 - fg1)/fw;
        db = (fb2 - fb1)/fw;
        da = (fa2 - fa1)/fw;
        
        SDL_Texture *t = SDL_CreateTexture(this->e->GetRenderer(), SDL_PIXELFORMAT_RGBA4444, CREATE_FLAGS, w, h);
        
        SDL_Rect rect;rect.x=0;rect.y=0;rect.w=1;rect.h=h;
        
        SDL_SetRenderTarget(this->e->GetRenderer(), t);
        for (int i=0;i<w;i++) {
            rect.x = i;
            ar += dr;
            ag += dg;
            ab += db;
            aa += da;
            SDL_SetRenderDrawColor(this->e->GetRenderer(), (Uint8)ar, (Uint8)ag, (Uint8)ab, (Uint8)aa);
            SDL_RenderFillRect(this->e->GetRenderer(), &rect);
        }
        
        return t;
    }
}