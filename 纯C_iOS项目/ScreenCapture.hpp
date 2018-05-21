//
//  ScreenCapture.hpp
//  纯C_iOS项目
//
//  Created by friday on 2018/1/20.
//  Copyright © 2018年 friday. All rights reserved.
//

#ifndef ScreenCapture_hpp
#define ScreenCapture_hpp

#include <stdio.h>
#include <IOSurface/IOSurfaceRef.h>

class ScreenCapture {
	IOSurfaceRef mSurefaceRef;
	
public:
	ScreenCapture();
	~ScreenCapture();
public:
	
};
#endif /* ScreenCapture_hpp */
