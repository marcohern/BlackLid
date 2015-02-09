//
//  Fps.h
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Fps__
#define __BlackLid__Fps__

#include <stdio.h>
#include <SDL2/SDL.h>

#define FPS_TPS 1000

namespace core {
    class Fps {
    private:
        Uint32 dticks;
        int frames;
        Uint32 fps;
    public:
        Fps();
        ~Fps();
        void Update(Uint32 dt);
        void Draw();
        Uint32 Get();
    };
}
#endif /* defined(__BlackLid__Fps__) */
