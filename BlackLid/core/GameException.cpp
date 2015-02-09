//
//  GameException.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 8/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include "GameException.h"

namespace core{
    GameException::GameException(std::string msg) {
        strcpy(message, msg.c_str());
    }
    
    const char *GameException::what() const throw() {
        return message;
    }
}