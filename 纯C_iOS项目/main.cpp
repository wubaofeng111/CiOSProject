#include <CoreFoundation/CoreFoundation.h>
#include <CoreFoundation/CFString.h>
#include <objc/runtime.h>
#include <objc/message.h>
#include "AppDelegate.h"
#include "RuntimeMethod.h"




 CFStringRef strRef = CFSTR("AppDelegate");

AppDelegate theApp;

int main(int argc, char *argv[])
{

	float afloat = 1234.144; // 32 位
	Byte  afloatByte[4];
	memcpy(afloatByte, &afloat, 4);

	void * pfloatByte = afloatByte;
	void * pfloat = &afloat;

	
	id autoreleasePool = objc_msgSend(
			  (id)objc_msgSend(
							   (id)objc_getClass("NSAutoreleasePool"), sel_registerName("alloc")
							   ),
									  sel_registerName("init")
									  );
	MainApp mainAct = (MainApp)UIApplicationMain;
	mainAct(argc, argv, nil, strRef);
	
	objc_msgSend(autoreleasePool, sel_registerName("drain"));
	return 0;
}
