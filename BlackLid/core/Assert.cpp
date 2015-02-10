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
    bool Assert::AreEqual(int a, int b) {
        bool r = (a==b);
        if (!r) throw AssertException("AreEqual(int,int) failed!");
        return r;
    }
    bool Assert::AreEqual(float a, float b) {
        return (a==b);
    }
    
    bool Assert::AreEqual(Vector2D a, Vector2D b) {
        return a.Equals(b);
    }
}