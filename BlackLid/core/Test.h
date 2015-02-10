//
//  Test.h
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Test__
#define __BlackLid__Test__

#include <stdio.h>
#include <string>

namespace core {
    class Test {
    private:
        std::string name;
    protected:
        virtual void Setup() = 0;
        virtual void Teardown() = 0;
        virtual void Execute() = 0;
    public:
        Test();
        Test(std::string name);
        ~Test();
        
        void Run();
    };
}

#endif /* defined(__BlackLid__Test__) */
