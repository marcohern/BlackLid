//
//  InputMap.h
//  BlackLid
//
//  Created by Marco Hernandez on 8/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__InputMap__
#define __BlackLid__InputMap__

#include <stdio.h>
#include <SDL2/SDL.h>
namespace input {
    class InputKeyMap {
    private:
        SDL_Keycode up, down, left, right,
            a, b, x, y,
            l1, l2, l3, r1, r2, r3,
            select, start;
    
    public:
        InputKeyMap();
        ~InputKeyMap();
    
        void SetUp(SDL_Keycode up);
        void SetDown(SDL_Keycode down);
        void SetLeft(SDL_Keycode left);
        void SetRight(SDL_Keycode right);
        void SetL1(SDL_Keycode l1);
        void SetL2(SDL_Keycode l2);
        void SetL3(SDL_Keycode l3);
        void SetR1(SDL_Keycode r1);
        void SetR2(SDL_Keycode r2);
        void SetR3(SDL_Keycode r3);
        void SetA(SDL_Keycode a);
        void SetB(SDL_Keycode b);
        void SetX(SDL_Keycode x);
        void SetY(SDL_Keycode y);
        void SetSelect(SDL_Keycode select);
        void SetStart(SDL_Keycode start);
    
        SDL_Keycode GetUp();
        SDL_Keycode GetDown();
        SDL_Keycode GetLeft();
        SDL_Keycode GetRight();
        SDL_Keycode GetA();
        SDL_Keycode GetB();
        SDL_Keycode GetX();
        SDL_Keycode GetY();
        SDL_Keycode GetL1();
        SDL_Keycode GetL2();
        SDL_Keycode GetL3();
        SDL_Keycode GetR1();
        SDL_Keycode GetR2();
        SDL_Keycode GetR3();
        SDL_Keycode GetSelect();
        SDL_Keycode GetStart();
    };
}
#endif /* defined(__BlackLid__InputMap__) */
