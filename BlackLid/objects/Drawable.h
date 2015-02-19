//
//  Drawable.h
//  BlackLid
//
//  Created by Marco Hernandez on 15/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Drawable__
#define __BlackLid__Drawable__


namespace objects {
    class Drawable: public Placeable {
    protected:
        static SDL_Rect _rect;
        static SDL_Point _pivot;
        
        SDL_Rect rect;
        Vector2D pivot;
        
        SDL_Texture *texture;
        double angle;
        SDL_RendererFlip flip;
        
    public:
        Drawable(core::Engine *e);
        virtual ~Drawable();
        
        void Update(Uint32 dt);
        void Draw(Uint32 dt);
        
        void SetTexture(SDL_Texture *t);
        void SetRect(const SDL_Rect *r);
        void SetRect(int x, int y, int w, int h);
        void SetRectX(int x);
        void SetRectY(int y);
        void SetRectXY(int x, int y);
        void SetRectWH(int w, int h);
        
        void AddRectX(int dx);
        void AddRectY(int dy);
        void AddRectXY(int dx, int dy);
        void AddRectXY(const Vector2D *v);
    };
}
#endif /* defined(__BlackLid__Drawable__) */
