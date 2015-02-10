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
        if (!(a==b)) {
            s.str(std::string());
            s<<"AreEqual("<<a<<","<<b<<") failed!";
            throw AssertException(s.str());
        }
    }
    void Assert::AreEqual(float a, float b) {
        float e = a - b;
        if (e > 0.00000001f) {
            s.str(std::string());
            s<<"AreEqual("<<a<<"f,"<<b<<"f) failed!";
            throw AssertException(s.str());
        }
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