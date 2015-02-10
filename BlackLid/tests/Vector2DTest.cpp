//
//  Vector2DTest.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include "Vector2DTest.h"

using namespace core;
using namespace exceptions;
namespace tests {
    Vector2DTest::Vector2DTest(): Test() {
        
    }
    Vector2DTest::~Vector2DTest()  {
        
    }
    
    void Vector2DTest::Execute(std::string name, Vector2DTestMethod method) {
        
        std::cout<<"RealColorTest::"<<name;
        try {
            (this->*method)();
            std::cout<<" OK!\n";
        } catch (AssertException ex) {
            std::cout<<" FAIL: "<<ex.what()<<"\n";
        }
    }
    
    void Vector2DTest::Setup() {
        Test::Setup();
    }
    
    void Vector2DTest::TearDown() {
        Test::TearDown();
    }
    
    void Vector2DTest::Constructor_Empty_Valid() {
        Vector2D a;
        
        Assert::AreEqual(a.GetX(),0.0f);
        Assert::AreEqual(a.GetY(),0.0f);
    }
    
    void Vector2DTest::Run() {
        Execute("Constructor_Empty_Valid", &Vector2DTest::Constructor_Empty_Valid);
    }
}