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
        
        std::cout<<"Vector2DTest::"<<name;
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
    
    void Vector2DTest::Constructor_NonEmpty_Valid() {
        Vector2D a(2.45f,3.71f);
        
        Assert::AreEqual(a.GetX(),2.45f);
        Assert::AreEqual(a.GetY(),3.71f);
    }
    
    void Vector2DTest::GetM_Floats_Valid() {
        Vector2D a(3.0f,4.0f);
        
        Assert::AreEqual(a.GetM(),5.0f);
    }
    
    void Vector2DTest::GetM_Rationals_Valid() {
        Vector2D a(34.12f,72.67f);
        
        Assert::AreEqual(a.GetM(),80.28140071025169f);
    }
    
    void Vector2DTest::Add_Rationals_Valid() {
        Vector2D a(34.12f,72.67f);
        Vector2D b(17.51f,39.65f);
        
        a.Add(b);
        
        Assert::AreEqual(a.GetX(), 51.63f);
        Assert::AreEqual(a.GetY(),112.32f);
    }
    
    void Vector2DTest::Subtract_Rationals_Valid() {
        Vector2D a(34.12f,72.67f);
        Vector2D b(17.51f,39.65f);
        
        a.Subtract(b);
        
        Assert::AreEqual(a.GetX(), 16.61f);
        Assert::AreEqual(a.GetY(),112.32f);
    }
    
    void Vector2DTest::Multiply_Rationals_Valid() {
        Vector2D a(34.12f,72.67f);
        
        a.Multiply(4);
        
        Assert::AreEqual(a.GetX(),136.48f);
        Assert::AreEqual(a.GetY(),290.68f);
    }
    
    void Vector2DTest::Run() {
        Execute("Constructor_Empty_Valid----", &Vector2DTest::Constructor_Empty_Valid);
        Execute("Constructor_NonEmpty_Valid-", &Vector2DTest::Constructor_NonEmpty_Valid);
        Execute("GetM_Floats_Valid----------", &Vector2DTest::GetM_Floats_Valid);
        Execute("GetM_Rationals_Valid-------", &Vector2DTest::GetM_Rationals_Valid);
        Execute("Add_Rationals_Valid--------", &Vector2DTest::Add_Rationals_Valid);
        Execute("Add_Vectors_Valid----------", &Vector2DTest::Subtract_Rationals_Valid);
        Execute("Multiply_Rationals_Valid---", &Vector2DTest::Multiply_Rationals_Valid);
    }
}