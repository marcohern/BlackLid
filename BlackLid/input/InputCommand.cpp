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
        up = down = left = right = a = b = select = start = quit = false;
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
            case SDLK_ESCAPE: quit=press;break;
        }
        
        printf("d:%s f1:%s f2:%s\n", (up)?"^":(down)?"_":(left)?"<":(right)?">":".", (a)?"X":".", (b)?"X":".");
    }
    
    bool InputCommand::Up() { return up; }
    bool InputCommand::Down() { return down; }
    bool InputCommand::Left() { return left; }
    bool InputCommand::Right() { return right; }
    
    bool InputCommand::A() { return a; }
    bool InputCommand::B() { return b; }
    bool InputCommand::X() { return x; }
    bool InputCommand::Y() { return y; }
    
    bool InputCommand::L1() { return l1; }
    bool InputCommand::L2() { return l2; }
    bool InputCommand::L3() { return l3; }
    bool InputCommand::R1() { return r1; }
    bool InputCommand::R2() { return r2; }
    bool InputCommand::R3() { return r3; }
    
    bool InputCommand::Select() { return select; }
    bool InputCommand::Start() { return start; }
    
    bool InputCommand::Quit() { return quit; }
}