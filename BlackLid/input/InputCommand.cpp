//
//  InputCommand.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 8/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include "InputCommand.h"

namespace input{
    InputCommand::InputCommand() {
        up = down = left = right = a = b = select = start = false;
    }
    
    InputCommand::~InputCommand() {
        
    }
    
    void InputCommand::Update(SDL_KeyboardEvent *e) {
        bool press= false;
        if (e->type==SDL_KEYDOWN) {
            press = true;
        } else if (e->type==SDL_KEYUP) {
            press = false;
        }
        
        switch (e->keysym.sym) {
            case SDLK_UP: up=press; break;
            case SDLK_DOWN: down=press;break;
            case SDLK_LEFT: left=press;break;
            case SDLK_RIGHT: right=press;break;
            case SDLK_a: a=press;break;
            case SDLK_s: b=press;break;
            case SDLK_RETURN: start=press;break;
            case SDLK_TAB: select=press;break;
        }
        
        printf("d:%s f1:%s f2:%s\n", (up)?"^":(down)?"_":(left)?"<":(right)?">":".", (a)?"X":".", (b)?"X":".");
    }
}