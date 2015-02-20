//
//  Animation.h
//  BlackLid
//
//  Created by Marco Hernandez on 15/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Animation__
#define __BlackLid__Animation__

using namespace core;
namespace objects {
    class Animation:public Drawable {
    protected:
        int dx, dy;
        int tpf;
        Uint32 ticks;
    public:
        Animation(Engine *e);
        virtual  ~Animation();
        
        void Update(Uint32 dt);
        void Draw(Uint32 dt);
        
        void SetTpf(int tpf);
        int GetTpf();
        
        void SetDxDy(int dx, int dy);
    };
}
#endif /* defined(__BlackLid__Animation__) */
