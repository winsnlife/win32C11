// pch.h: 这是预编译标头文件。
// 下方列出的文件仅编译一次，提高了将来生成的生成性能。
// 这还将影响 IntelliSense 性能，包括代码完成和许多代码浏览功能。
// 但是，如果此处列出的文件中的任何一个在生成之间有更新，它们全部都将被重新编译。
// 请勿在此处添加要频繁更新的文件，这将使得性能优势无效。

#ifndef PCH_H
#define PCH_H

// 添加要在此处预编译的标头
#include "framework.h"
	//设定插入点
#include <assert.h>
	 //字符处理
#include <ctype.h>
	 //定义错误码
#include <errno.h>
	 //浮点数处理
#include <float.h>
//#include <fstream.h>　　　 //文件输入／输出
//#include <iomanip.h>　　　 //参数化输入／输出
//#include <iostream.h>　　　//数据流输入／输出
	//定义各种数据类型最值常量
#include <limits.h>
	//定义本地化函数
#include <locale.h>
	 //定义数学函数
#include <math.h>
	 //定义输入／输出函数
#include <stdio.h>
//定义杂项函数及内存分配函数
#include <stdlib.h>
	//字符串处理
#include <string.h>
//#include <strstrea.h>　　　//基于数组的输入／输出
	 //定义关于时间的函数
#include <time.h>
//宽字符处理及输入／输出
#include <wchar.h>
	//宽字符分类
#include <wctype.h>
	//STL 通用算法
#include <algorithm>
	 //STL 位集容器
#include <bitset>
#include <cctype>
#include <cerrno>
#include <clocale>
#include <cmath>
	 //复数类
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
	  //STL 双端队列容器
#include <deque>
	//异常处理类
#include <exception>

#include <fstream>
//STL 定义运算函数（代替运算符
#include <functional>
	  //STL 线性列表容器
#include <list>
	   //STL 映射容器
#include <map>
#include <iomanip>
	   //基本输入／输出支持
#include <ios>
	 //输入／输出系统使用的前置声明
#include <iosfwd>
#include <iostream>
	 //基本输入流
#include <istream>
	 //基本输出流
#include <ostream>
	  //STL 队列容器
#include <queue>
	   //STL 集合容器
#include <set>
	 //基于字符串的流
#include <sstream>
	  //STL 堆栈容器　
#include <stack>
	//标准异常类
#include <stdexcept>
	//底层输入／输出支持
#include <streambuf>
	 //字符串类
#include <string>
	 //STL 通用模板类
#include <utility>
	 //STL 动态数组容器
#include <vector>
#include <cwchar>
#include <cwctype>

//复数处理
#include <complex.h>
//浮点环境
#include <fenv.h>
//整数格式转换
#include <inttypes.h>
   //布尔环境
#include <stdbool.h>
   //整型环境
#include <stdint.h>
   //通用类型数学宏
//#include <tgmath.h>

#endif //PCH_H

using namespace std;
void testAuto();