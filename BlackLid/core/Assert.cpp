//
//  Assert.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include "Assert.h"

using namespace exceptions;

namespace core {
    void Assert::AreEqual(int a, int b) {
        if (!(a==b)) throw AssertException("AreEqual(int,int) failed!");
    }
    void Assert::AreEqual(float a, float b) {
        if (!(a==b)) throw AssertException("AreEqual(float,float) failed!");
    }
    
    void Assert::AreEqual(Vector2D a, Vector2D b) {
        if (!a.Equals(b)) throw AssertException("AreEqual(Vector2D,Vector2D) failed!");
    }
}