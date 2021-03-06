//
//  Placeable.h
//  BlackLid
//
//  Created by Marco Hernandez on 15/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Placeable__
#define __BlackLid__Placeable__


using namespace core;

namespace core {
    class Engine;
    class Vector2D;
}
namespace objects {
    class Placeable {
    private:
        
    protected:
        static SDL_Point _point;
        static Vector2D _p;
        
        Engine *e;
        Vector2D position;
        Vector2D speed;
        
    public:
        Placeable(Engine *e);
        virtual ~Placeable();
        void Update(Uint32 dt);
        void Draw(Uint32 dt);
        
        void SetX(float x);
        void SetY(float y);
        void SetXY(float x, float y);
        void SetXY(const Vector2D *v);
        void AddX(float dx);
        void AddY(float dy);
        void AddXY(float dx, float dy);
        void AddXY(const Vector2D *v);
        
    };
}

#endif /* defined(__BlackLid__Placeable__) */
