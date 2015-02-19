//
//  Matrix.h
//  BlackLid
//
//  Created by Marco Hernandez on 10/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Matrix__
#define __BlackLid__Matrix__

namespace core{
    class Matrix {
    private:
        int w, h;
        float **m;
    public:
        ~Matrix();
        Matrix(const Matrix &m);
        Matrix(int w, int h);
        Matrix(int w, int h, int l, ...);
        
        static Matrix GetZero(int w, int h);
        static Matrix GetIdentity(int l);
        static Matrix Convert(const Vector2D& v, const bool horiz);
        double Get(int i, int j);
        Matrix T();
        
        void Add(Matrix m);
        void Add(float s);
        void Subtract(Matrix m);
        void Subtract(float s);
        void Multiply(float s);
    };
}
#endif /* defined(__BlackLid__Matrix__) */
