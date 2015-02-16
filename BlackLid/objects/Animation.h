//
//  Animation.h
//  BlackLid
//
//  Created by Marco Hernandez on 15/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Animation__
#define __BlackLid__Animation__

#include <stdio.h>
#include "Drawable.h"

using namespace core;
namespace objects {
    class Animation:public Drawable {
    protected:
    public:
        Animation(SDL_Texture *texture, SDL_Rect rect);
        virtual  ~Animation();
        
        virtual void Update(Uint32 dt) = 0;
        virtual void Draw(Uint32 dt) = 0;
    };
}
#endif /* defined(__BlackLid__Animation__) */
