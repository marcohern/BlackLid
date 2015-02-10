//
//  main.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 8/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include <stdio.h>

#include "core/BlackLidEngine.h"

#include "core/Test.h"
#include "tests/Vector2DTest.h"

using namespace core;
using namespace tests;

void rungame() {
    BlackLidEngine e;
    try {
        e.Setup();
        e.Run();
        e.Quit();
    } catch (GameException ex) {
        printf("Error: %s",ex.what());
    }
}

void runtest() {
    Test::AddTest(new Vector2DTest());
    Test::RunAllTests();
}

int main(int argc, const char * args[]) {
    printf("path: %s\n", args[0]);
    Settings::GetInstance()->SetPath(args[0]);
    runtest();
    return 0;
}