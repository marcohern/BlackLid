//
//  TileMap.h
//  BlackLid
//
//  Created by Marco Hernandez on 20/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__TileMap__
#define __BlackLid__TileMap__

namespace objects {
    class TileMap {
    protected:
        Engine *e;
        Tile ***map;
        List<Tile> tpl;
    
    public:
        TileMap(Engine *e);
        virtual ~TileMap();
        
        void AddTemplate(const char *symbol, Tile *t);
        void Set(int w, int h, const char **s);
        void Clear();
    };
}
#endif /* defined(__BlackLid__TileMap__) */
