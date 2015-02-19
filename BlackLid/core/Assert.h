//
//  Assert.h
//  BlackLid
//
//  Created by Marco Hernandez on 9/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__Assert__
#define __BlackLid__Assert__

namespace core {
    class Assert {
        static std::stringstream s;
    public:
        static void AreEqual(int a, int b);
        static void AreEqual(float a, float b);
        static void AreEqual(Vector2D a, Vector2D b);
    };
}
#endif /* defined(__BlackLid__Assert__) */
