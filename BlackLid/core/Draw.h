//
//  Draw.h
//  BlackLid
//
//  Created by Marco Hernandez on 10/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Draw__
#define __BlackLid__Draw__

#include <stdio.h>
#include "Engine.h"

namespace core {
    class Engine;
    
    class Draw {
    private:
        Engine *e;
        
    public:
        Draw(Engine *e);
        void Texture(SDL_Texture *t, SDL_Rect *r);
    };
}
#endif /* defined(__BlackLid__Draw__) */
