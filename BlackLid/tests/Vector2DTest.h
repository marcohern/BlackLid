//
//  Vector2DTest.h
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Vector2DTest__
#define __BlackLid__Vector2DTest__

#include <stdio.h>
#include "../core/Test.h"
#include "../core/Assert.h"
#include "../core/Vector2D.h"

using namespace core;
namespace  tests {
    class Vector2DTest;
    typedef void (Vector2DTest::*Vector2DTestMethod)();
    
    class Vector2DTest : public Test {
    public:
        Vector2DTest();
        virtual ~Vector2DTest();
        
        virtual void Setup();
        virtual void TearDown();
        void Execute(std::string name, Vector2DTestMethod method);
        
        void Constructor_Empty_Valid();
        
        void Run();
    };
}

#endif /* defined(__BlackLid__Vector2DTest__) */
