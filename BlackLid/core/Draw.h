//
//  Draw.h
//  BlackLid
//
//  Created by Marco Hernandez on 10/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Draw__
#define __BlackLid__Draw__

namespace core {
    class Engine;
    
    class Draw {
    private:
        Engine *e;
        static SDL_Point _point;
        static SDL_Rect _rect;
        
    public:
        Draw(Engine *e);
        void Texture(SDL_Texture *t, const SDL_Rect *r);
        void Texture(SDL_Texture *t, const SDL_Rect *r, const double angle,  const SDL_Point *p,  const SDL_RendererFlip flip);
        void Texture(SDL_Texture *t, const SDL_Rect *s, const SDL_Rect *r, const double angle,  const SDL_Point *p,  const SDL_RendererFlip flip);
        
        void Crosshair(int x, int y);
        void Crosshair(const Vector2D *pos);
    };
}
#endif /* defined(__BlackLid__Draw__) */
