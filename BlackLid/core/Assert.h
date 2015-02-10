//
//  Assert.h
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Assert__
#define __BlackLid__Assert__

#include <stdio.h>
#include "Vector2D.h"
namespace core {
    class Assert {
        bool AreEqual(int a, int b);
        bool AreEqual(float a, float b);
        bool AreEqual(Vector2D a, Vector2D b);
    };
}
#endif /* defined(__BlackLid__Assert__) */
