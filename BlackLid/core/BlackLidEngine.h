//
//  BlackLidEngine.h
//  BlackLid
//
//  Created by Marco Hernandez on 8/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__BlackLidEngine__
#define __BlackLid__BlackLidEngine__

namespace core {
    class BlackLidEngine: public Engine {
    private:
        static SDL_Color _color;
        
        Uint32 a;
        SDL_Texture *color;
        SDL_Texture *hgradient;
        SDL_Texture *vgradient;
        SDL_Texture *rgradient;
        
        objects::Placeable *placeable;
        objects::Drawable *drawable;
        SDL_Texture *drawabletex;
        objects::Animation *animation;
        SDL_Texture *animationtex;
        objects::Tile *tile;
        SDL_Texture *tiletex;
        
        double angle;
    protected:
        virtual void Update(Uint32 dt);
        virtual void Draw(Uint32 dt);
    public:
        void Setup();
        BlackLidEngine();
        virtual ~BlackLidEngine();
    };
}
#endif /* defined(__BlackLid__BlackLidEngine__) */
