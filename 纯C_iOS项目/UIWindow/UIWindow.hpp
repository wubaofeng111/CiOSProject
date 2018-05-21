//
//  UIWindow.hpp
//  纯C_iOS项目
//
//  Created by friday on 2018/1/19.
//  Copyright © 2018年 friday. All rights reserved.
//

#ifndef UIWindow_hpp
#define UIWindow_hpp

#include <stdio.h>
#include <objc/runtime.h>
#include <objc/message.h>
#include <CoreGraphics/CoreGraphics.h>
#include "RuntimeMethod.h"
class UIWindow {
private:
	Class isa;
	id    obj;
	
public:
	static UIWindow * alloc();
	UIWindow *init();
	UIWindow *initWithFrame(CGRect frame);
	void makeKeyAndVisible();
	void setRootViewController(id aVC);
	
	UIWindow();
	~UIWindow();
	
public:
	
};

#endif /* UIWindow_hpp */
