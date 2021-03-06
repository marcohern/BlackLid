//
//  Camera.h
//  BlackLid
//
//  Created by Marco Hernandez on 8/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Camera__
#define __BlackLid__Camera__

namespace core {
    class Engine;
    
    class Camera {
    protected:
        Vector2D position;
        Engine *e;
    public:
        Camera(Engine *e);
        virtual ~Camera();
        
        virtual void Update(Uint32 dt) = 0;
        Vector2D GetPosition();
        SDL_Point GetSdlPosition();
        void SetPosition(float x, float y);
    };
}

#endif /* defined(__BlackLid__Camera__) */
