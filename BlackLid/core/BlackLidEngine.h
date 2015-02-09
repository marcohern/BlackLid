//
//  BlackLidEngine.h
//  BlackLid
//
//  Created by Marco Hernandez on 8/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__BlackLidEngine__
#define __BlackLid__BlackLidEngine__

#include <stdio.h>
#include "Engine.h"

namespace core {
    class BlackLidEngine: public Engine {
        Uint32 a;
        Uint32 fps;
    protected:
        virtual void Update(Uint32 dt);
        virtual void Draw(Uint32 dt);
    public:
        BlackLidEngine();
        virtual ~BlackLidEngine();
    };
}
#endif /* defined(__BlackLid__BlackLidEngine__) */
