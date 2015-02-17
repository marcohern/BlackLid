//
//  Drawable.h
//  BlackLid
//
//  Created by Marco Hernandez on 15/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Drawable__
#define __BlackLid__Drawable__

#include <stdio.h>
#include "Placeable.h"

namespace objects {
    class Drawable: public Placeable {
    protected:
        static SDL_Rect _rect;
        
        SDL_Rect rect;
        SDL_Texture *texture;
    public:
        Drawable(core::Engine *e);
        virtual ~Drawable();
        
        void Draw(Uint32 dt);
    };
}
#endif /* defined(__BlackLid__Drawable__) */
