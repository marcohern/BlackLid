//
//  Settings.h
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Settings__
#define __BlackLid__Settings__


namespace  core {
    class Settings {
    private:
        static Settings *instance;
        
        std::string path;
        bool drawReferences;
        Settings();
    public:
        static Settings *GetInstance();
        
        void SetPath(std::string path);
        void SetPath(const char *path);
        void SetPathBase(const char *path);
        void SetPathBase(std::string path);
        std::string GetPath();
        std::string GetResourcePath(const char* path);
        
        bool DrawReferences();
    };
}
#endif /* defined(__BlackLid__Settings__) */
