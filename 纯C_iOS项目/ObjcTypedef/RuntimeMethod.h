//
//  RuntimeMethod.h
//  纯C_iOS项目
//
//  Created by friday on 2018/1/20.
//  Copyright © 2018年 friday. All rights reserved.
//

#ifndef RuntimeMethod_h
#define RuntimeMethod_h

#include <objc/runtime.h>
#include <objc/message.h>
extern "C"
{
	CGContextRef UIGraphicsGetCurrentContext();
	int UIApplicationMain(int, ...);
	
};

typedef int(*MainApp)(int,char**,id,CFStringRef) ;
typedef void(*SendMsg_1)(id,SEL,id);
typedef void(*SendMsg_Color)(id,SEL,CGColorRef);
typedef void(*SendMsg_Frame)(id,SEL,CGRect);


#endif /* RuntimeMethod_h */
