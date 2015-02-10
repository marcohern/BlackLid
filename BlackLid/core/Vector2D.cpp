//
//  Vector2D.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include "Vector2D.h"

namespace core {
    Vector2D::Vector2D() {
        this->x = 0.0f;
        this->y = 0.0f;
    }
    
    Vector2D::Vector2D(float x, float y) {
        this->SetXY(x, y);
    }
    
    Vector2D::Vector2D(Vector2D const &v) {
        this->SetXY(v.x, v.y);
    }
    
    void Vector2D::SetXY(float x, float y){
        this->x = x;
        this->y = y;
    }
    
    void Vector2D::SetX(float x) {
        this->x = x;
    }
    
    void Vector2D::SetY(float y) {
        this->y = y;
    }
    
    float Vector2D::GetX() {
        return this->x;
    }
    
    float Vector2D::GetY() {
        return this->y;
    }
    
    float Vector2D::GetM() {
        return sqrt(this->y*this->y + this->x*this->x);
    }
    
    void Vector2D::Add(Vector2D v){
        this->x+=v.x;
        this->y+=v.y;
    }
    
    void Vector2D::Subtract(Vector2D v) {
        this->x-=v.x;
        this->y-=v.y;
    }
    
    void Vector2D::Multiply(float s){
        this->x*=s;
        this->y*=s;
    }
    
    float Vector2D::Multiply(Vector2D v) {
        return this->x*v.x + this->y*v.y;
    }
    
    float Vector2D::GetAngleBetween(Vector2D v){
        return this->x*v.x + this->y*v.y/(sqrt(this->x*this->x + v.x*v.x)*sqrt(this->y*this->y + v.y*v.y));
    }
    
    Vector2D Vector2D::Unit() {
        return Vector2D(this->x/this->GetM(), this->y/this->GetM());
    }
    
    bool Vector2D::Equals(Vector2D v) {
        return ((this->x == v.x) && (this->y == v.y));
    }
}