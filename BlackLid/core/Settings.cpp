//
//  Settings.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

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
    
    Settings *Settings::instance = NULL;
}