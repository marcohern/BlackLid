//
//  Assert.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//
#include <stdio.h>
#include <string>
#include <iostream>
#include <sstream>
#include "Vector2D.h"

#include "GameException.h"
#include "../exceptions/AssertException.h"

#include "Assert.h"

using namespace exceptions;

namespace core {
    void Assert::AreEqual(int a, int b) {
        if (!(a==b)) {
            s.str(std::string());
            s<<"AreEqual("<<a<<","<<b<<") failed!";
            throw AssertException(s.str());
        }
    }
    void Assert::AreEqual(float a, float b) {
        float e = a - b;
        float l = 0.00001f;
        if (-l < e && e < l) return;
        
        s.str(std::string());
        s<<"AreEqual("<<a<<"f,"<<b<<"f) failed!";
        throw AssertException(s.str());
        
    }
    
    void Assert::AreEqual(Vector2D a, Vector2D b) {
        if (!a.Equals(b)) {
            s.str(std::string());
            s<<"AreEqual(<"<<a.GetX()<<","<<a.GetY()<<">,<"<<b.GetX()<<","<<b.GetY()<<">) failed!";
            throw AssertException(s.str());
        }
    }
    
    std::stringstream Assert::s;
}