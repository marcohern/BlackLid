//
//  Vector2D.h
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Vector2D__
#define __BlackLid__Vector2D__

#include <stdio.h>
#include <math.h>

namespace core {
    class Vector2D {
    private:
        float x, y;
    public:
        Vector2D();
        Vector2D(float x, float y);
        Vector2D(Vector2D const &v);
        
        void SetXY(float x, float y);
        void SetX(float x);
        void SetY(float y);
        float GetX() const;
        float GetY() const;
        float GetM();
        
        void Add(Vector2D v);
        void Subtract(Vector2D v);
        void Multiply(float s);
        float Multiply(Vector2D v);
        float GetAngleBetween(Vector2D v);
        Vector2D Unit();
        bool Equals(Vector2D v);
    };
}
#endif /* defined(__BlackLid__Vector2D__) */
