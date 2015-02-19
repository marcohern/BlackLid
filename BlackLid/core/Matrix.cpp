//
//  Matrix.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 10/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//
#include <stdio.h>
#include <sstream>
#include "Vector2D.h"
#include "Matrix.h"

namespace core {
    Matrix::~Matrix() {
        for(int i=0;i<h;i++){
            delete[] m[i];
        }
        delete[] m;
    }
    
    Matrix::Matrix(int w, int h, int l, ...) {
        va_list vl;
        this->w = w;
        this->h = h;
        int n=0;
        
        va_start(vl,l);
        this->m = new float*[h];
        for (int i=0;i<h;i++) {
            this->m[i] = new float[w];
            for (int j=0;j<w;j++) {
                if (n<l) m[i][j] = va_arg(vl, double);
                else m[i][j] = 0.0;
                n++;
            }
        }
        
        va_end(vl);
    }
    
    Matrix::Matrix(int w, int h) {
        new (this)Matrix(w,h,w*h,0);
    }
    
    Matrix::Matrix(const Matrix& m) {
        this->w = m.w;
        this->h = m.h;
        this->m = new float*[this->h];
        for (int i=0;i<this->h;i++) {
            this->m[i] = new float[this->w];
            for (int j=0;j<this->w;j++) {
                this->m[i][j] = m.m[i][j];
            }
        }
    }
    
    double Matrix::Get(int i, int j) {
        return m[i][j];
    }
    
    Matrix Matrix::T() {
        Matrix mx(this->h, this->w);
        for (int i=0;i<mx.h;i++) {
            for (int j=0;j<mx.w;j++) {
                mx.m[i][j] = this->m[j][i];
            }
        }
        return mx;
    }
    
    Matrix Matrix::GetZero(int w, int h)
    {
        Matrix z(w,h,0.0);
        return z;
    }
    
    Matrix Matrix::GetIdentity(int l) {
        Matrix ma(l,l,0.0);
        for(int i=0;i<l;i++) {
            ma.m[i][i] = 1;
        }
        return ma;
    }
    
    Matrix Matrix::Convert(const Vector2D& v, const bool horiz=true) {
        Matrix *m;
        
        if (horiz) {
            m = new Matrix(2,1,2,v.GetX(), v.GetY());
        } else {
            m = new Matrix(1,2,2,v.GetX(), v.GetY());
        }
        return *m;
    }
}