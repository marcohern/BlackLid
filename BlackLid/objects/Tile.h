//
//  Tile.h
//  BlackLid
//
//  Created by Marco Hernandez on 20/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Tile__
#define __BlackLid__Tile__


namespace objects {
    
    typedef enum {
        TILEFLAG_NONE      = 0x0000,
        TILEFLAG_SOLID     = 0x0001,
        TILEFLAG_LIQUID    = 0x0002,
        TILEFLAG_CORROSIVE = 0x0004
    }TileFlag;
    
    class Tile : public Animation {
    protected:
        List<SDL_Rect> colliders;
        TileFlag flag;
        
    public:
        Tile(Engine *e);
        virtual ~Tile();
        
        TileFlag GetFlag();
        List<SDL_Rect> *GetColliders();
    };
}
#endif /* defined(__BlackLid__Tile__) */
