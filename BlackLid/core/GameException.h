//
//  GameException.h
//  BlackLid
//
//  Created by Marco Hernandez on 8/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__GameException__
#define __BlackLid__GameException__


namespace core {
    class GameException: public std::exception {
    private:
        char message[1024];
    public:
        GameException(std::string msg);
        virtual const char *what() const throw();
    };
}

#endif /* defined(__BlackLid__GameException__) */
