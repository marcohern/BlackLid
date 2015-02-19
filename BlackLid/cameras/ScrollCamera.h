//
//  ScrollCamera.h
//  BlackLid
//
//  Created by Marco Hernandez on 12/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__ScrollCamera__
#define __BlackLid__ScrollCamera__


using namespace core;

namespace cameras {
    class ScrollCamera: public Camera {
    private:
        float speed;
    public:
        ScrollCamera(Engine *e);
        virtual ~ScrollCamera();
        
        void Update(Uint32 dt);
    };
}

#endif /* defined(__BlackLid__ScrollCamera__) */
