//
//  Draw.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 10/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//
#include <stdio.h>
#include <SDL2/SDL.h>
#include "Vector2D.h"
#include "Fps.h"
#include "Camera.h"
#include "../input/InputCommand.h"
#include "Engine.h"
#include "Draw.h"

namespace core {
    SDL_Point Draw::_point;
    SDL_Rect Draw::_rect;
    
    Draw::Draw(Engine *e) {
        this->e = e;
    }
    
    void Draw::Texture(SDL_Texture *t, const SDL_Rect *r) {
        _point = this->e->GetCamera()->GetSdlPosition();
        _rect.x=_point.x+r->x;
        _rect.y=_point.y+r->y;
        _rect.w=r->w;
        _rect.h=r->h;
        SDL_RenderCopy(this->e->GetRenderer(), t, NULL, &_rect);
    }
    
    void Draw::Texture(SDL_Texture *t, const SDL_Rect *r, const double angle, const SDL_Point *p,  const SDL_RendererFlip flip) {
        _point = this->e->GetCamera()->GetSdlPosition();
        _rect.x=_point.x+r->x;
        _rect.y=_point.y+r->y;
        _rect.w=r->w;
        _rect.h=r->h;
        SDL_RenderCopyEx(this->e->GetRenderer(), t, NULL, &_rect, angle, p, flip);
    }
     
    void Draw::Texture(SDL_Texture *t, const SDL_Rect *s, const SDL_Rect *r, const double angle, const SDL_Point *p,  const SDL_RendererFlip flip) {
        _point = this->e->GetCamera()->GetSdlPosition();
        _rect.x=_point.x+r->x;
        _rect.y=_point.y+r->y;
        _rect.w=r->w;
        _rect.h=r->h;
        SDL_RenderCopyEx(this->e->GetRenderer(), t, s, &_rect, angle, p, flip);
    }
    
    void Draw::Rectangle(const SDL_Rect *r, const SDL_Color *color) {
        _point = this->e->GetCamera()->GetSdlPosition();
        _rect.x=_point.x+r->x;
        _rect.y=_point.y+r->y;
        _rect.w=r->w;
        _rect.h=r->h;
        SDL_SetRenderDrawColor(this->e->GetRenderer(), color->r, color->g, color->b, color->a);
        SDL_RenderDrawRect(this->e->GetRenderer(), &_rect);
    }
    
    void Draw::Crosshair( int x, int y) {
        _point = this->e->GetCamera()->GetSdlPosition();
        _point.x+=x;
        _point.y+=y;
        SDL_SetRenderDrawColor(this->e->GetRenderer(), 255, 0, 0, 255);
        SDL_RenderDrawLine(this->e->GetRenderer(), _point.x-10, _point.y, _point.x+10, _point.y);
        SDL_RenderDrawLine(this->e->GetRenderer(), _point.x, _point.y-10, _point.x, _point.y+10);
    }
    
    void Draw::Crosshair(const Vector2D *pos) {
        return this->Crosshair(pos->GetX(), pos->GetY());
    }
}