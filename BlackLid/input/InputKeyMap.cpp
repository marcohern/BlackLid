//
//  InputMap.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 8/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include "InputKeyMap.h"

namespace input {
    InputKeyMap::InputKeyMap() {
        
    }
    
    InputKeyMap::~InputKeyMap() {
        
    }
    
    void InputKeyMap::SetUp(SDL_Keycode up) { this->up = up; }
    void InputKeyMap::SetDown(SDL_Keycode down) { this->down = down; }
    void InputKeyMap::SetLeft(SDL_Keycode left) { this->left = left; }
    void InputKeyMap::SetRight(SDL_Keycode right) { this->right = right; }
    void InputKeyMap::SetA(SDL_Keycode a) { this->a = a; }
    void InputKeyMap::SetB(SDL_Keycode b) { this->b = b; }
    void InputKeyMap::SetX(SDL_Keycode x) { this->x = x; }
    void InputKeyMap::SetY(SDL_Keycode y) { this->y = y; }
    void InputKeyMap::SetL1(SDL_Keycode l1) { this->l1 = l1; }
    void InputKeyMap::SetL2(SDL_Keycode l2) { this->l2 = l2; }
    void InputKeyMap::SetL3(SDL_Keycode l3) { this->l3 = l3; }
    void InputKeyMap::SetR1(SDL_Keycode r1) { this->r1 = r1; }
    void InputKeyMap::SetR2(SDL_Keycode r2) { this->r2 = r2; }
    void InputKeyMap::SetR3(SDL_Keycode r3) { this->r3 = r3; }
    void InputKeyMap::SetSelect(SDL_Keycode select) { this->select = select; }
    void InputKeyMap::SetStart(SDL_Keycode start) { this->start = start; }
    
    SDL_Keycode InputKeyMap::GetUp() { return up; }
    SDL_Keycode InputKeyMap::GetDown() { return down; }
    SDL_Keycode InputKeyMap::GetLeft() { return left; }
    SDL_Keycode InputKeyMap::GetRight() { return right; }
    SDL_Keycode InputKeyMap::GetA() { return a; }
    SDL_Keycode InputKeyMap::GetB() { return b; }
    SDL_Keycode InputKeyMap::GetX() { return x; }
    SDL_Keycode InputKeyMap::GetY() { return y; }
    SDL_Keycode InputKeyMap::GetL1() { return l1; }
    SDL_Keycode InputKeyMap::GetL2() { return l2; }
    SDL_Keycode InputKeyMap::GetL3() { return l3; }
    SDL_Keycode InputKeyMap::GetR1() { return r1; }
    SDL_Keycode InputKeyMap::GetR2() { return r2; }
    SDL_Keycode InputKeyMap::GetR3() { return r3; }
    SDL_Keycode InputKeyMap::GetSelect() { return select; }
    SDL_Keycode InputKeyMap::GetStart() { return start; }
    
}