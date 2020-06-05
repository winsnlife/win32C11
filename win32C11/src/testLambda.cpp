#include "testLambda.h"
#include "pch.h"

void  testLambda() {
	
	int a = 111, b = 222;
	auto func = [=,&b]()mutable { a = 22; b = 333; std::cout << "a:" << a << " b:" << b << std::endl; };
	func();
}