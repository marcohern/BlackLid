//
//  AssertException.h
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__AssertException__
#define __BlackLid__AssertException__

#include <stdio.h>
#include "../core/GameException.h"

namespace exceptions {
    class AssertException: public core::GameException {
    public:
        AssertException(std::string msg);
    };
}
#endif /* defined(__BlackLid__AssertException__) */
