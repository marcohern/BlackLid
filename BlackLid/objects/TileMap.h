//
//  TileMap.h
//  BlackLid
//
//  Created by Marco Hernandez on 20/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__TileMap__
#define __BlackLid__TileMap__

namespace core {
    class Engine;
}

namespace objects {
    class TileMap {
    protected:
        Engine *e;
        Tile ***map;
        List<Tile> tpl;
        int width, height; //with and height of layer in # of tiles
        int twidth, theight; //with and height of all tiles
    
    public:
        TileMap(Engine *e);
        virtual ~TileMap();
        
        void AddTemplate(const char *symbol, Tile *t);
        void SetTileSize(int w, int h);
        void Set(int w, int h, const char **s);
        void Clear();
        
        void Update(Uint32 dt);
        void Draw(Uint32 dt);
    };
}
#endif /* defined(__BlackLid__TileMap__) */
