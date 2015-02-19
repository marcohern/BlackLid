//
//  AssertException.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <exception>
#include "../core/GameException.h"
#include "AssertException.h"

namespace exceptions {
    AssertException::AssertException(std::string msg) : GameException(msg) {
        
    }
}