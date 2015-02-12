//
//  Camera.h
//  BlackLid
//
//  Created by Marco Hernandez on 8/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Camera__
#define __BlackLid__Camera__

#include <stdio.h>
#include "Engine.h"

namespace core {
    class Camera {
    private:
        Engine *e;
        Vector2D position;
    public:
        Camera(Engine *e);
        ~Camera();
        
        void Update(Uint32 dt);
    };
}

#endif /* defined(__BlackLid__Camera__) */
