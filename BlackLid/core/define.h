//
//  define.h
//  BlackLid
//
//  Created by Marco Hernandez on 10/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#ifndef __BlackLid__define__
#define __BlackLid__define__

#define PI  3.14159265359
#define TAU 6.28318530718
#define TPS 1000

#ifdef __OSX__

#include "define_mac.h"

#endif /*__BlackLid__MacOS__*/


#ifdef __MINGW32__

#include "define_win.h"

#endif /*__BlackLid__Windows__*/


#endif /* defined(__BlackLid__define__) */
