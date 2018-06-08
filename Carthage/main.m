//
//  main.m
//  Carthage
//
//  Created by friday on 2018/6/6.
//  Copyright © 2018年 friday. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
	@autoreleasepool {

		NSFileManager *fileManager = [NSFileManager defaultManager];

		NSString *urlClone = @"https://github.com/wubaofeng111/ChessManager.git";
		urlClone = [NSString stringWithFormat:@"git clone %@",urlClone];
		system(urlClone.UTF8String);

		NSString *fileName = [urlClone lastPathComponent];
		NSArray  *subPath  = [fileName componentsSeparatedByString:@"."];
		NSString *fullFilePath = [[fileManager currentDirectoryPath] stringByAppendingPathComponent:subPath.firstObject];
		NSLog(@"old file path");
		system("pwd");
		[fileManager changeCurrentDirectoryPath:fullFilePath];
		NSLog(@"new file path");
		system("pwd");
		NSArray *array = [fileManager subpathsAtPath:fullFilePath];

		for (NSString *str in array) {
			if ([str hasSuffix:@"cpp"]) {
				NSString *commend = [NSString stringWithFormat:@"gcc %@",str];
				system(commend.UTF8String);
			}
		}


	}
	return 0;
}
