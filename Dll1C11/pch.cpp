// pch.cpp: 与预编译标头对应的源文件

#include "pch.h"

// 当使用预编译的头时，需要使用此源文件，编译才能成功。


void testAuto() {

	auto a = 5;
	cout << "short  a :" << a << endl;
	auto pi = new auto(2);

	cout << "short  pi :" << pi << endl;
}
