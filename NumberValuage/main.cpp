//
//  main.m
//  NumberValuage
//
//  Created by friday on 2018/5/21.
//  Copyright © 2018年 friday. All rights reserved.
//

#include <stdio.h>
#include <string.h>


typedef struct Test1
{
	unsigned char a1 : 2;
	unsigned char a2  : 1;
	unsigned char a3 : 1;
	unsigned char a4 : 1;

	unsigned char a5 : 1;
	unsigned char a6  : 1;
	unsigned char a7 : 1;
	unsigned char a8 : 1;


}Test1;


typedef struct Test2
{
	unsigned int a1 ;
	unsigned int a2;
	unsigned int a3;;
	unsigned int a4;

	unsigned int a5;
	unsigned int a6;
	unsigned int a7;
	unsigned int a8;

	unsigned int a9;
	unsigned int a10;
	unsigned int a11;
	unsigned int a12;

}Test2;

int main(int argc, const char * argv[]) {
	printf("1234");
	return 0;
}
