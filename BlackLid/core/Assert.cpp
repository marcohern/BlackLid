//
//  Assert.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include "Assert.h"

namespace core {
    bool Assert::AreEqual(int a, int b) {
        return (a==b);
    }
    bool Assert::AreEqual(float a, float b) {
        return (a==b);
    }
    
    bool Assert::AreEqual(Vector2D a, Vector2D b) {
        return a.Equals(b);
    }
}