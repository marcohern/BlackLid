//
//  main.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 8/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <SDL2/SDL.h>

#include "core/Settings.h"
#include "core/GameException.h"

#include "core/Vector2D.h"

#include "objects/Placeable.h"
#include "objects/Drawable.h"
#include "objects/Animation.h"

#include "core/List.h"
#include "input/InputCommand.h"
#include "core/Fps.h"
#include "core/Engine.h"
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
    Settings::GetInstance()->SetPathBase(args[0]);
    rungame();
    return 0;
}