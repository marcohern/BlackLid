//
//  TileTestEngine.h
//  BlackLid
//
//  Created by Marco Hernandez on 12/03/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__TileTestEngine__
#define __BlackLid__TileTestEngine__

#include <stdio.h>

using namespace objects;

namespace engines {
    class TileTestEngine : public core::Engine {
    private:
        
        static const char * ss[];
        
        TileMap *map;
        
    protected:
        virtual void Update(Uint32 dt);
        virtual void Draw(Uint32 dt);
    public:
        void Setup();
        TileTestEngine();
        virtual ~TileTestEngine();
    };
}

#endif /* defined(__BlackLid__TileTestEngine__) */
