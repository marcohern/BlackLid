//
//  Settings.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>
#include "../core/define.h"
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
        drawReferences = false;
    }
    
    void Settings::SetPath(std::string path){
        this->path = path;
    }
    
    void Settings::SetPath(const char *path){
        this->path = path;
    }
    
    void Settings::SetPathBase(const char *path) {
        this->path = path;
        unsigned long lof = this->path.find_last_of("/");
        this->path = this->path.substr(0, lof);
        lof = this->path.find_last_of("/");
        this->path = this->path.substr(0, lof);
    }
    
    std::string Settings::GetPath() {
        return this->path;
    }
    
    std::string Settings::GetResourcePath(const char *path) {
        std::string result(this->path);
        result.append("/Resources/content");
        result.append(path);
        return result;
    }
    
    bool Settings::DrawReferences() {
        return this->drawReferences;
    }
    
    Settings *Settings::instance = NULL;
}