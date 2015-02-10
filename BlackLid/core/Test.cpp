//
//  Test.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include "Test.h"

namespace core {
    Test::Test() {
        this->name = "";
    }
    Test::Test(std::string name) {
        this->name = name;
    }
    
    Test::~Test() {
        
    }
    
    void Test::Run() {
        Setup();
        Execute();
        Teardown();
    }
}