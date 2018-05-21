//
//  UIWindow.cpp
//  纯C_iOS项目
//
//  Created by friday on 2018/1/19.
//  Copyright © 2018年 friday. All rights reserved.
//

#include "UIWindow.hpp"


UIWindow* UIWindow::alloc()
{
	UIWindow*aWindow = new UIWindow();
	
	return aWindow;
}

UIWindow *UIWindow::init()
{
	
	
	return this;
}

UIWindow *UIWindow::initWithFrame(CGRect frame)
{
	SendMsg_Frame smf = (SendMsg_Frame)objc_msgSend;
	smf(obj,sel_getUid("initWithFrame:"),frame);
	
	return this;
}

UIWindow::UIWindow()
{
	obj = objc_msgSend((id)objc_getClass("UIWindow"), sel_getUid("alloc"));
}


void UIWindow::makeKeyAndVisible()
{
	objc_msgSend(obj, sel_getUid("makeKeyAndVisible"));
}

void UIWindow::setRootViewController(id aVC)
{
	SendMsg_1 amg = (SendMsg_1)objc_msgSend;
	amg(obj, sel_getUid("setRootViewController:"),aVC);
}



UIWindow::~UIWindow()
{
	
}
