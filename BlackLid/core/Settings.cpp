//
//  Settings.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include <stdio.h>
#include <string>
#include "Settings.h"

namespace core{
    
    Settings *Settings::GetInstance() {
        if (instance==NULL) {
            instance = new Settings();
        }
        return instance;
    }
    
    Settings::Settings() {
        this->path = "";
        drawReferences = true;
    }
    
    void Settings::SetPath(std::string path){
        this->path = path;
    }
    
    void Settings::SetPath(char *path){
        this->path = path;
    }
    
    std::string Settings::GetPath() {
        return this->path;
    }
    
    bool Settings::DrawReferences() {
        return this->drawReferences;
    }
    
    Settings *Settings::instance = NULL;
}