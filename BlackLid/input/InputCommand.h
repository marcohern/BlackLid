//
//  InputCommand.h
//  BlackLid
//
//  Created by Marco Hernandez on 8/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__InputCommand__
#define __BlackLid__InputCommand__

#include <stdio.h>
#include <SDL2/SDL.h>

namespace input {
    
    class InputCommand {
    private:
        bool
            //D-pad
            up, down, left, right,
            //Buttons
            a, b, x, y,
            //L & R buttons
            l1, l2, l3, r1, r2, r3,
            //others
            select, start;
        
        //L & R joysticks
        int l3h, l3v, r3h, r3v;
        
        bool quit;
        
    public:
        InputCommand();
        ~InputCommand();
        
        void Update(SDL_KeyboardEvent *e);
        
        bool Up();
        bool Down();
        bool Left();
        bool Right();
        bool A();
        bool B();
        bool X();
        bool Y();
        bool L1();
        bool L2();
        bool L3();
        bool R1();
        bool R2();
        bool R3();
        bool Select();
        bool Start();
        bool Quit();
    };
}
#endif /* defined(__BlackLid__InputCommand__) */
