//
//  main.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 8/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include <stdio.h>

#include "core/BlackLidEngine.h"

using namespace core;

int main(int argc, const char * args[]) {
    BlackLidEngine e;
    try {
        e.Setup();
        e.Run();
        e.Quit();
    } catch (GameException ex) {
        printf("Error: %s",ex.what());
    }
    return 0;
}