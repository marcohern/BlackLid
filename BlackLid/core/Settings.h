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
        void SetPath(char *path);
        std::string GetPath();
        
        bool DrawReferences();
    };
}
#endif /* defined(__BlackLid__Settings__) */
