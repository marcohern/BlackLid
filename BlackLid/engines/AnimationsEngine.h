//
//  AnimationsEngine.h
//  BlackLid
//
//  Created by Marco Hernandez on 12/03/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__AnimationsEngine__
#define __BlackLid__AnimationsEngine__

#include <stdio.h>

namespace engines {
    class AnimationsEngine: public core::Engine {
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
        AnimationsEngine();
        virtual ~AnimationsEngine();
    };
}


#endif /* defined(__BlackLid__AnimationsEngine__) */
